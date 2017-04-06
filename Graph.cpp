#include"Graph.h"


Graph::Graph(){

}

void Graph::addC(vector<City*>cityVector){

	//vector<City*>::iterator it = cityVector.begin();
	for (unsigned i = 0; i < cityVector.size(); i++)
	{
		addCityToGraph(cityVector[i]);
	}

	Notify();
}
void Graph::addCityToGraph(City *name)
{
	cMap::iterator itr = cityMap.find(name);
	if (itr == cityMap.end())
	{
		vertex *v;
		v = new vertex(name);
		cityMap[name] = v;
		cityInGraph.push_back(name);
		return;
		Notify();
	}
	
	cout << "\nCity already exists!";
}

void Graph::move(City* f, City* t)
{
	/*cMap::iterator itr = cityMap.find(f);
	cMap::iterator it = cityMap.find(f->getCardName());
	//vector<City>::iterator it = cityInGraph.begin();

	itr->second->adj;
	while (itr != cityMap.end())
	{

	}*/
}
void Graph::addedge(City* f, City* t)
{
	//cMap::iterator itr = cityMap.find(f)->second; //find(f);
	vertex *from = (cityMap.find(f)->second);
	vertex *to = (cityMap.find(t)->second);
	vertex *edge = to;
	//cityMap.
	from->adj.push_back(edge);
	to->adj.push_back(from);
	Notify();
}
void Graph::printGraph()
{
	cMap::iterator itr = cityMap.begin();
	//vector<City*>::iterator it = cityInGraph.begin();
	cout << "*****************************************************" << endl;
	cout << "list of cities in map and their information" << endl;
	while (itr != cityMap.end())
	{
		itr->first->print();
		itr++;
	}
	
	
	cout << "*****************************************************" << endl;
}
bool Graph::operator==(City &c)
{
	City newCity;

	return true;
}
void Graph::showCity()
{
	cMap::iterator itr = cityMap.begin();
	cout << "\nCity with connection\n" << endl;

	while (itr != cityMap.end())
	{
		//cityWithAdjacency(itr->first);
		showCityInfo(itr->first);
		++itr;

	}
}
void Graph::showCityInfo(City* name)
{
	
	cMap::iterator itr = cityMap.find(name);
	if (itr != cityMap.end())
	{
		name->print();
		return;
	}

	cout << "city not in graph" << endl;
}
/*
returnthe list of a citis edge
*/
void Graph::getCityEdge(City* c) {

	vertex *from = cityMap.find(c)->second;
	vector<vertex*> v = from->adj;

	cout << "In: " << from->name->getCityName() << " connected to: " << endl;

	vector<vertex*> ::iterator itr = v.begin();

	for (itr; itr != v.end(); itr++) {
		//cout << &itr<< endl;
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i]->name->getCityName() << endl;
	}

}
/*
	display the cities and therir connections
*/
void Graph::cityAndConnection()
{
	cMap::iterator itr = cityMap.begin();
	cout << "\nCity with connection\n" << endl;
	
	while (itr != cityMap.end())
	{
		//cityWithAdjacency(itr->first);
		cityConnection(itr->first);
		++itr;

	}
	

}
void Graph::cityConnection(City* c) {

	vertex *from = cityMap.find(c)->second;
	vector<vertex*> v = from->adj;
	if (v.empty())
	{
		//cout << "no connetion";
	}
	else
	{
		cout << "\n City " << from->name->getCityName() << " connected to: " << endl;
		//vector<vertex*> ::iterator itr = v.begin();

		for (int i = 0; i < v.size(); i++) {
			cout <<  i+1 <<" :" << v[i]->name->getCityName() << endl;
		}


	}
}
/*
	display just the cities that have cnnnection
*/
void Graph::cityWithAdjacency() {

	cMap::iterator itr = cityMap.begin();
	cout << "\nCity with connection\n" << endl;
	while (itr != cityMap.end())
	{
		cityAdjacency(itr->first);
		//cityConnection(itr->first);
		++itr;

	}

}
vector<City*>  Graph::adjacent_cities(City* c)
{
	vector<City*> city_vec;
	vertex *from = cityMap.find(c)->second;
	vector<vertex*> v = from->adj;
	for (int i = 0; i < v.size(); i++) {
		city_vec.push_back(v[i]->name);
		//cout << v[i]->name->getCityName() << endl;
	}
	return city_vec;

}
void Graph::cityAdjacency(City* c){
	vertex *from = cityMap.find(c)->second;
	vector<vertex*> v = from->adj;

	if (v.empty())
	{
		//cout << "no connetion";
	}

	else
		cout << "City " << from->name->getCityName() << endl;

}


Graph::~Graph()
{
	//vector<City>::iterator it = cityInGraph.begin();
	
	


}
void  Graph::createMap()

{

	City c[48];



	//blue
	c[0] = City("Atlanta");
	c[1] = City("San Srancisco");


	c[2] = City("Chicago");


	c[3] = City("Montreal");

	c[4] = City("Washington");


	c[5] = City("New York");


	c[6] = City("London");


	c[7] = City("Madrid");

	c[8] = City("Paris");

	c[9] = City("Milan");

	c[10] = City("Essen");

	c[11] = City("St Petersburg");



	//yellow
	c[12] = City("Los Angeles");


	c[13] = City("Mexico");

	c[14] = City("Miami");

	c[15] = City("Bogota");


	c[16] = City("Lima");

	c[17] = City("Santiago");
	c[18] = City("Buenos Aires");


	c[19] = City("Sao Paolo");


	c[20] = City("Lagos");

	c[21] = City("Kinshasa");
	c[22] = City("Johannesburg");
	c[23] = City("Khartoum");

	//black
	c[24] = City("Moscow");

	c[25] = City("Istanbul");

	c[26] = City("Algers");


	c[27] = City("LeCaire");
	c[28] = City("Bagdad");

	c[29] = City("Teheran");

	c[30] = City("Karachi");

	c[31] = City("Ryad");

	c[32] = City("Dehli");

	c[33] = City("Mumbai");

	c[34] = City("Chennai");


	c[35] = City("Calcutta");


	//red
	c[36] = City("Pekin");
	c[37] = City("Seoul");
	c[38] = City("Tokyo");
	c[39] = City("Shanghai");
	c[40] = City("Osaka");
	c[41] = City("Taipei");

	c[42] = City("Hong Kong");


	c[43] = City("Manville");

	c[44] = City("Bangkok");

	c[45] = City("Ho Chi Min City");


	c[46] = City("Jakarta");

	c[47] = City("Sydney");
	vector <City*> v;

	for (int i = 0; i < 48; i++) {
		v.push_back(&c[i]);
		//v.push_back(cityArr[i])
	}
	addC(v);

	addedge(&c[2], &c[14]);
	addedge(&c[0], &c[14]);
	addedge(&c[2], &c[12]);
	addedge(&c[2], &c[13]);
	addedge(&c[14], &c[13]);
	addedge(&c[16], &c[13]);
	addedge(&c[15], &c[13]);
	addedge(&c[10], &c[11]);
	addedge(&c[6], &c[10]);
	addedge(&c[10], &c[9]);
	addedge(&c[7], &c[8]);
	addedge(&c[6], &c[8]);
	addedge(&c[5], &c[7]);
	addedge(&c[19], &c[7]);
	addedge(&c[5], &c[6]);
	addedge(&c[7], &c[6]);
	addedge(&c[4], &c[5]);
	addedge(&c[3], &c[5]);
	addedge(&c[2], &c[1]);
	addedge(&c[0], &c[2]);
	addedge(&c[2], &c[3]);
	addedge(&c[4], &c[3]);
	addedge(&c[0], &c[4]);
	addedge(&c[11], &c[25]);
	addedge(&c[9], &c[25]);
	addedge(&c[24], &c[25]);
	addedge(&c[11], &c[24]);
	addedge(&c[19], &c[20]);
	addedge(&c[15], &c[19]);
	addedge(&c[7], &c[19]);
	addedge(&c[15], &c[18]);
	addedge(&c[15], &c[16]);
	addedge(&c[14], &c[15]);
	addedge(&c[29], &c[30]);
	addedge(&c[32], &c[30]);
	addedge(&c[24], &c[29]);
	addedge(&c[29], &c[28]);
	addedge(&c[25], &c[26]);
	addedge(&c[7], &c[26]);
	addedge(&c[44], &c[46]);
	addedge(&c[44], &c[45]);
	addedge(&c[46], &c[45]);
	addedge(&c[35], &c[44]);
	addedge(&c[45], &c[43]);
	addedge(&c[35], &c[42]);
	addedge(&c[46], &c[42]);
	addedge(&c[30], &c[33]);
	addedge(&c[32], &c[33]);
	addedge(&c[29], &c[32]);
	addedge(&c[28], &c[32]);
	addedge(&c[28], &c[31]);
	addedge(&c[30], &c[31]);
	addedge(&c[32], &c[34]);
	addedge(&c[33], &c[34]);
	addedge(&c[32], &c[35]);

	//getCityEdge(&c[32]);
	///showCityInfo(&c[47]);

	Notify();
	cout << endl;
}



vertex::~vertex()
{
	delete name;
}
