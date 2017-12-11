//
//  node.h
//
//  Created by Jaydeep Singh on 11/21/17.
//  Copyright © 2017 DeAnza. All rights reserved.
//

#ifndef node_h
#define node_h

template <typename Data> class MyNode
{
private:
	Data myValue;
	Data myKey;

public:
	MyNode();
	MyNode(Data, Data);
	~MyNode();
	Data getMyValue();
	void setMyValue(Data);
	std::string getMyKey();
};

//Default Constructor
template <typename Data> MyNode<Data>::MyNode()
{
	//do nothing. default value would be garbage.
}

//Constructor that takes one Data parameter
template <typename Data> MyNode<Data>::MyNode(Data key, Data value)
{
	myKey = key;
	myValue = value;
}

//Destructor 
template <typename Data> MyNode<Data>::~MyNode()
{
	//Do nothing
}

//returns the value stored in node
template <typename Data> Data MyNode<Data>::getMyValue()
{
	return myValue;
}

template <typename Data> std::string MyNode<Data>::getMyKey()
{
	return myKey;
}

//sets the value stored in node
template <typename Data> void MyNode<Data>::setMyValue(Data newValue)
{
	myValue = newValue;
}

#endif /* node_h */
