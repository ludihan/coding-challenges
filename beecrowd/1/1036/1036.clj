(defn bhaskara [A B C]
  (let [delta (- (* B B) (* 4 A C))]
    (if (or (= A 0.0) (<= delta 0.0))
      (println "Impossivel calcular")
      (printf "R1 = %.5f\nR2 = %.5f\n"
              (/ (+ (- B) (Math/sqrt delta)) (* 2 A))
              (/ (- (- B) (Math/sqrt delta)) (* 2 A))))))

(bhaskara (read) (read) (read))
