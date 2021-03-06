#ifndef PROJECT_CAL_SRC_FAKEEDGE_H_
#define PROJECT_CAL_SRC_FAKEEDGE_H_

#include <string>

/** \brief a class to hold edge information such as it's ID, start node and end node. */

class FakeEdge {
private:
	unsigned long long edgeId, v1Id, v2Id;
	bool twoWay;
	std::string name;
public:

	/** \brief Builds an edge.
	 * \param edgeId ID of edge.
	 * \param v1Id ID of source node.
	 * \param v2Id ID of destiny node. */
	FakeEdge(unsigned long long edgeId, unsigned long long v1Id, unsigned long long v2Id);

	/** \brief Destroys a FakeEdge. */
	virtual ~FakeEdge();

	/** \brief Returns edge ID. */
	unsigned long long getEdgeId() const;

	/** \brief Returns ID of origin source node. */
	unsigned long long getV1Id() const;

	/** \brief Returns ID of destiny node. */
	unsigned long long getV2Id() const;

	/** \brief Returns information about the street.
	 *  \return True if road is a two way street.
	 *  \return False if road is only one way street. */
	bool isTwoWay() const;

	/** \brief Method to change a roads way.  */
	void setTwoWay(bool twoWay);

	void setName(std::string nam);

	std::string getName() const;

};

#endif /* PROJECT_CAL_SRC_FAKEEDGE_H_ */
