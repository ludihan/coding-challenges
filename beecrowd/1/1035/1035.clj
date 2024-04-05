(def A (read))
(def B (read))
(def C (read))
(def D (read))

(if (and
      (> B C)
      (> D A)
      (> (+ C D) (+ A B))
      (pos? C)
      (pos? D)
      (even? A))
  (println "Valores aceitos")
  (println "Valores nao aceitos"))
