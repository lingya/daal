/* file: logistic_cross_layer_backward_types.h */
/*******************************************************************************
* Copyright 2014-2017 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

/*
//++
//  Implementation of the backward logistic cross-entropy layer types.
//--
*/

#ifndef __NEURAL_NENTWORK_LOSS_LOGISTIC_CROSS_LAYER_BACKWARD_TYPES_H__
#define __NEURAL_NENTWORK_LOSS_LOGISTIC_CROSS_LAYER_BACKWARD_TYPES_H__

#include "algorithms/algorithm.h"
#include "data_management/data/tensor.h"
#include "data_management/data/homogen_tensor.h"
#include "services/daal_defines.h"
#include "algorithms/neural_networks/layers/layer_backward_types.h"
#include "algorithms/neural_networks/layers/loss/loss_layer_backward_types.h"
#include "algorithms/neural_networks/layers/loss/logistic_cross_layer_types.h"

namespace daal
{
namespace algorithms
{
namespace neural_networks
{
namespace layers
{
namespace loss
{
namespace logistic_cross
{
/**
 * @defgroup logistic_cross_backward Backward Logistic Cross-entropy Layer
 * \copydoc daal::algorithms::neural_networks::layers::loss::logistic_cross::backward
 * @ingroup logistic_cross
 * @{
 */
/**
 * \brief Contains classes for the backward logistic cross-entropy layer
 */
namespace backward
{
/**
 * \brief Contains version 1.0 of Intel(R) Data Analytics Acceleration Library (Intel(R) DAAL) interface.
 */
namespace interface1
{
/**
 * <a name="DAAL-CLASS-ALGORITHMS__NEURAL_NETWORKS__LAYERS__LOSS__LOGISTIC_CROSS__BACKWARD__INPUT"></a>
 * \brief %Input objects for the backward logistic cross-entropy layer
 */
class DAAL_EXPORT Input : public loss::backward::Input
{
public:
    /** Default constructor */
    Input();

    virtual ~Input() {}

    /**
     * Returns an input object for the backward logistic cross-entropy layer
     */
    using loss::backward::Input::get;

    /**
     * Sets an input object for the backward logistic cross-entropy layer
     */
    using loss::backward::Input::set;

    /**
     * Returns an input object for the backward logistic cross-entropy layer
     * \param[in] id    Identifier of the input object
     * \return          %Input object that corresponds to the given identifier
     */
    services::SharedPtr<data_management::Tensor> get(LayerDataId id) const;

    /**
     * Sets an input object for the backward logistic cross-entropy layer
     * \param[in] id      Identifier of the input object
     * \param[in] value   Pointer to the object
     */
    void set(LayerDataId id, const services::SharedPtr<data_management::Tensor> &value);

    /**
     * Checks an input object for the backward logistic cross-entropy layer
     * \param[in] par     Algorithm parameter
     * \param[in] method  Computation method
     */
    void check(const daal::algorithms::Parameter *par, int method) const DAAL_C11_OVERRIDE;
};

/**
 * <a name="DAAL-CLASS-ALGORITHMS__NEURAL_NETWORKS__LAYERS__LOSS__LOGISTIC_CROSS__BACKWARD__RESULT"></a>
 * \brief Provides methods to access the result obtained with the compute() method
 *        of the backward logistic cross-entropy layer
 */
class DAAL_EXPORT Result : public loss::backward::Result
{
public:
    DECLARE_SERIALIZABLE();
    /** Default constructor */
    Result();

    virtual ~Result() {};

    /**
     * Returns an result object for the backward logistic cross-entropy layer
     */
    using loss::backward::Result::get;

    /**
     * Sets an result object for the backward logistic cross-entropy layer
     */
    using loss::backward::Result::set;

    /**
     * Checks the result of the backward logistic cross-entropy layer
     * \param[in] input   %Input object for the layer
     * \param[in] par     %Parameter of the layer
     * \param[in] method  Computation method
     */
    void check(const daal::algorithms::Input *input, const daal::algorithms::Parameter *par, int method) const DAAL_C11_OVERRIDE;

    /**
     * Allocates memory to store the result of the backward logistic cross-entropy layer
     * \param[in] input Pointer to an object containing the input data
     * \param[in] method Computation method for the layer
     * \param[in] parameter %Parameter of the backward logistic cross-entropy layer
     */
    template <typename algorithmFPType>
    DAAL_EXPORT void allocate(const daal::algorithms::Input *input, const daal::algorithms::Parameter *parameter, const int method);

protected:
    /** \private */
    template<typename Archive, bool onDeserialize>
    void serialImpl(Archive *arch)
    {
        daal::algorithms::Result::serialImpl<Archive, onDeserialize>(arch);
    }

    void serializeImpl(data_management::InputDataArchive  *arch) DAAL_C11_OVERRIDE
    {serialImpl<data_management::InputDataArchive, false>(arch);}

    void deserializeImpl(data_management::OutputDataArchive *arch) DAAL_C11_OVERRIDE
    {serialImpl<data_management::OutputDataArchive, true>(arch);}
};
} // namespace interface1
using interface1::Input;
using interface1::Result;
} // namespace backward
/** @} */
} // namespace logistic_cross
} // namespace loss
} // namespace layers
} // namespace neural_networks
} // namespace algorithm
} // namespace daal
#endif
