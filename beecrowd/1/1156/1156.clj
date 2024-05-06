(let [s1 (range 1 40 2)
      s2 (map #(Math/pow 2 %) (range))]
  (printf "%.2f\n" (reduce + (map #(/ %1 %2) s1 s2))))
