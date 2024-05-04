(let [n1 (read)
      n2 (read)
      entrada (if (> n2 n1) [(inc n1) n2] [(inc n2) n1])]
  (doall
    (map #(if (or (= (mod % 5) 3)
                  (= (mod % 5) 2)) (println %))
         (apply range entrada))))
