(def n 3.14159)

(println
  (str "A=" (format "%.4f" (* n (Math/pow (read) 2)))))
