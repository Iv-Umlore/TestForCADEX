#ifndef _MyParSort_
#define _MyParSort_

#include "AllHeader.h"
#include <tbb/parallel_sort.h>
#include <tbb/task_scheduler_init.h>

using namespace tbb;

void MyParallelArraySort(Circle** curv, int length) {

	parallel_sort(curv[0], curv[length]);

}

#endif // !_MyParSort_