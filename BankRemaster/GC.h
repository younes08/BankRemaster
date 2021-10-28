#pragma once

namespace Bank
{
	class GC
	{
		private:
			int count;
		public:
			GC(int);
			void incr();
			int decr();
	};
}

