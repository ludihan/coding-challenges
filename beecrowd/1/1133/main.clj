(doall
  (map #(println %)
       (filter #(or (= 3 (mod % 5))
                    (= 2 (mod % 5)))
               (apply range
                      (sort < [(read) (inc (read))])))))
