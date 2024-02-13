(let [num (read)]
  (cond
    (and (>= num 0) (<= num 25))  (println "Intervalo [0,25]")
    (and (> num 25) (<= num 50))  (println "Intervalo (25,50]")
    (and (> num 50) (<= num 75))  (println "Intervalo (50,75]")
    (and (> num 75) (<= num 100)) (println "Intervalo (75,100]")
    :else (println "Fora de intervalo")))
