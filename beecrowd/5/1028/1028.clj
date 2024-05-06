(defn figurinhas [x y]
  (if (zero? y)
    (println x)
    (recur y (mod x y))))

(let [N (range (read))]
  (dorun
    (map (fn [x] (figurinhas (read) (read))) N)))
