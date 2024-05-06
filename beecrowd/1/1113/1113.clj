(defn ordem [x y]
  (cond
    (< x y) (do (println "Crescente") (recur (read) (read)))
    (> x y) (do (println "Decrescente") (recur (read) (read)))))

(ordem (read) (read))
