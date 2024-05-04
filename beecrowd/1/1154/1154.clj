(defn idades [n num cur]
  (if (< cur 0)
    (float (/ num n))
    (recur (inc n) (+ num cur) (read))))

(printf "%.2f\n" (idades 0 0 (read)))
