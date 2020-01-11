template <class InputIterator, class OutputIterator, class UnaryOperator>
	OutputIterator transform (InputIterator first1, InputIterator last1,
								OutputIterator result, UnaryOperator op);


template <class InputIterator1, class InputIterator2, 
		  class OutputIterator, class BinaryOperator >
	OutputIterator transform(InputIterator1 first1, InputIterator1 last1,
							InputIterator2 first2, OutputIterator result,
							BinaryOperator binary_op);







	