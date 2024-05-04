(dotimes [i (read)]
  (let [X (float (read))
        Y (float (read))]
    (if (not= Y 0.0)
      (printf "%.1f\n" (/ X Y))
      (println "divisao impossivel"))))
