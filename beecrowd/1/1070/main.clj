(def X (read))

(doall
  (map #(printf "%d\n" %)
       (take 6
             (filter odd?
                       (filter #(>= % X) (range))))))
