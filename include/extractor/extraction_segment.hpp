#ifndef OSRM_EXTRACTION_SEGMENT_HPP
#define OSRM_EXTRACTION_SEGMENT_HPP

#include <extractor/node_based_edge.hpp>
#include <util/coordinate.hpp>
#include <util/typedefs.hpp>

namespace osrm::extractor
{

struct ExtractionSegment
{
    ExtractionSegment(const osrm::util::Coordinate source_,
                      const osrm::util::Coordinate target_,
                      double distance_,
                      double weight_,
                      double duration_,
                      const NodeBasedEdgeClassification flags_,
                      const OSMNodeID source_node_id_,
                      const OSMNodeID target_node_id_)
        : source(source_), target(target_), distance(distance_), weight(weight_),
          duration(duration_), flags(flags_),
          source_node_id(source_node_id_), target_node_id(target_node_id_)
    {
    }

    const osrm::util::Coordinate source;
    const osrm::util::Coordinate target;
    const double distance;
    double weight;
    double duration;
    const NodeBasedEdgeClassification flags;
    const OSMNodeID source_node_id;
    const OSMNodeID target_node_id;
};
} // namespace osrm::extractor

#endif
