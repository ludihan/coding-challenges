(let [X (read) Y (read)]
  (cond
    (and (= X 0.0) (= Y 0.0)) (println "Origem")
    (= X 0.0) (println "Eixo Y")
    (= Y 0.0) (println "Eixo X")
    (> X 0.0) (cond
              (> Y 0.0) (println "Q1")
              (< Y 0.0) (println "Q4"))
    (< X 0.0) (cond
              (> Y 0.0) (println "Q2")
              (< Y 0.0) (println "Q3"))))
