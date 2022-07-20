#pragma once


class cMaxHeap {

private:
	int *vet;
	int maxElem;
	int numElem;

	void upHeap(int noCor);
	void downHeap(int noCor);

public:

	cMaxHeap();
	cMaxHeap(int n);

	bool	insertHeap(int d);
	bool 	removeHeap(int& d);

};
