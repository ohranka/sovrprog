#pragma once

namespace IBusko {
	template<typename T>
	class VectorStack {
		private:
			T* arr;
			std::size_t capacity = 10;
			std::size_t size = 0;
		public:
			VectorStack() noexcept;
			VectorStack(const VectorStack&) = delete;
			VectorStack& operator = (const VectorStack&) = delete;
			~VectorStack() noexcept;
			
			bool empty() const noexcept;
			void pop() noexcept;
			void push(const T& value) noexcept;
			std::size_t get_size() const noexcept;
			T top() const noexcept;
	};
}
