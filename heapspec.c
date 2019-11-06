#include <stdint.h>
#include <assert.h>
#include<stdio.h>
#include "heap.h"

void test_sort( int32_t data[], uint32_t len)
{
	uint32_t idx;
	for (idx = 1; idx <= len; ++idx) {
		assert (data[idx] <= data[idx+1]);
	}
}

void display(Heap *heap,int32_t len)
{
	for(int i=0;i<=len;i++){
	if(heap->timestamp[i] >= 0 && heap->timestamp[i]<=1330)
	{
		printf(heap->future_event[i]);
	}
}
}

int main()
{

	int32_t timestamp[] = {0,1030};
	int32_t aircraft_num[] ={11,12};
	int32_t future_event[] = {1,2};


	Heap heap = heap_new(timestamp,aircraft_num,future_event,1);

	heap_insert(&heap,1230,13,1);
	heap_test(&heap);
	heap_sort(&heap);
	test_sort(heap.timestamp, 2);

	display(&heap,2);

	return 0;
}
