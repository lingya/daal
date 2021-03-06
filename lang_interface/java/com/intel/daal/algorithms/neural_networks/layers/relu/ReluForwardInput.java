/* file: ReluForwardInput.java */
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

/**
 * @defgroup relu_layers_forward Forward Rectifier Linear Unit (ReLU) Layer
 * @brief Contains classes for the forward relu layer
 * @ingroup relu_layers
 * @{
 */
package com.intel.daal.algorithms.neural_networks.layers.relu;

import com.intel.daal.services.DaalContext;

/**
 * <a name="DAAL-CLASS-ALGORITHMS__NEURAL_NETWORKS__LAYERS__RELU__RELUFORWARDINPUT"></a>
 * @brief %Input object for the forward relu layer
 */
public class ReluForwardInput extends com.intel.daal.algorithms.neural_networks.layers.ForwardInput {
    /** @private */
    static {
        System.loadLibrary("JavaAPI");
    }

    public ReluForwardInput(DaalContext context, long cObject) {
        super(context, cObject);
    }
}
/** @} */
