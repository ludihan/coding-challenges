(let [nums [(read) (read)]
      biggest (apply max nums)
      smallest (apply min nums)]
(if (= (rem biggest smallest) 0)
  (println "Sao Multiplos")
  (println "Nao sao Multiplos")))
