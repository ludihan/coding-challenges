(dotimes [n (read)]
  (let [X (read)]
    (cond
      (== X 0) (println "NULL")
      (odd? X) (print "ODD ")
      (even? X) (print "EVEN "))
    (cond
      (> X 0) (println "POSITIVE")
      (< X 0) (println "NEGATIVE"))))
