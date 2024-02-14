(let [A (read)
      B (read)
      C (read)]
  (if (and (> (+ B C) A)
           (> (+ A C) B)
           (> (+ A B) C))
    (printf "Perimetro = %.1f\n" (+ A B C))
    (printf "Area = %.1f\n" (/ (* (+ A B) C) 2))))
