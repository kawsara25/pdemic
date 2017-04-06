#include "GraphView.h"


GraphView::GraphView()
{
}

GraphView::GraphView(Graph* s)
{
	_subject = s;
	_subject->Attach(this);
}
GraphView::~GraphView()
{
	_subject->Detach(this);
}
void GraphView::UpdateMap(){
	//Called by Notify() when state of Subject changes
	displayMap();
};
void GraphView::displayMap(){
	//_subject->showCity();
	_subject->cityWithAdjacency();
	_subject->cityAndConnection();
	
}
