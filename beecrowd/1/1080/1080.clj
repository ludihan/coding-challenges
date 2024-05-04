(defn maior [n]
  (let [input (repeatedly n read)
        biggest (apply max input)]
    [
     biggest
     (first (first (filter #(= biggest (second %)) (map-indexed vector input))))
     ]))

(defn main [n]
  (let [aaa (maior n)]
    (printf "%d\n%d\n" (get aaa 0) (inc (get aaa 1)))))

(main 100)
