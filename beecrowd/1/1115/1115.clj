(defn quadrante [x y]
  (if (and (not= x 0) (not= y 0))
    (do
      (if (and (> x 0) (> y 0)) (println "primeiro"))
      (if (and (< x 0) (> y 0)) (println "segundo"))
      (if (and (< x 0) (< y 0)) (println "terceiro"))
      (if (and (> x 0) (< y 0)) (println "quarto"))
      (recur (read) (read)))))

(quadrante (read) (read))
