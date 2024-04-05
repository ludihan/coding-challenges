(let [X (let [X (read)] (if (even? X) (inc X) X))]
  (doall (map #(printf "%d\n" %)
       (range X (+ X (* 2 6)) 2))))
