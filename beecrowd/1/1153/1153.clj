(defn factorial
  ([n]
   (factorial (dec n) n))
  ([n num]
   (if (= n 0)
     num
     (recur (dec n) (* num n)))))

(println (factorial (read)))
