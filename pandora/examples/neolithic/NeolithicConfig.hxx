
#ifndef __NeolithicConfig_hxx__
#define __NeolithicConfig_hxx__

#include <Config.hxx>
#include <Point2D.hxx>

namespace Examples
{

class NeolithicConfig: public Engine::Config
{
	Engine::Point2D<int> _size;
	bool _mountains;
	// threshold defining minimum height for a cell to be considered mountain
	int _heightThreshold;

	bool _seaTravel;
	// maximum distance of sea jumps, in cells
	int _seaTravelDistance;
	
	// simulation parameters
	// maximum density, in habitants per km^2
	float _saturationDensity;
	// reproductive rate in a generation
	float _reproductiveRate;
	// percentage of population that does not migrate
	float _persistence;

	std::string _demFile;
	std::string _initPopulationFile;
public:
	NeolithicConfig();  
	virtual ~NeolithicConfig();
    
	void extractParticularAttribs(TiXmlElement *pRoot);
	const Engine::Point2D<int> & getSize() const;
	friend class NeolithicWorld;
};

} // namespace Examples 

#endif // __NeolithicConfig_hxx__

