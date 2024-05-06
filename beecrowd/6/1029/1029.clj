(defn fib
  ([n]
   (fib n 0))

  ([n calls]
   (if (<= n 1)
     [n calls]
     (let [[a calls1] (fib (- n 1) (+ calls 1))
           [b calls2] (fib (- n 2) (+ calls1 1))]
       [(+ a b) calls2]))))

(def input (repeatedly (read) read))

(dorun
  (map
    (fn [x]
      (let [result (fib x)]
        (printf "fib(%d) = %d calls = %d\n"
                x
                (get result 1)
                (get result 0)))) input))
