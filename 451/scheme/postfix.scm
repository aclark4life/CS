; postfix.scm

(define nil '())

(define (calculate exp stack)
	(cond	((eq? '+ (car exp)) (+ (cadr stack) (car stack)))
		((eq? '- (car exp)) (- (cadr stack) (car stack)))
		((eq? '* (car exp)) (* (cadr stack) (car stack)))
		((eq? '/ (car exp)) (/ (cadr stack) (car stack)))
	)
)

(define (postfix-calculate exp stack)
	(cond	((null? exp) (car stack))
		((number? (car exp)) (postfix-calculate (cdr exp) (cons (car exp) stack)))
		(else
			(postfix-calculate (cdr exp) (cons (calculate exp stack) (cdr (cdr stack))))
		)
	)
)

(define (postfix exp)
	(postfix-calculate exp nil)
)
