(defn fibonacci
  ([n]
   (case n
     1 0
     2 1
     (fibonacci (- n 2) 0 1 [0 1])))

  ([n a b nums]
   (if (= 0 n)
     nums
     (recur (dec n) b (+ a b) (conj nums (+ a b)))
     )
   ))

(apply println (fibonacci (read)))
