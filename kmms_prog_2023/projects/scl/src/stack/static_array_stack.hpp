#pragma once

namespace IBusko {
	template<typename T, std::size_t n>
	class StaticArrayStack {
		private:
			T arr[n];
			std::size_t size = 0;
		public:
			StaticArrayStack() noexcept {};
			StaticArrayStack(const StaticArrayStack&) = delete;
			StaticArrayStack& operator = (const StaticArrayStack&) = delete;
			~StaticArrayStack() noexcept;
			
			bool empty() const noexcept;
			void pop();
			void push(const T& value);
			std::size_t get_size() const noexcept;
			T top() const noexcept;
	};
}
