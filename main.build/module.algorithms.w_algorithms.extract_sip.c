/* Generated code for Python module 'algorithms.w_algorithms.extract_sip'
 * created by Nuitka version 1.8.4
 *
 * This code is in part copyright 2023 Kay Hayen.
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
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_algorithms$w_algorithms$extract_sip" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_algorithms$w_algorithms$extract_sip;
PyDictObject *moduledict_algorithms$w_algorithms$extract_sip;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[113];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[113];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("algorithms.w_algorithms.extract_sip"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 113; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_algorithms$w_algorithms$extract_sip(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 113; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b6103d70253fe8a202d25d74b8519a5b;
static PyCodeObject *codeobj_46bdf69ee99fe28bd419e60a5a6c106d;
static PyCodeObject *codeobj_867b81cbb5af906ff5ba9dcb9b543afa;
static PyCodeObject *codeobj_dd3b0ea2038eeaa3d3622a53ed01de80;
static PyCodeObject *codeobj_ece88bf49f221ab3865c97991e67de21;
static PyCodeObject *codeobj_81dcae2f904f3c7ae924b1db977f3cc6;
static PyCodeObject *codeobj_3eb27f85a4e6ffef644aecf6d9250fb9;
static PyCodeObject *codeobj_6fd29e63e06dba621f041656532de4ea;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[103]); CHECK_OBJECT(module_filename_obj);
    codeobj_b6103d70253fe8a202d25d74b8519a5b = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[104], mod_consts[104], NULL, NULL, 0, 0, 0);
    codeobj_46bdf69ee99fe28bd419e60a5a6c106d = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[90], mod_consts[90], mod_consts[105], NULL, 1, 0, 0);
    codeobj_867b81cbb5af906ff5ba9dcb9b543afa = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[106], NULL, 6, 0, 0);
    codeobj_dd3b0ea2038eeaa3d3622a53ed01de80 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[107], NULL, 2, 0, 0);
    codeobj_ece88bf49f221ab3865c97991e67de21 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[108], NULL, 3, 0, 0);
    codeobj_81dcae2f904f3c7ae924b1db977f3cc6 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[109], NULL, 7, 0, 0);
    codeobj_3eb27f85a4e6ffef644aecf6d9250fb9 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[110], NULL, 2, 0, 0);
    codeobj_6fd29e63e06dba621f041656532de4ea = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[111], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__1___init__();


static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__2_openImage();


static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__3_getFFTTransform();


static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__4_getIFFTTransform();


static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__5_showImage();


static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__6_getSip();


static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__7_extractPermutationFromChannel();


// The module function definitions.
static PyObject *impl_algorithms$w_algorithms$extract_sip$$$function__2_openImage(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *var_img = NULL;
    struct Nuitka_FrameObject *frame_3eb27f85a4e6ffef644aecf6d9250fb9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3eb27f85a4e6ffef644aecf6d9250fb9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3eb27f85a4e6ffef644aecf6d9250fb9)) {
        Py_XDECREF(cache_frame_3eb27f85a4e6ffef644aecf6d9250fb9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3eb27f85a4e6ffef644aecf6d9250fb9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3eb27f85a4e6ffef644aecf6d9250fb9 = MAKE_FUNCTION_FRAME(tstate, codeobj_3eb27f85a4e6ffef644aecf6d9250fb9, module_algorithms$w_algorithms$extract_sip, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3eb27f85a4e6ffef644aecf6d9250fb9->m_type_description == NULL);
    frame_3eb27f85a4e6ffef644aecf6d9250fb9 = cache_frame_3eb27f85a4e6ffef644aecf6d9250fb9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3eb27f85a4e6ffef644aecf6d9250fb9);
    assert(Py_REFCNT(frame_3eb27f85a4e6ffef644aecf6d9250fb9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_3eb27f85a4e6ffef644aecf6d9250fb9->m_frame.f_lineno = 16;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_img == NULL);
        var_img = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3eb27f85a4e6ffef644aecf6d9250fb9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3eb27f85a4e6ffef644aecf6d9250fb9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3eb27f85a4e6ffef644aecf6d9250fb9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3eb27f85a4e6ffef644aecf6d9250fb9,
        type_description_1,
        par_self,
        par_path,
        var_img
    );


    // Release cached frame if used for exception.
    if (frame_3eb27f85a4e6ffef644aecf6d9250fb9 == cache_frame_3eb27f85a4e6ffef644aecf6d9250fb9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3eb27f85a4e6ffef644aecf6d9250fb9);
        cache_frame_3eb27f85a4e6ffef644aecf6d9250fb9 = NULL;
    }

    assertFrameObject(frame_3eb27f85a4e6ffef644aecf6d9250fb9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_img);
    tmp_return_value = var_img;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_img);
    Py_DECREF(var_img);
    var_img = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_algorithms$w_algorithms$extract_sip$$$function__3_getFFTTransform(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_image = python_pars[1];
    PyObject *var_dft = NULL;
    PyObject *var_fftShift = NULL;
    PyObject *var_mag = NULL;
    PyObject *var_phase = NULL;
    struct Nuitka_FrameObject *frame_dd3b0ea2038eeaa3d3622a53ed01de80;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dd3b0ea2038eeaa3d3622a53ed01de80 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dd3b0ea2038eeaa3d3622a53ed01de80)) {
        Py_XDECREF(cache_frame_dd3b0ea2038eeaa3d3622a53ed01de80);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dd3b0ea2038eeaa3d3622a53ed01de80 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dd3b0ea2038eeaa3d3622a53ed01de80 = MAKE_FUNCTION_FRAME(tstate, codeobj_dd3b0ea2038eeaa3d3622a53ed01de80, module_algorithms$w_algorithms$extract_sip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dd3b0ea2038eeaa3d3622a53ed01de80->m_type_description == NULL);
    frame_dd3b0ea2038eeaa3d3622a53ed01de80 = cache_frame_dd3b0ea2038eeaa3d3622a53ed01de80;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_dd3b0ea2038eeaa3d3622a53ed01de80);
    assert(Py_REFCNT(frame_dd3b0ea2038eeaa3d3622a53ed01de80) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_image);
        tmp_tuple_element_1 = par_image;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[5]);
        frame_dd3b0ea2038eeaa3d3622a53ed01de80->m_frame.f_lineno = 20;
        tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dft == NULL);
        var_dft = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dft);
        tmp_args_element_value_1 = var_dft;
        frame_dd3b0ea2038eeaa3d3622a53ed01de80->m_frame.f_lineno = 21;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[6], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fftShift == NULL);
        var_fftShift = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fftShift);
        tmp_args_element_value_2 = var_fftShift;
        frame_dd3b0ea2038eeaa3d3622a53ed01de80->m_frame.f_lineno = 22;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[7], tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mag == NULL);
        var_mag = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fftShift);
        tmp_args_element_value_3 = var_fftShift;
        frame_dd3b0ea2038eeaa3d3622a53ed01de80->m_frame.f_lineno = 23;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[8], tmp_args_element_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_phase == NULL);
        var_phase = tmp_assign_source_4;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dd3b0ea2038eeaa3d3622a53ed01de80, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd3b0ea2038eeaa3d3622a53ed01de80->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd3b0ea2038eeaa3d3622a53ed01de80, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dd3b0ea2038eeaa3d3622a53ed01de80,
        type_description_1,
        par_self,
        par_image,
        var_dft,
        var_fftShift,
        var_mag,
        var_phase
    );


    // Release cached frame if used for exception.
    if (frame_dd3b0ea2038eeaa3d3622a53ed01de80 == cache_frame_dd3b0ea2038eeaa3d3622a53ed01de80) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dd3b0ea2038eeaa3d3622a53ed01de80);
        cache_frame_dd3b0ea2038eeaa3d3622a53ed01de80 = NULL;
    }

    assertFrameObject(frame_dd3b0ea2038eeaa3d3622a53ed01de80);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_mag);
        tmp_tuple_element_2 = var_mag;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_phase);
        tmp_tuple_element_2 = var_phase;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_dft);
    Py_DECREF(var_dft);
    var_dft = NULL;
    CHECK_OBJECT(var_fftShift);
    Py_DECREF(var_fftShift);
    var_fftShift = NULL;
    CHECK_OBJECT(var_mag);
    Py_DECREF(var_mag);
    var_mag = NULL;
    CHECK_OBJECT(var_phase);
    Py_DECREF(var_phase);
    var_phase = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_dft);
    var_dft = NULL;
    Py_XDECREF(var_fftShift);
    var_fftShift = NULL;
    Py_XDECREF(var_mag);
    var_mag = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_image);
    Py_DECREF(par_image);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_image);
    Py_DECREF(par_image);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_algorithms$w_algorithms$extract_sip$$$function__4_getIFFTTransform(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_mag = python_pars[1];
    PyObject *par_phase = python_pars[2];
    PyObject *var_real = NULL;
    PyObject *var_imag = NULL;
    PyObject *var_complex_output = NULL;
    PyObject *var_back_ishift = NULL;
    PyObject *var_img_back = NULL;
    struct Nuitka_FrameObject *frame_ece88bf49f221ab3865c97991e67de21;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ece88bf49f221ab3865c97991e67de21 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ece88bf49f221ab3865c97991e67de21)) {
        Py_XDECREF(cache_frame_ece88bf49f221ab3865c97991e67de21);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ece88bf49f221ab3865c97991e67de21 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ece88bf49f221ab3865c97991e67de21 = MAKE_FUNCTION_FRAME(tstate, codeobj_ece88bf49f221ab3865c97991e67de21, module_algorithms$w_algorithms$extract_sip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ece88bf49f221ab3865c97991e67de21->m_type_description == NULL);
    frame_ece88bf49f221ab3865c97991e67de21 = cache_frame_ece88bf49f221ab3865c97991e67de21;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ece88bf49f221ab3865c97991e67de21);
    assert(Py_REFCNT(frame_ece88bf49f221ab3865c97991e67de21) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_mag);
        tmp_mult_expr_left_1 = par_mag;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_phase);
        tmp_args_element_value_1 = par_phase;
        frame_ece88bf49f221ab3865c97991e67de21->m_frame.f_lineno = 27;
        tmp_mult_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[9], tmp_args_element_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_real == NULL);
        var_real = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_mag);
        tmp_mult_expr_left_2 = par_mag;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_phase);
        tmp_args_element_value_2 = par_phase;
        frame_ece88bf49f221ab3865c97991e67de21->m_frame.f_lineno = 28;
        tmp_mult_expr_right_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[10], tmp_args_element_value_2);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_imag == NULL);
        var_imag = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mag);
        tmp_expression_value_2 = par_mag;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = (PyObject *)&PyComplex_Type;
        frame_ece88bf49f221ab3865c97991e67de21->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_complex_output == NULL);
        var_complex_output = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_real);
        tmp_assattr_value_1 = var_real;
        CHECK_OBJECT(var_complex_output);
        tmp_assattr_target_1 = var_complex_output;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_imag);
        tmp_assattr_value_2 = var_imag;
        CHECK_OBJECT(var_complex_output);
        tmp_assattr_target_2 = var_complex_output;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[3]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_complex_output);
        tmp_args_element_value_5 = var_complex_output;
        frame_ece88bf49f221ab3865c97991e67de21->m_frame.f_lineno = 33;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[15], tmp_args_element_value_5);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_back_ishift == NULL);
        var_back_ishift = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[3]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[16]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_back_ishift);
        tmp_tuple_element_1 = var_back_ishift;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[5]);
        frame_ece88bf49f221ab3865c97991e67de21->m_frame.f_lineno = 34;
        tmp_assign_source_5 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_img_back == NULL);
        var_img_back = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_abs_arg_1;
        CHECK_OBJECT(var_img_back);
        tmp_abs_arg_1 = var_img_back;
        tmp_assign_source_6 = BUILTIN_ABS(tmp_abs_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_img_back;
            assert(old != NULL);
            var_img_back = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ece88bf49f221ab3865c97991e67de21, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ece88bf49f221ab3865c97991e67de21->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ece88bf49f221ab3865c97991e67de21, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ece88bf49f221ab3865c97991e67de21,
        type_description_1,
        par_self,
        par_mag,
        par_phase,
        var_real,
        var_imag,
        var_complex_output,
        var_back_ishift,
        var_img_back
    );


    // Release cached frame if used for exception.
    if (frame_ece88bf49f221ab3865c97991e67de21 == cache_frame_ece88bf49f221ab3865c97991e67de21) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ece88bf49f221ab3865c97991e67de21);
        cache_frame_ece88bf49f221ab3865c97991e67de21 = NULL;
    }

    assertFrameObject(frame_ece88bf49f221ab3865c97991e67de21);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_img_back);
    tmp_return_value = var_img_back;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_real);
    Py_DECREF(var_real);
    var_real = NULL;
    CHECK_OBJECT(var_imag);
    Py_DECREF(var_imag);
    var_imag = NULL;
    CHECK_OBJECT(var_complex_output);
    Py_DECREF(var_complex_output);
    var_complex_output = NULL;
    CHECK_OBJECT(var_back_ishift);
    Py_DECREF(var_back_ishift);
    var_back_ishift = NULL;
    CHECK_OBJECT(var_img_back);
    Py_DECREF(var_img_back);
    var_img_back = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_real);
    var_real = NULL;
    Py_XDECREF(var_imag);
    var_imag = NULL;
    Py_XDECREF(var_complex_output);
    var_complex_output = NULL;
    Py_XDECREF(var_back_ishift);
    var_back_ishift = NULL;
    Py_XDECREF(var_img_back);
    var_img_back = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_mag);
    Py_DECREF(par_mag);
    CHECK_OBJECT(par_phase);
    Py_DECREF(par_phase);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_mag);
    Py_DECREF(par_mag);
    CHECK_OBJECT(par_phase);
    Py_DECREF(par_phase);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_algorithms$w_algorithms$extract_sip$$$function__5_showImage(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_image_args = python_pars[1];
    PyObject *var_image = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_6fd29e63e06dba621f041656532de4ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_6fd29e63e06dba621f041656532de4ea = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6fd29e63e06dba621f041656532de4ea)) {
        Py_XDECREF(cache_frame_6fd29e63e06dba621f041656532de4ea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6fd29e63e06dba621f041656532de4ea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6fd29e63e06dba621f041656532de4ea = MAKE_FUNCTION_FRAME(tstate, codeobj_6fd29e63e06dba621f041656532de4ea, module_algorithms$w_algorithms$extract_sip, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6fd29e63e06dba621f041656532de4ea->m_type_description == NULL);
    frame_6fd29e63e06dba621f041656532de4ea = cache_frame_6fd29e63e06dba621f041656532de4ea;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6fd29e63e06dba621f041656532de4ea);
    assert(Py_REFCNT(frame_6fd29e63e06dba621f041656532de4ea) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_image_args);
        tmp_iter_arg_1 = par_image_args;
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 39;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_image;
            var_image = tmp_assign_source_3;
            Py_INCREF(var_image);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = mod_consts[19];
        CHECK_OBJECT(var_image);
        tmp_args_element_value_2 = var_image;
        frame_6fd29e63e06dba621f041656532de4ea->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[18],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_6fd29e63e06dba621f041656532de4ea->m_frame.f_lineno = 41;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[20],
            PyTuple_GET_ITEM(mod_consts[21], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 39;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_6fd29e63e06dba621f041656532de4ea->m_frame.f_lineno = 42;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[20],
            PyTuple_GET_ITEM(mod_consts[21], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6fd29e63e06dba621f041656532de4ea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6fd29e63e06dba621f041656532de4ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6fd29e63e06dba621f041656532de4ea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6fd29e63e06dba621f041656532de4ea,
        type_description_1,
        par_self,
        par_image_args,
        var_image
    );


    // Release cached frame if used for exception.
    if (frame_6fd29e63e06dba621f041656532de4ea == cache_frame_6fd29e63e06dba621f041656532de4ea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6fd29e63e06dba621f041656532de4ea);
        cache_frame_6fd29e63e06dba621f041656532de4ea = NULL;
    }

    assertFrameObject(frame_6fd29e63e06dba621f041656532de4ea);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_image);
    var_image = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_image);
    var_image = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_image_args);
    Py_DECREF(par_image_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_image_args);
    Py_DECREF(par_image_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_algorithms$w_algorithms$extract_sip$$$function__6_getSip(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_img = python_pars[1];
    PyObject *par_SIZE = python_pars[2];
    PyObject *par_K = python_pars[3];
    PyObject *par_PR = python_pars[4];
    PyObject *par_PB = python_pars[5];
    PyObject *par_im_format = python_pars[6];
    PyObject *var_im1 = NULL;
    PyObject *var_M = NULL;
    PyObject *var_N = NULL;
    PyObject *var_r = NULL;
    PyObject *var_g = NULL;
    PyObject *var_b = NULL;
    PyObject *var_sip1 = NULL;
    PyObject *var_sip2 = NULL;
    PyObject *var_sip3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_81dcae2f904f3c7ae924b1db977f3cc6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_81dcae2f904f3c7ae924b1db977f3cc6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_81dcae2f904f3c7ae924b1db977f3cc6)) {
        Py_XDECREF(cache_frame_81dcae2f904f3c7ae924b1db977f3cc6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81dcae2f904f3c7ae924b1db977f3cc6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81dcae2f904f3c7ae924b1db977f3cc6 = MAKE_FUNCTION_FRAME(tstate, codeobj_81dcae2f904f3c7ae924b1db977f3cc6, module_algorithms$w_algorithms$extract_sip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_81dcae2f904f3c7ae924b1db977f3cc6->m_type_description == NULL);
    frame_81dcae2f904f3c7ae924b1db977f3cc6 = cache_frame_81dcae2f904f3c7ae924b1db977f3cc6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_81dcae2f904f3c7ae924b1db977f3cc6);
    assert(Py_REFCNT(frame_81dcae2f904f3c7ae924b1db977f3cc6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_args_element_value_1 = par_img;
        frame_81dcae2f904f3c7ae924b1db977f3cc6->m_frame.f_lineno = 47;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[22], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_im1 == NULL);
        var_im1 = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_img);
        tmp_expression_value_1 = par_img;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 48;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 48;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooo";
                    exception_lineno = 48;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[24];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooo";
            exception_lineno = 48;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_M == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_M = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_N == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_N = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_N);
        tmp_cmp_expr_left_1 = var_N;
        CHECK_OBJECT(var_M);
        tmp_cmp_expr_right_1 = var_M;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_im_format);
        tmp_cmp_expr_left_2 = par_im_format;
        tmp_cmp_expr_right_2 = mod_consts[25];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_img);
        tmp_expression_value_2 = par_img;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[26]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_81dcae2f904f3c7ae924b1db977f3cc6->m_frame.f_lineno = 52;
        tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 3);
        if (tmp_assign_source_8 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 52;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 3);
        if (tmp_assign_source_9 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 52;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, tmp_unpack_5, 2, 3);
        if (tmp_assign_source_10 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 52;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooo";
                    exception_lineno = 52;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[27];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooo";
            exception_lineno = 52;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;
        assert(var_r == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_r = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;
        assert(var_g == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_g = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_3;
        assert(var_b == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_b = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[28]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_im1);
        tmp_expression_value_4 = var_im1;
        tmp_subscript_value_1 = mod_consts[29];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 54;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_81dcae2f904f3c7ae924b1db977f3cc6->m_frame.f_lineno = 54;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[28]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_im1);
        tmp_expression_value_6 = var_im1;
        tmp_subscript_value_2 = mod_consts[30];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 55;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_81dcae2f904f3c7ae924b1db977f3cc6->m_frame.f_lineno = 55;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_g == NULL);
        var_g = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[28]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_im1);
        tmp_expression_value_8 = var_im1;
        tmp_subscript_value_3 = mod_consts[31];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 56;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_81dcae2f904f3c7ae924b1db977f3cc6->m_frame.f_lineno = 56;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_b == NULL);
        var_b = tmp_assign_source_16;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_r);
        tmp_args_element_value_5 = var_r;
        CHECK_OBJECT(par_SIZE);
        tmp_args_element_value_6 = par_SIZE;
        CHECK_OBJECT(par_K);
        tmp_args_element_value_7 = par_K;
        CHECK_OBJECT(par_PR);
        tmp_args_element_value_8 = par_PR;
        CHECK_OBJECT(par_PB);
        tmp_args_element_value_9 = par_PB;
        frame_81dcae2f904f3c7ae924b1db977f3cc6->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_17 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_2,
                mod_consts[32],
                call_args
            );
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sip1 == NULL);
        var_sip1 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_g);
        tmp_args_element_value_10 = var_g;
        CHECK_OBJECT(par_SIZE);
        tmp_args_element_value_11 = par_SIZE;
        CHECK_OBJECT(par_K);
        tmp_args_element_value_12 = par_K;
        CHECK_OBJECT(par_PR);
        tmp_args_element_value_13 = par_PR;
        CHECK_OBJECT(par_PB);
        tmp_args_element_value_14 = par_PB;
        frame_81dcae2f904f3c7ae924b1db977f3cc6->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_18 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_3,
                mod_consts[32],
                call_args
            );
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sip2 == NULL);
        var_sip2 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_b);
        tmp_args_element_value_15 = var_b;
        CHECK_OBJECT(par_SIZE);
        tmp_args_element_value_16 = par_SIZE;
        CHECK_OBJECT(par_K);
        tmp_args_element_value_17 = par_K;
        CHECK_OBJECT(par_PR);
        tmp_args_element_value_18 = par_PR;
        CHECK_OBJECT(par_PB);
        tmp_args_element_value_19 = par_PB;
        frame_81dcae2f904f3c7ae924b1db977f3cc6->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_assign_source_19 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_4,
                mod_consts[32],
                call_args
            );
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sip3 == NULL);
        var_sip3 = tmp_assign_source_19;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_im_format);
        tmp_cmp_expr_left_3 = par_im_format;
        tmp_cmp_expr_right_3 = mod_consts[25];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_img);
        tmp_expression_value_9 = par_img;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[26]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_81dcae2f904f3c7ae924b1db977f3cc6->m_frame.f_lineno = 63;
        tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_20 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tstate, tmp_unpack_6, 0, 3);
        if (tmp_assign_source_21 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 63;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tstate, tmp_unpack_7, 1, 3);
        if (tmp_assign_source_22 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 63;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT(tstate, tmp_unpack_8, 2, 3);
        if (tmp_assign_source_23 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 63;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_3 == NULL);
        tmp_tuple_unpack_3__element_3 = tmp_assign_source_23;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooo";
                    exception_lineno = 63;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[27];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooo";
            exception_lineno = 63;
            goto try_except_handler_7;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_24 = tmp_tuple_unpack_3__element_1;
        assert(var_r == NULL);
        Py_INCREF(tmp_assign_source_24);
        var_r = tmp_assign_source_24;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_25 = tmp_tuple_unpack_3__element_2;
        assert(var_g == NULL);
        Py_INCREF(tmp_assign_source_25);
        var_g = tmp_assign_source_25;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
        tmp_assign_source_26 = tmp_tuple_unpack_3__element_3;
        assert(var_b == NULL);
        Py_INCREF(tmp_assign_source_26);
        var_b = tmp_assign_source_26;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;

    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_4;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[28]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_im1);
        tmp_expression_value_11 = var_im1;
        tmp_subscript_value_4 = mod_consts[29];
        tmp_args_element_value_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_4);
        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 65;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_81dcae2f904f3c7ae924b1db977f3cc6->m_frame.f_lineno = 65;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_5;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[28]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_im1);
        tmp_expression_value_13 = var_im1;
        tmp_subscript_value_5 = mod_consts[30];
        tmp_args_element_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_5);
        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 66;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_81dcae2f904f3c7ae924b1db977f3cc6->m_frame.f_lineno = 66;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_g == NULL);
        var_g = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_6;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[28]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_im1);
        tmp_expression_value_15 = var_im1;
        tmp_subscript_value_6 = mod_consts[31];
        tmp_args_element_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_6);
        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 67;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_81dcae2f904f3c7ae924b1db977f3cc6->m_frame.f_lineno = 67;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_b == NULL);
        var_b = tmp_assign_source_29;
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        CHECK_OBJECT(var_r);
        tmp_args_element_value_23 = var_r;
        CHECK_OBJECT(par_SIZE);
        tmp_args_element_value_24 = par_SIZE;
        CHECK_OBJECT(par_K);
        tmp_args_element_value_25 = par_K;
        CHECK_OBJECT(par_PR);
        tmp_args_element_value_26 = par_PR;
        CHECK_OBJECT(par_PB);
        tmp_args_element_value_27 = par_PB;
        frame_81dcae2f904f3c7ae924b1db977f3cc6->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_assign_source_30 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_5,
                mod_consts[32],
                call_args
            );
        }

        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sip1 == NULL);
        var_sip1 = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(var_g);
        tmp_args_element_value_28 = var_g;
        CHECK_OBJECT(par_SIZE);
        tmp_args_element_value_29 = par_SIZE;
        CHECK_OBJECT(par_K);
        tmp_args_element_value_30 = par_K;
        CHECK_OBJECT(par_PR);
        tmp_args_element_value_31 = par_PR;
        CHECK_OBJECT(par_PB);
        tmp_args_element_value_32 = par_PB;
        frame_81dcae2f904f3c7ae924b1db977f3cc6->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_32};
            tmp_assign_source_31 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_6,
                mod_consts[32],
                call_args
            );
        }

        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sip2 == NULL);
        var_sip2 = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        CHECK_OBJECT(var_b);
        tmp_args_element_value_33 = var_b;
        CHECK_OBJECT(par_SIZE);
        tmp_args_element_value_34 = par_SIZE;
        CHECK_OBJECT(par_K);
        tmp_args_element_value_35 = par_K;
        CHECK_OBJECT(par_PR);
        tmp_args_element_value_36 = par_PR;
        CHECK_OBJECT(par_PB);
        tmp_args_element_value_37 = par_PB;
        frame_81dcae2f904f3c7ae924b1db977f3cc6->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37};
            tmp_assign_source_32 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_7,
                mod_consts[32],
                call_args
            );
        }

        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sip3 == NULL);
        var_sip3 = tmp_assign_source_32;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_81dcae2f904f3c7ae924b1db977f3cc6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81dcae2f904f3c7ae924b1db977f3cc6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81dcae2f904f3c7ae924b1db977f3cc6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81dcae2f904f3c7ae924b1db977f3cc6,
        type_description_1,
        par_self,
        par_img,
        par_SIZE,
        par_K,
        par_PR,
        par_PB,
        par_im_format,
        var_im1,
        var_M,
        var_N,
        var_r,
        var_g,
        var_b,
        var_sip1,
        var_sip2,
        var_sip3
    );


    // Release cached frame if used for exception.
    if (frame_81dcae2f904f3c7ae924b1db977f3cc6 == cache_frame_81dcae2f904f3c7ae924b1db977f3cc6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_81dcae2f904f3c7ae924b1db977f3cc6);
        cache_frame_81dcae2f904f3c7ae924b1db977f3cc6 = NULL;
    }

    assertFrameObject(frame_81dcae2f904f3c7ae924b1db977f3cc6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_sip1);
        tmp_tuple_element_1 = var_sip1;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_sip2);
        tmp_tuple_element_1 = var_sip2;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_sip3);
        tmp_tuple_element_1 = var_sip3;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_im1);
    Py_DECREF(var_im1);
    var_im1 = NULL;
    CHECK_OBJECT(var_M);
    Py_DECREF(var_M);
    var_M = NULL;
    CHECK_OBJECT(var_N);
    Py_DECREF(var_N);
    var_N = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    CHECK_OBJECT(var_sip1);
    Py_DECREF(var_sip1);
    var_sip1 = NULL;
    CHECK_OBJECT(var_sip2);
    Py_DECREF(var_sip2);
    var_sip2 = NULL;
    CHECK_OBJECT(var_sip3);
    Py_DECREF(var_sip3);
    var_sip3 = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_im1);
    var_im1 = NULL;
    Py_XDECREF(var_M);
    var_M = NULL;
    Py_XDECREF(var_N);
    var_N = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_sip1);
    var_sip1 = NULL;
    Py_XDECREF(var_sip2);
    var_sip2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_img);
    Py_DECREF(par_img);
    CHECK_OBJECT(par_SIZE);
    Py_DECREF(par_SIZE);
    CHECK_OBJECT(par_K);
    Py_DECREF(par_K);
    CHECK_OBJECT(par_PR);
    Py_DECREF(par_PR);
    CHECK_OBJECT(par_PB);
    Py_DECREF(par_PB);
    CHECK_OBJECT(par_im_format);
    Py_DECREF(par_im_format);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_img);
    Py_DECREF(par_img);
    CHECK_OBJECT(par_SIZE);
    Py_DECREF(par_SIZE);
    CHECK_OBJECT(par_K);
    Py_DECREF(par_K);
    CHECK_OBJECT(par_PR);
    Py_DECREF(par_PR);
    CHECK_OBJECT(par_PB);
    Py_DECREF(par_PB);
    CHECK_OBJECT(par_im_format);
    Py_DECREF(par_im_format);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_algorithms$w_algorithms$extract_sip$$$function__7_extractPermutationFromChannel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_channel = python_pars[1];
    PyObject *par_SIZE = python_pars[2];
    PyObject *par_K = python_pars[3];
    PyObject *par_PR = python_pars[4];
    PyObject *par_PB = python_pars[5];
    PyObject *var_grid_cell_num = NULL;
    PyObject *var_sip = NULL;
    PyObject *var_avg = NULL;
    PyObject *var_M = NULL;
    PyObject *var_N = NULL;
    PyObject *var_channel_array = NULL;
    PyObject *var_grid_size_w = NULL;
    PyObject *var_grid_size_h = NULL;
    PyObject *var_RED_WIDTH = NULL;
    PyObject *var_BLUE_WIDTH = NULL;
    PyObject *var_RED_RADIOUS_X = NULL;
    PyObject *var_RED_RADIOUS_Y = NULL;
    PyObject *var_BLUE_RADIOUS_X = NULL;
    PyObject *var_BLUE_RADIOUS_Y = NULL;
    PyObject *var_minAvg = NULL;
    PyObject *var_minAll = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_i = NULL;
    PyObject *var_c = NULL;
    PyObject *var_r = NULL;
    PyObject *var_AVG_RED = NULL;
    PyObject *var_AVG_BLUE = NULL;
    PyObject *var_mag_sum_red = NULL;
    PyObject *var_mag_sum_blue = NULL;
    PyObject *var_D = NULL;
    PyObject *var_grid_cell = NULL;
    PyObject *var_mag = NULL;
    PyObject *var_phase = NULL;
    PyObject *var_cx = NULL;
    PyObject *var_cy = NULL;
    PyObject *var_red = NULL;
    PyObject *var_coord_red = NULL;
    PyObject *var_blue = NULL;
    PyObject *var_coord_blue = NULL;
    PyObject *var_extract_factor = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_for_loop_7__for_iterator = NULL;
    PyObject *tmp_for_loop_7__iter_value = NULL;
    PyObject *tmp_for_loop_8__for_iterator = NULL;
    PyObject *tmp_for_loop_8__iter_value = NULL;
    PyObject *tmp_for_loop_9__for_iterator = NULL;
    PyObject *tmp_for_loop_9__iter_value = NULL;
    PyObject *tmp_tuple_unpack_10__element_1 = NULL;
    PyObject *tmp_tuple_unpack_10__element_2 = NULL;
    PyObject *tmp_tuple_unpack_10__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
    PyObject *tmp_tuple_unpack_9__element_1 = NULL;
    PyObject *tmp_tuple_unpack_9__element_2 = NULL;
    PyObject *tmp_tuple_unpack_9__source_iter = NULL;
    struct Nuitka_FrameObject *frame_867b81cbb5af906ff5ba9dcb9b543afa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    static struct Nuitka_FrameObject *cache_frame_867b81cbb5af906ff5ba9dcb9b543afa = NULL;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[33];
        assert(var_grid_cell_num == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_grid_cell_num = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(var_sip == NULL);
        var_sip = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
        assert(var_avg == NULL);
        var_avg = tmp_assign_source_3;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_867b81cbb5af906ff5ba9dcb9b543afa)) {
        Py_XDECREF(cache_frame_867b81cbb5af906ff5ba9dcb9b543afa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_867b81cbb5af906ff5ba9dcb9b543afa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_867b81cbb5af906ff5ba9dcb9b543afa = MAKE_FUNCTION_FRAME(tstate, codeobj_867b81cbb5af906ff5ba9dcb9b543afa, module_algorithms$w_algorithms$extract_sip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_867b81cbb5af906ff5ba9dcb9b543afa->m_type_description == NULL);
    frame_867b81cbb5af906ff5ba9dcb9b543afa = cache_frame_867b81cbb5af906ff5ba9dcb9b543afa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_867b81cbb5af906ff5ba9dcb9b543afa);
    assert(Py_REFCNT(frame_867b81cbb5af906ff5ba9dcb9b543afa) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_channel);
        tmp_expression_value_1 = par_channel;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 83;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 83;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                    exception_lineno = 83;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[24];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 83;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_M == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_M = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_N == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_N = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_channel);
        tmp_args_element_value_1 = par_channel;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 84;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[22], tmp_args_element_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_channel_array == NULL);
        var_channel_array = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_N);
        tmp_cmp_expr_left_1 = var_N;
        CHECK_OBJECT(var_M);
        tmp_cmp_expr_right_1 = var_M;
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_truediv_expr_left_1 = var_N;
        CHECK_OBJECT(par_SIZE);
        tmp_truediv_expr_right_1 = par_SIZE;
        tmp_args_element_value_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 93;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 93;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_grid_size_w == NULL);
        var_grid_size_w = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[35]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_truediv_expr_left_2 = var_N;
        CHECK_OBJECT(par_SIZE);
        tmp_truediv_expr_right_2 = par_SIZE;
        tmp_args_element_value_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 94;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 94;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_grid_size_h == NULL);
        var_grid_size_h = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(par_PR);
        tmp_assign_source_12 = par_PR;
        assert(var_RED_WIDTH == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_RED_WIDTH = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(par_PB);
        tmp_assign_source_13 = par_PB;
        assert(var_BLUE_WIDTH == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_BLUE_WIDTH = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[35]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_truediv_expr_left_3 = var_N;
        tmp_mult_expr_left_1 = mod_consts[36];
        CHECK_OBJECT(par_SIZE);
        tmp_mult_expr_right_1 = par_SIZE;
        tmp_truediv_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_truediv_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 99;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_right_3);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 99;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 99;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_RED_RADIOUS_X == NULL);
        var_RED_RADIOUS_X = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[35]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_truediv_expr_left_4 = var_N;
        tmp_mult_expr_left_2 = mod_consts[36];
        CHECK_OBJECT(par_SIZE);
        tmp_mult_expr_right_2 = par_SIZE;
        tmp_truediv_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_truediv_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 100;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_right_4);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 100;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 100;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_RED_RADIOUS_Y == NULL);
        var_RED_RADIOUS_Y = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(var_RED_RADIOUS_X);
        tmp_sub_expr_left_1 = var_RED_RADIOUS_X;
        CHECK_OBJECT(var_RED_WIDTH);
        tmp_sub_expr_right_1 = var_RED_WIDTH;
        tmp_assign_source_16 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_BLUE_RADIOUS_X == NULL);
        var_BLUE_RADIOUS_X = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(var_RED_RADIOUS_Y);
        tmp_sub_expr_left_2 = var_RED_RADIOUS_Y;
        CHECK_OBJECT(var_RED_WIDTH);
        tmp_sub_expr_right_2 = var_RED_WIDTH;
        tmp_assign_source_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_BLUE_RADIOUS_Y == NULL);
        var_BLUE_RADIOUS_Y = tmp_assign_source_17;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_N);
        tmp_cmp_expr_left_2 = var_N;
        CHECK_OBJECT(var_M);
        tmp_cmp_expr_right_2 = var_M;
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_truediv_expr_left_5;
        PyObject *tmp_truediv_expr_right_5;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[35]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_M);
        tmp_truediv_expr_left_5 = var_M;
        CHECK_OBJECT(par_SIZE);
        tmp_truediv_expr_right_5 = par_SIZE;
        tmp_args_element_value_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 105;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 105;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_grid_size_w == NULL);
        var_grid_size_w = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_truediv_expr_left_6;
        PyObject *tmp_truediv_expr_right_6;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[35]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_M);
        tmp_truediv_expr_left_6 = var_M;
        CHECK_OBJECT(par_SIZE);
        tmp_truediv_expr_right_6 = par_SIZE;
        tmp_args_element_value_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 106;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 106;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_grid_size_h == NULL);
        var_grid_size_h = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(par_PR);
        tmp_assign_source_20 = par_PR;
        assert(var_RED_WIDTH == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_RED_WIDTH = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(par_PB);
        tmp_assign_source_21 = par_PB;
        assert(var_BLUE_WIDTH == NULL);
        Py_INCREF(tmp_assign_source_21);
        var_BLUE_WIDTH = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_truediv_expr_left_7;
        PyObject *tmp_truediv_expr_right_7;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[35]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_M);
        tmp_truediv_expr_left_7 = var_M;
        tmp_mult_expr_left_3 = mod_consts[36];
        CHECK_OBJECT(par_SIZE);
        tmp_mult_expr_right_3 = par_SIZE;
        tmp_truediv_expr_right_7 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_truediv_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 111;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_7, tmp_truediv_expr_right_7);
        Py_DECREF(tmp_truediv_expr_right_7);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 111;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 111;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_RED_RADIOUS_X == NULL);
        var_RED_RADIOUS_X = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_truediv_expr_left_8;
        PyObject *tmp_truediv_expr_right_8;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[35]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_M);
        tmp_truediv_expr_left_8 = var_M;
        tmp_mult_expr_left_4 = mod_consts[36];
        CHECK_OBJECT(par_SIZE);
        tmp_mult_expr_right_4 = par_SIZE;
        tmp_truediv_expr_right_8 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_truediv_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 112;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_8, tmp_truediv_expr_right_8);
        Py_DECREF(tmp_truediv_expr_right_8);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 112;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 112;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_RED_RADIOUS_Y == NULL);
        var_RED_RADIOUS_Y = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        CHECK_OBJECT(var_RED_RADIOUS_X);
        tmp_sub_expr_left_3 = var_RED_RADIOUS_X;
        CHECK_OBJECT(var_RED_WIDTH);
        tmp_sub_expr_right_3 = var_RED_WIDTH;
        tmp_assign_source_24 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_BLUE_RADIOUS_X == NULL);
        var_BLUE_RADIOUS_X = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        CHECK_OBJECT(var_RED_RADIOUS_Y);
        tmp_sub_expr_left_4 = var_RED_RADIOUS_Y;
        CHECK_OBJECT(var_RED_WIDTH);
        tmp_sub_expr_right_4 = var_RED_WIDTH;
        tmp_assign_source_25 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_BLUE_RADIOUS_Y == NULL);
        var_BLUE_RADIOUS_Y = tmp_assign_source_25;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_truediv_expr_left_9;
        PyObject *tmp_truediv_expr_right_9;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[35]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_M);
        tmp_truediv_expr_left_9 = var_M;
        CHECK_OBJECT(par_SIZE);
        tmp_truediv_expr_right_9 = par_SIZE;
        tmp_args_element_value_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_9, tmp_truediv_expr_right_9);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 117;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 117;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_grid_size_w == NULL);
        var_grid_size_w = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_truediv_expr_left_10;
        PyObject *tmp_truediv_expr_right_10;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[35]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_truediv_expr_left_10 = var_N;
        CHECK_OBJECT(par_SIZE);
        tmp_truediv_expr_right_10 = par_SIZE;
        tmp_args_element_value_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_10, tmp_truediv_expr_right_10);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 118;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 118;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_grid_size_h == NULL);
        var_grid_size_h = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(par_PR);
        tmp_assign_source_28 = par_PR;
        assert(var_RED_WIDTH == NULL);
        Py_INCREF(tmp_assign_source_28);
        var_RED_WIDTH = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(par_PB);
        tmp_assign_source_29 = par_PB;
        assert(var_BLUE_WIDTH == NULL);
        Py_INCREF(tmp_assign_source_29);
        var_BLUE_WIDTH = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_truediv_expr_left_11;
        PyObject *tmp_truediv_expr_right_11;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[35]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_M);
        tmp_truediv_expr_left_11 = var_M;
        tmp_mult_expr_left_5 = mod_consts[36];
        CHECK_OBJECT(par_SIZE);
        tmp_mult_expr_right_5 = par_SIZE;
        tmp_truediv_expr_right_11 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        if (tmp_truediv_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 123;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_11, tmp_truediv_expr_right_11);
        Py_DECREF(tmp_truediv_expr_right_11);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 123;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 123;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_RED_RADIOUS_X == NULL);
        var_RED_RADIOUS_X = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_truediv_expr_left_12;
        PyObject *tmp_truediv_expr_right_12;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[35]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_truediv_expr_left_12 = var_N;
        tmp_mult_expr_left_6 = mod_consts[36];
        CHECK_OBJECT(par_SIZE);
        tmp_mult_expr_right_6 = par_SIZE;
        tmp_truediv_expr_right_12 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        if (tmp_truediv_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 124;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_12, tmp_truediv_expr_right_12);
        Py_DECREF(tmp_truediv_expr_right_12);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 124;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 124;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_RED_RADIOUS_Y == NULL);
        var_RED_RADIOUS_Y = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        CHECK_OBJECT(var_RED_RADIOUS_X);
        tmp_sub_expr_left_5 = var_RED_RADIOUS_X;
        CHECK_OBJECT(var_RED_WIDTH);
        tmp_sub_expr_right_5 = var_RED_WIDTH;
        tmp_assign_source_32 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_BLUE_RADIOUS_X == NULL);
        var_BLUE_RADIOUS_X = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        CHECK_OBJECT(var_RED_RADIOUS_Y);
        tmp_sub_expr_left_6 = var_RED_RADIOUS_Y;
        CHECK_OBJECT(var_RED_WIDTH);
        tmp_sub_expr_right_6 = var_RED_WIDTH;
        tmp_assign_source_33 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_BLUE_RADIOUS_Y == NULL);
        var_BLUE_RADIOUS_Y = tmp_assign_source_33;
    }
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_LIST_EMPTY(0);
        assert(var_minAvg == NULL);
        var_minAvg = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_LIST_EMPTY(0);
        assert(var_minAll == NULL);
        var_minAll = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[33];
        assert(var_x == NULL);
        Py_INCREF(tmp_assign_source_36);
        var_x = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[33];
        assert(var_y == NULL);
        Py_INCREF(tmp_assign_source_37);
        var_y = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[33];
        assert(var_c == NULL);
        Py_INCREF(tmp_assign_source_38);
        var_c = tmp_assign_source_38;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (var_N == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 139;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = var_N;
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 139;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_3 = var_M;
        tmp_condition_result_3 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_sub_expr_left_7;
        PyObject *tmp_sub_expr_right_7;
        PyObject *tmp_xrange_step_1;
        tmp_xrange_low_1 = mod_consts[33];
        if (var_N == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 140;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_7 = var_N;
        CHECK_OBJECT(var_grid_size_h);
        tmp_sub_expr_right_7 = var_grid_size_h;
        tmp_add_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[39];
        tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_xrange_high_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_grid_size_h);
        tmp_xrange_step_1 = var_grid_size_h;
        tmp_iter_arg_2 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1);
        Py_DECREF(tmp_xrange_high_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_39 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_39;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_40 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_40 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                exception_lineno = 140;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_41 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_41;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_xrange_high_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_sub_expr_left_8;
        PyObject *tmp_sub_expr_right_8;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_xrange_step_2;
        if (par_K == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 141;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_xrange_low_2 = par_K;
        if (par_K == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 141;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_add_expr_left_3 = par_K;
        if (var_N == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 141;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_add_expr_right_3 = var_N;
        tmp_sub_expr_left_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_sub_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_grid_size_h == NULL) {
            Py_DECREF(tmp_sub_expr_left_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 141;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_sub_expr_right_8 = var_grid_size_h;
        tmp_add_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
        Py_DECREF(tmp_sub_expr_left_8);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_add_expr_right_2 = mod_consts[39];
        tmp_xrange_high_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_xrange_high_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_grid_size_h == NULL) {
            Py_DECREF(tmp_xrange_high_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 141;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_xrange_step_2 = var_grid_size_h;
        tmp_iter_arg_3 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_2, tmp_xrange_high_2, tmp_xrange_step_2);
        Py_DECREF(tmp_xrange_high_2);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_42 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_43 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_43 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                exception_lineno = 141;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_44 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_44;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_iadd_expr_left_1;
        nuitka_digit tmp_iadd_expr_right_1;
        if (var_grid_cell_num == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 142;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_iadd_expr_left_1 = var_grid_cell_num;
        tmp_iadd_expr_right_1 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        assert(!(tmp_result == false));
        tmp_assign_source_45 = tmp_iadd_expr_left_1;
        var_grid_cell_num = tmp_assign_source_45;

    }
    Py_XDECREF(var_AVG_RED);
    var_AVG_RED = NULL;

    Py_XDECREF(var_AVG_BLUE);
    var_AVG_BLUE = NULL;

    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[33];
        {
            PyObject *old = var_mag_sum_red;
            var_mag_sum_red = tmp_assign_source_46;
            Py_INCREF(var_mag_sum_red);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[33];
        {
            PyObject *old = var_mag_sum_blue;
            var_mag_sum_blue = tmp_assign_source_47;
            Py_INCREF(var_mag_sum_blue);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[33];
        {
            PyObject *old = var_D;
            var_D = tmp_assign_source_48;
            Py_INCREF(var_D);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        CHECK_OBJECT(var_channel_array);
        tmp_expression_value_14 = var_channel_array;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 149;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_start_value_1 = var_r;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 149;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_add_expr_left_4 = var_r;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 149;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_add_expr_right_4 = var_grid_size_w;
        tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_stop_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_1 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_tuple_element_1 == NULL));
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_start_value_2;
            PyObject *tmp_stop_value_2;
            PyObject *tmp_add_expr_left_5;
            PyObject *tmp_add_expr_right_5;
            PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_c);
            tmp_start_value_2 = var_c;
            CHECK_OBJECT(var_c);
            tmp_add_expr_left_5 = var_c;
            if (var_grid_size_h == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 149;
                type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_add_expr_right_5 = var_grid_size_h;
            tmp_stop_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
            if (tmp_stop_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = MAKE_SLICE_OBJECT2(tmp_start_value_2, tmp_stop_value_2);
            Py_DECREF(tmp_stop_value_2);
            assert(!(tmp_tuple_element_1 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_1);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_49 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_grid_cell;
            var_grid_cell = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_14;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 151;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_grid_cell);
        tmp_args_element_value_14 = var_grid_cell;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 151;
        tmp_iter_arg_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[46], tmp_args_element_value_14);
        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_50 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_51 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_51 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 151;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_52 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_52 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 151;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_52;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                    exception_lineno = 151;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[24];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 151;
            goto try_except_handler_7;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_53 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_mag;
            var_mag = tmp_assign_source_53;
            Py_INCREF(var_mag);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_54 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_phase;
            var_phase = tmp_assign_source_54;
            Py_INCREF(var_phase);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_truediv_expr_left_13;
        PyObject *tmp_truediv_expr_right_13;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_grid_cell);
        tmp_expression_value_16 = var_grid_cell;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[12]);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_2 = mod_consts[33];
        tmp_truediv_expr_left_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_truediv_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_truediv_expr_right_13 = mod_consts[36];
        tmp_int_arg_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_13, tmp_truediv_expr_right_13);
        Py_DECREF(tmp_truediv_expr_left_13);
        if (tmp_int_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_55 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_cx;
            var_cx = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_truediv_expr_left_14;
        PyObject *tmp_truediv_expr_right_14;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_grid_cell);
        tmp_expression_value_18 = var_grid_cell;
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[12]);
        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_3 = mod_consts[39];
        tmp_truediv_expr_left_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_3, 1);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_truediv_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_truediv_expr_right_14 = mod_consts[36];
        tmp_int_arg_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_14, tmp_truediv_expr_right_14);
        Py_DECREF(tmp_truediv_expr_left_14);
        if (tmp_int_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_56 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_cy;
            var_cy = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_mag);
        tmp_args_element_value_15 = var_mag;
        if (var_RED_RADIOUS_X == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 158;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_16 = var_RED_RADIOUS_X;
        if (var_RED_RADIOUS_Y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 158;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_17 = var_RED_RADIOUS_Y;
        if (var_RED_WIDTH == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 158;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_18 = var_RED_WIDTH;
        CHECK_OBJECT(var_cx);
        tmp_args_element_value_19 = var_cx;
        CHECK_OBJECT(var_cy);
        tmp_args_element_value_20 = var_cy;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 158;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_21 = var_grid_size_w;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 158;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_22 = var_grid_size_h;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 158;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_13, call_args);
        }

        if (tmp_iter_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_57 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_57;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_58 = UNPACK_NEXT(tstate, tmp_unpack_5, 0, 2);
        if (tmp_assign_source_58 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 158;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_58;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_59 = UNPACK_NEXT(tstate, tmp_unpack_6, 1, 2);
        if (tmp_assign_source_59 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 158;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                    exception_lineno = 158;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[24];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 158;
            goto try_except_handler_9;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_8;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_5;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_60;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_60 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_red;
            var_red = tmp_assign_source_60;
            Py_INCREF(var_red);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_61;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_61 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_coord_red;
            var_coord_red = tmp_assign_source_61;
            Py_INCREF(var_coord_red);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_mag);
        tmp_args_element_value_23 = var_mag;
        if (var_BLUE_RADIOUS_X == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 159;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_24 = var_BLUE_RADIOUS_X;
        if (var_BLUE_RADIOUS_Y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 159;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_25 = var_BLUE_RADIOUS_Y;
        if (var_BLUE_WIDTH == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 159;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_26 = var_BLUE_WIDTH;
        CHECK_OBJECT(var_cx);
        tmp_args_element_value_27 = var_cx;
        CHECK_OBJECT(var_cy);
        tmp_args_element_value_28 = var_cy;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 159;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_29 = var_grid_size_w;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 159;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_30 = var_grid_size_h;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 159;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_14, call_args);
        }

        if (tmp_iter_arg_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_62 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_62;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_63 = UNPACK_NEXT(tstate, tmp_unpack_7, 0, 2);
        if (tmp_assign_source_63 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 159;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_63;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_64 = UNPACK_NEXT(tstate, tmp_unpack_8, 1, 2);
        if (tmp_assign_source_64 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 159;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_64;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                    exception_lineno = 159;
                    goto try_except_handler_11;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[24];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 159;
            goto try_except_handler_11;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_10;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_5;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_65;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_65 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_blue;
            var_blue = tmp_assign_source_65;
            Py_INCREF(var_blue);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_66;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_66 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_coord_blue;
            var_coord_blue = tmp_assign_source_66;
            Py_INCREF(var_coord_blue);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_truediv_expr_left_15;
        PyObject *tmp_truediv_expr_right_15;
        PyObject *tmp_sum_sequence_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_red);
        tmp_sum_sequence_1 = var_red;
        tmp_truediv_expr_left_15 = BUILTIN_SUM1(tstate, tmp_sum_sequence_1);
        if (tmp_truediv_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_red);
        tmp_len_arg_1 = var_red;
        tmp_truediv_expr_right_15 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_truediv_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_15);

            exception_lineno = 162;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_67 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_15, tmp_truediv_expr_right_15);
        Py_DECREF(tmp_truediv_expr_left_15);
        Py_DECREF(tmp_truediv_expr_right_15);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(var_AVG_RED == NULL);
        var_AVG_RED = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_truediv_expr_left_16;
        PyObject *tmp_truediv_expr_right_16;
        PyObject *tmp_sum_sequence_2;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(var_blue);
        tmp_sum_sequence_2 = var_blue;
        tmp_truediv_expr_left_16 = BUILTIN_SUM1(tstate, tmp_sum_sequence_2);
        if (tmp_truediv_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_blue);
        tmp_len_arg_2 = var_blue;
        tmp_truediv_expr_right_16 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_truediv_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_16);

            exception_lineno = 164;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_68 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_16, tmp_truediv_expr_right_16);
        Py_DECREF(tmp_truediv_expr_left_16);
        Py_DECREF(tmp_truediv_expr_right_16);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(var_AVG_BLUE == NULL);
        var_AVG_BLUE = tmp_assign_source_68;
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_31;
        if (var_avg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 166;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_19 = var_avg;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[55]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_AVG_RED);
        tmp_args_element_value_31 = var_AVG_RED;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 166;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        CHECK_OBJECT(var_c);
        tmp_iadd_expr_left_2 = var_c;
        tmp_iadd_expr_right_2 = mod_consts[39];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_69 = tmp_iadd_expr_left_2;
        var_c = tmp_assign_source_69;

    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_sub_expr_left_9;
        PyObject *tmp_sub_expr_right_9;
        CHECK_OBJECT(var_AVG_BLUE);
        tmp_sub_expr_left_9 = var_AVG_BLUE;
        CHECK_OBJECT(var_AVG_RED);
        tmp_sub_expr_right_9 = var_AVG_RED;
        tmp_assign_source_70 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_extract_factor;
            var_extract_factor = tmp_assign_source_70;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_tuple_element_2;
        if (var_minAvg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 171;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_20 = var_minAvg;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[55]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_extract_factor);
        tmp_tuple_element_2 = var_extract_factor;
        tmp_args_element_value_32 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_32, 0, tmp_tuple_element_2);
        if (var_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 171;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = var_y;
        PyTuple_SET_ITEM0(tmp_args_element_value_32, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_32);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 171;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        if (var_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 174;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_iadd_expr_left_3 = var_y;
        tmp_iadd_expr_right_3 = mod_consts[39];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_71 = tmp_iadd_expr_left_3;
        var_y = tmp_assign_source_71;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 141;
        type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_4;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_34;
        if (var_minAll == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 175;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_21 = var_minAll;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[55]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_18 = LOOKUP_BUILTIN(mod_consts[59]);
        assert(tmp_called_value_18 != NULL);
        if (var_minAvg == NULL) {
            Py_DECREF(tmp_called_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 175;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_34 = var_minAvg;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 175;
        tmp_args_element_value_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_34);
        if (tmp_args_element_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 175;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 175;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_iadd_expr_left_4;
        nuitka_digit tmp_iadd_expr_right_4;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 177;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_iadd_expr_left_4 = var_x;
        tmp_iadd_expr_right_4 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        assert(!(tmp_result == false));
        tmp_assign_source_72 = tmp_iadd_expr_left_4;
        var_x = tmp_assign_source_72;

    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[33];
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_73;
            Py_INCREF(var_y);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_delsubscr_subscript_1;
        if (var_minAvg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 179;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_delsubscr_target_1 = var_minAvg;
        tmp_delsubscr_subscript_1 = mod_consts[61];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 140;
        type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_xrange_low_3;
        PyObject *tmp_len_arg_3;
        if (var_minAll == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 180;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_3 = var_minAll;
        tmp_xrange_low_3 = BUILTIN_LEN(tstate, tmp_len_arg_3);
        if (tmp_xrange_low_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_7 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_3);
        Py_DECREF(tmp_xrange_low_3);
        if (tmp_iter_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_74 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_74;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_75 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_75 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                exception_lineno = 180;
                goto try_except_handler_12;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_75;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_76;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_76 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_76;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_subscript_value_5;
        if (var_sip == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 181;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_22 = var_sip;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[55]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_12;
        }
        if (var_minAll == NULL) {
            Py_DECREF(tmp_called_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 181;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_24 = var_minAll;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_expression_value_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_4);
        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 181;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_subscript_value_5 = mod_consts[39];
        tmp_add_expr_left_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_5, 1);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_add_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 181;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_add_expr_right_6 = mod_consts[39];
        tmp_args_element_value_35 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_left_6);
        if (tmp_args_element_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 181;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 181;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_35);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 180;
        type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
        goto try_except_handler_12;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    if (var_sip == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 182;
        type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_sip;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        if (var_N == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 184;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_4 = var_N;
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 184;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_4 = var_M;
        tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_xrange_low_4;
        PyObject *tmp_xrange_high_3;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_sub_expr_left_10;
        PyObject *tmp_sub_expr_right_10;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        PyObject *tmp_xrange_step_3;
        CHECK_OBJECT(par_K);
        tmp_xrange_low_4 = par_K;
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 186;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_8 = var_M;
        CHECK_OBJECT(par_K);
        tmp_add_expr_right_8 = par_K;
        tmp_sub_expr_left_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_sub_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_grid_size_h);
        tmp_sub_expr_right_10 = var_grid_size_h;
        tmp_add_expr_left_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_10, tmp_sub_expr_right_10);
        Py_DECREF(tmp_sub_expr_left_10);
        if (tmp_add_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_7 = mod_consts[39];
        tmp_xrange_high_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_left_7);
        if (tmp_xrange_high_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_grid_size_h);
        tmp_xrange_step_3 = var_grid_size_h;
        tmp_iter_arg_8 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_4, tmp_xrange_high_3, tmp_xrange_step_3);
        Py_DECREF(tmp_xrange_high_3);
        if (tmp_iter_arg_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_77 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
        Py_DECREF(tmp_iter_arg_8);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_4__for_iterator == NULL);
        tmp_for_loop_4__for_iterator = tmp_assign_source_77;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_78;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_78 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_78 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                exception_lineno = 186;
                goto try_except_handler_13;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_78;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_79;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_79 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_79;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_xrange_low_5;
        PyObject *tmp_xrange_high_4;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_sub_expr_left_11;
        PyObject *tmp_sub_expr_right_11;
        PyObject *tmp_xrange_step_4;
        tmp_xrange_low_5 = mod_consts[33];
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 187;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_sub_expr_left_11 = var_M;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 187;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_sub_expr_right_11 = var_grid_size_h;
        tmp_add_expr_left_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_11, tmp_sub_expr_right_11);
        if (tmp_add_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_add_expr_right_9 = mod_consts[39];
        tmp_xrange_high_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_9, tmp_add_expr_right_9);
        Py_DECREF(tmp_add_expr_left_9);
        if (tmp_xrange_high_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_13;
        }
        if (var_grid_size_h == NULL) {
            Py_DECREF(tmp_xrange_high_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 187;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_xrange_step_4 = var_grid_size_h;
        tmp_iter_arg_9 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_5, tmp_xrange_high_4, tmp_xrange_step_4);
        Py_DECREF(tmp_xrange_high_4);
        if (tmp_iter_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assign_source_80 = MAKE_ITERATOR(tstate, tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_for_loop_5__for_iterator;
            tmp_for_loop_5__for_iterator = tmp_assign_source_80;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_81;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_5 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_81 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_81 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                exception_lineno = 187;
                goto try_except_handler_14;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_81;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_82;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_assign_source_82 = tmp_for_loop_5__iter_value;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_82;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_iadd_expr_left_5;
        nuitka_digit tmp_iadd_expr_right_5;
        if (var_grid_cell_num == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 188;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_iadd_expr_left_5 = var_grid_cell_num;
        tmp_iadd_expr_right_5 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        assert(!(tmp_result == false));
        tmp_assign_source_83 = tmp_iadd_expr_left_5;
        var_grid_cell_num = tmp_assign_source_83;

    }
    Py_XDECREF(var_AVG_RED);
    var_AVG_RED = NULL;

    Py_XDECREF(var_AVG_BLUE);
    var_AVG_BLUE = NULL;

    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[33];
        {
            PyObject *old = var_mag_sum_red;
            var_mag_sum_red = tmp_assign_source_84;
            Py_INCREF(var_mag_sum_red);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[33];
        {
            PyObject *old = var_mag_sum_blue;
            var_mag_sum_blue = tmp_assign_source_85;
            Py_INCREF(var_mag_sum_blue);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[33];
        {
            PyObject *old = var_D;
            var_D = tmp_assign_source_86;
            Py_INCREF(var_D);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_start_value_3;
        PyObject *tmp_stop_value_3;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        CHECK_OBJECT(var_channel_array);
        tmp_expression_value_25 = var_channel_array;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 195;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_start_value_3 = var_r;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 195;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_add_expr_left_10 = var_r;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 195;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_add_expr_right_10 = var_grid_size_w;
        tmp_stop_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
        if (tmp_stop_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_tuple_element_3 = MAKE_SLICE_OBJECT2(tmp_start_value_3, tmp_stop_value_3);
        Py_DECREF(tmp_stop_value_3);
        assert(!(tmp_tuple_element_3 == NULL));
        tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_start_value_4;
            PyObject *tmp_stop_value_4;
            PyObject *tmp_add_expr_left_11;
            PyObject *tmp_add_expr_right_11;
            PyTuple_SET_ITEM(tmp_subscript_value_6, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_c);
            tmp_start_value_4 = var_c;
            CHECK_OBJECT(var_c);
            tmp_add_expr_left_11 = var_c;
            if (var_grid_size_h == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 195;
                type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_add_expr_right_11 = var_grid_size_h;
            tmp_stop_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
            if (tmp_stop_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = MAKE_SLICE_OBJECT2(tmp_start_value_4, tmp_stop_value_4);
            Py_DECREF(tmp_stop_value_4);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_subscript_value_6);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_87 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_6);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = var_grid_cell;
            var_grid_cell = tmp_assign_source_87;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_36;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 197;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_grid_cell);
        tmp_args_element_value_36 = var_grid_cell;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 197;
        tmp_iter_arg_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[46], tmp_args_element_value_36);
        if (tmp_iter_arg_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assign_source_88 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_10);
        Py_DECREF(tmp_iter_arg_10);
        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__source_iter;
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_88;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_89 = UNPACK_NEXT(tstate, tmp_unpack_9, 0, 2);
        if (tmp_assign_source_89 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 197;
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_1;
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_89;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_90 = UNPACK_NEXT(tstate, tmp_unpack_10, 1, 2);
        if (tmp_assign_source_90 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 197;
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_2;
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_90;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_5); assert(HAS_ITERNEXT(tmp_iterator_name_5));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_5)->tp_iternext)(tmp_iterator_name_5);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                    exception_lineno = 197;
                    goto try_except_handler_16;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[24];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 197;
            goto try_except_handler_16;
        }
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_15;
    // End of try:
    try_end_12:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_14;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_91;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_91 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = var_mag;
            var_mag = tmp_assign_source_91;
            Py_INCREF(var_mag);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_92;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_92 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var_phase;
            var_phase = tmp_assign_source_92;
            Py_INCREF(var_phase);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_truediv_expr_left_17;
        PyObject *tmp_truediv_expr_right_17;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_grid_cell);
        tmp_expression_value_27 = var_grid_cell;
        tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[12]);
        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_subscript_value_7 = mod_consts[33];
        tmp_truediv_expr_left_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_7, 0);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_truediv_expr_left_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_truediv_expr_right_17 = mod_consts[36];
        tmp_int_arg_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_17, tmp_truediv_expr_right_17);
        Py_DECREF(tmp_truediv_expr_left_17);
        if (tmp_int_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_93 = PyNumber_Int(tmp_int_arg_3);
        Py_DECREF(tmp_int_arg_3);
        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = var_cx;
            var_cx = tmp_assign_source_93;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_int_arg_4;
        PyObject *tmp_truediv_expr_left_18;
        PyObject *tmp_truediv_expr_right_18;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(var_grid_cell);
        tmp_expression_value_29 = var_grid_cell;
        tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[12]);
        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_subscript_value_8 = mod_consts[39];
        tmp_truediv_expr_left_18 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_8, 1);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_truediv_expr_left_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_truediv_expr_right_18 = mod_consts[36];
        tmp_int_arg_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_18, tmp_truediv_expr_right_18);
        Py_DECREF(tmp_truediv_expr_left_18);
        if (tmp_int_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_94 = PyNumber_Int(tmp_int_arg_4);
        Py_DECREF(tmp_int_arg_4);
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = var_cy;
            var_cy = tmp_assign_source_94;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_iter_arg_11;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_17;
        }
        CHECK_OBJECT(var_mag);
        tmp_args_element_value_37 = var_mag;
        if (var_RED_RADIOUS_X == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 204;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_args_element_value_38 = var_RED_RADIOUS_X;
        if (var_RED_RADIOUS_Y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 204;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_args_element_value_39 = var_RED_RADIOUS_Y;
        if (var_RED_WIDTH == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 204;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_args_element_value_40 = var_RED_WIDTH;
        CHECK_OBJECT(var_cx);
        tmp_args_element_value_41 = var_cx;
        CHECK_OBJECT(var_cy);
        tmp_args_element_value_42 = var_cy;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 204;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_args_element_value_43 = var_grid_size_w;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 204;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_args_element_value_44 = var_grid_size_h;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44};
            tmp_iter_arg_11 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_20, call_args);
        }

        if (tmp_iter_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_95 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_11);
        Py_DECREF(tmp_iter_arg_11);
        if (tmp_assign_source_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__source_iter;
            tmp_tuple_unpack_6__source_iter = tmp_assign_source_95;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_96 = UNPACK_NEXT(tstate, tmp_unpack_11, 0, 2);
        if (tmp_assign_source_96 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 204;
            goto try_except_handler_18;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_1;
            tmp_tuple_unpack_6__element_1 = tmp_assign_source_96;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_97 = UNPACK_NEXT(tstate, tmp_unpack_12, 1, 2);
        if (tmp_assign_source_97 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 204;
            goto try_except_handler_18;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_2;
            tmp_tuple_unpack_6__element_2 = tmp_assign_source_97;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_6;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_6); assert(HAS_ITERNEXT(tmp_iterator_name_6));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_6)->tp_iternext)(tmp_iterator_name_6);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                    exception_lineno = 204;
                    goto try_except_handler_18;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[24];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 204;
            goto try_except_handler_18;
        }
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_17;
    // End of try:
    try_end_14:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_14;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    {
        PyObject *tmp_assign_source_98;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
        tmp_assign_source_98 = tmp_tuple_unpack_6__element_1;
        {
            PyObject *old = var_red;
            var_red = tmp_assign_source_98;
            Py_INCREF(var_red);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_99;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
        tmp_assign_source_99 = tmp_tuple_unpack_6__element_2;
        {
            PyObject *old = var_coord_red;
            var_coord_red = tmp_assign_source_99;
            Py_INCREF(var_coord_red);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_iter_arg_12;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_19;
        }
        CHECK_OBJECT(var_mag);
        tmp_args_element_value_45 = var_mag;
        if (var_BLUE_RADIOUS_X == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 205;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_19;
        }

        tmp_args_element_value_46 = var_BLUE_RADIOUS_X;
        if (var_BLUE_RADIOUS_Y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 205;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_19;
        }

        tmp_args_element_value_47 = var_BLUE_RADIOUS_Y;
        if (var_BLUE_WIDTH == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 205;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_19;
        }

        tmp_args_element_value_48 = var_BLUE_WIDTH;
        CHECK_OBJECT(var_cx);
        tmp_args_element_value_49 = var_cx;
        CHECK_OBJECT(var_cy);
        tmp_args_element_value_50 = var_cy;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 205;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_19;
        }

        tmp_args_element_value_51 = var_grid_size_w;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 205;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_19;
        }

        tmp_args_element_value_52 = var_grid_size_h;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52};
            tmp_iter_arg_12 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_21, call_args);
        }

        if (tmp_iter_arg_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_assign_source_100 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_12);
        Py_DECREF(tmp_iter_arg_12);
        if (tmp_assign_source_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_19;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__source_iter;
            tmp_tuple_unpack_7__source_iter = tmp_assign_source_100;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_101 = UNPACK_NEXT(tstate, tmp_unpack_13, 0, 2);
        if (tmp_assign_source_101 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 205;
            goto try_except_handler_20;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_1;
            tmp_tuple_unpack_7__element_1 = tmp_assign_source_101;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_102 = UNPACK_NEXT(tstate, tmp_unpack_14, 1, 2);
        if (tmp_assign_source_102 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 205;
            goto try_except_handler_20;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_2;
            tmp_tuple_unpack_7__element_2 = tmp_assign_source_102;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_7;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_7); assert(HAS_ITERNEXT(tmp_iterator_name_7));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_7)->tp_iternext)(tmp_iterator_name_7);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                    exception_lineno = 205;
                    goto try_except_handler_20;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[24];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 205;
            goto try_except_handler_20;
        }
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_19;
    // End of try:
    try_end_16:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_14;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    {
        PyObject *tmp_assign_source_103;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_assign_source_103 = tmp_tuple_unpack_7__element_1;
        {
            PyObject *old = var_blue;
            var_blue = tmp_assign_source_103;
            Py_INCREF(var_blue);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_104;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
        tmp_assign_source_104 = tmp_tuple_unpack_7__element_2;
        {
            PyObject *old = var_coord_blue;
            var_coord_blue = tmp_assign_source_104;
            Py_INCREF(var_coord_blue);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;

    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_truediv_expr_left_19;
        PyObject *tmp_truediv_expr_right_19;
        PyObject *tmp_sum_sequence_3;
        PyObject *tmp_len_arg_4;
        CHECK_OBJECT(var_red);
        tmp_sum_sequence_3 = var_red;
        tmp_truediv_expr_left_19 = BUILTIN_SUM1(tstate, tmp_sum_sequence_3);
        if (tmp_truediv_expr_left_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(var_red);
        tmp_len_arg_4 = var_red;
        tmp_truediv_expr_right_19 = BUILTIN_LEN(tstate, tmp_len_arg_4);
        if (tmp_truediv_expr_right_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_19);

            exception_lineno = 208;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_105 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_19, tmp_truediv_expr_right_19);
        Py_DECREF(tmp_truediv_expr_left_19);
        Py_DECREF(tmp_truediv_expr_right_19);
        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        assert(var_AVG_RED == NULL);
        var_AVG_RED = tmp_assign_source_105;
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_truediv_expr_left_20;
        PyObject *tmp_truediv_expr_right_20;
        PyObject *tmp_sum_sequence_4;
        PyObject *tmp_len_arg_5;
        CHECK_OBJECT(var_blue);
        tmp_sum_sequence_4 = var_blue;
        tmp_truediv_expr_left_20 = BUILTIN_SUM1(tstate, tmp_sum_sequence_4);
        if (tmp_truediv_expr_left_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(var_blue);
        tmp_len_arg_5 = var_blue;
        tmp_truediv_expr_right_20 = BUILTIN_LEN(tstate, tmp_len_arg_5);
        if (tmp_truediv_expr_right_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_20);

            exception_lineno = 210;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_106 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_20, tmp_truediv_expr_right_20);
        Py_DECREF(tmp_truediv_expr_left_20);
        Py_DECREF(tmp_truediv_expr_right_20);
        if (tmp_assign_source_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        assert(var_AVG_BLUE == NULL);
        var_AVG_BLUE = tmp_assign_source_106;
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_53;
        if (var_avg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 212;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_expression_value_30 = var_avg;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[55]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(var_AVG_RED);
        tmp_args_element_value_53 = var_AVG_RED;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 212;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_53);
        Py_DECREF(tmp_called_value_22);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_iadd_expr_left_6;
        PyObject *tmp_iadd_expr_right_6;
        CHECK_OBJECT(var_c);
        tmp_iadd_expr_left_6 = var_c;
        tmp_iadd_expr_right_6 = mod_consts[39];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_107 = tmp_iadd_expr_left_6;
        var_c = tmp_assign_source_107;

    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_sub_expr_left_12;
        PyObject *tmp_sub_expr_right_12;
        CHECK_OBJECT(var_AVG_BLUE);
        tmp_sub_expr_left_12 = var_AVG_BLUE;
        CHECK_OBJECT(var_AVG_RED);
        tmp_sub_expr_right_12 = var_AVG_RED;
        tmp_assign_source_108 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_12, tmp_sub_expr_right_12);
        if (tmp_assign_source_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = var_extract_factor;
            var_extract_factor = tmp_assign_source_108;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_tuple_element_4;
        if (var_minAvg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 217;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_expression_value_31 = var_minAvg;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[55]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(var_extract_factor);
        tmp_tuple_element_4 = var_extract_factor;
        tmp_args_element_value_54 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_54, 0, tmp_tuple_element_4);
        if (var_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 217;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto tuple_build_exception_4;
        }

        tmp_tuple_element_4 = var_y;
        PyTuple_SET_ITEM0(tmp_args_element_value_54, 1, tmp_tuple_element_4);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_54);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 217;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_54);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_iadd_expr_left_7;
        PyObject *tmp_iadd_expr_right_7;
        if (var_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 220;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_iadd_expr_left_7 = var_y;
        tmp_iadd_expr_right_7 = mod_consts[39];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_109 = tmp_iadd_expr_left_7;
        var_y = tmp_assign_source_109;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 187;
        type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
        goto try_except_handler_14;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_13;
    // End of try:
    try_end_18:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_56;
        if (var_minAll == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 221;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_expression_value_32 = var_minAll;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[55]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_called_value_25 = LOOKUP_BUILTIN(mod_consts[59]);
        assert(tmp_called_value_25 != NULL);
        if (var_minAvg == NULL) {
            Py_DECREF(tmp_called_value_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 221;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_args_element_value_56 = var_minAvg;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 221;
        tmp_args_element_value_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_56);
        if (tmp_args_element_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 221;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_13;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 221;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_55);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_55);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_iadd_expr_left_8;
        nuitka_digit tmp_iadd_expr_right_8;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 223;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_iadd_expr_left_8 = var_x;
        tmp_iadd_expr_right_8 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_8, tmp_iadd_expr_right_8);
        assert(!(tmp_result == false));
        tmp_assign_source_110 = tmp_iadd_expr_left_8;
        var_x = tmp_assign_source_110;

    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[33];
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_111;
            Py_INCREF(var_y);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_delsubscr_target_2;
        PyObject *tmp_delsubscr_subscript_2;
        if (var_minAvg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 225;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_delsubscr_target_2 = var_minAvg;
        tmp_delsubscr_subscript_2 = mod_consts[61];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_2, tmp_delsubscr_subscript_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 186;
        type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
        goto try_except_handler_13;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_iter_arg_13;
        PyObject *tmp_xrange_low_6;
        PyObject *tmp_len_arg_6;
        if (var_minAll == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 226;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_6 = var_minAll;
        tmp_xrange_low_6 = BUILTIN_LEN(tstate, tmp_len_arg_6);
        if (tmp_xrange_low_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_13 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_6);
        Py_DECREF(tmp_xrange_low_6);
        if (tmp_iter_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_112 = MAKE_ITERATOR(tstate, tmp_iter_arg_13);
        Py_DECREF(tmp_iter_arg_13);
        if (tmp_assign_source_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_6__for_iterator == NULL);
        tmp_for_loop_6__for_iterator = tmp_assign_source_112;
    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_113;
        CHECK_OBJECT(tmp_for_loop_6__for_iterator);
        tmp_next_source_6 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_113 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_113 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                exception_lineno = 226;
                goto try_except_handler_21;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_113;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_114;
        CHECK_OBJECT(tmp_for_loop_6__iter_value);
        tmp_assign_source_114 = tmp_for_loop_6__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_114;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_subscript_value_10;
        if (var_sip == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 227;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_expression_value_33 = var_sip;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[55]);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_21;
        }
        if (var_minAll == NULL) {
            Py_DECREF(tmp_called_value_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 227;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_expression_value_35 = var_minAll;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_9 = var_i;
        tmp_expression_value_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_9);
        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 227;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_subscript_value_10 = mod_consts[39];
        tmp_add_expr_left_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_34, tmp_subscript_value_10, 1);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_add_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 227;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_add_expr_right_12 = mod_consts[39];
        tmp_args_element_value_57 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_12, tmp_add_expr_right_12);
        Py_DECREF(tmp_add_expr_left_12);
        if (tmp_args_element_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 227;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 227;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_57);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_21;
        }
        Py_DECREF(tmp_call_result_8);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 226;
        type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
        goto try_except_handler_21;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    if (var_sip == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 228;
        type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_sip;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_iter_arg_14;
        PyObject *tmp_xrange_low_7;
        PyObject *tmp_xrange_high_5;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        PyObject *tmp_sub_expr_left_13;
        PyObject *tmp_sub_expr_right_13;
        PyObject *tmp_xrange_step_5;
        tmp_xrange_low_7 = mod_consts[33];
        if (var_N == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 231;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_13 = var_N;
        CHECK_OBJECT(var_grid_size_w);
        tmp_sub_expr_right_13 = var_grid_size_w;
        tmp_add_expr_left_13 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_13, tmp_sub_expr_right_13);
        if (tmp_add_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_13 = mod_consts[39];
        tmp_xrange_high_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_13, tmp_add_expr_right_13);
        Py_DECREF(tmp_add_expr_left_13);
        if (tmp_xrange_high_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_grid_size_w);
        tmp_xrange_step_5 = var_grid_size_w;
        tmp_iter_arg_14 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_7, tmp_xrange_high_5, tmp_xrange_step_5);
        Py_DECREF(tmp_xrange_high_5);
        if (tmp_iter_arg_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_115 = MAKE_ITERATOR(tstate, tmp_iter_arg_14);
        Py_DECREF(tmp_iter_arg_14);
        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_7__for_iterator == NULL);
        tmp_for_loop_7__for_iterator = tmp_assign_source_115;
    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_116;
        CHECK_OBJECT(tmp_for_loop_7__for_iterator);
        tmp_next_source_7 = tmp_for_loop_7__for_iterator;
        tmp_assign_source_116 = ITERATOR_NEXT(tmp_next_source_7);
        if (tmp_assign_source_116 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_7;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                exception_lineno = 231;
                goto try_except_handler_22;
            }
        }

        {
            PyObject *old = tmp_for_loop_7__iter_value;
            tmp_for_loop_7__iter_value = tmp_assign_source_116;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_117;
        CHECK_OBJECT(tmp_for_loop_7__iter_value);
        tmp_assign_source_117 = tmp_for_loop_7__iter_value;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_117;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_iter_arg_15;
        PyObject *tmp_xrange_low_8;
        PyObject *tmp_xrange_high_6;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_sub_expr_left_14;
        PyObject *tmp_sub_expr_right_14;
        PyObject *tmp_xrange_step_6;
        tmp_xrange_low_8 = mod_consts[33];
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 232;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_sub_expr_left_14 = var_M;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 232;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_sub_expr_right_14 = var_grid_size_h;
        tmp_add_expr_left_14 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_14, tmp_sub_expr_right_14);
        if (tmp_add_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_add_expr_right_14 = mod_consts[39];
        tmp_xrange_high_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_14, tmp_add_expr_right_14);
        Py_DECREF(tmp_add_expr_left_14);
        if (tmp_xrange_high_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_22;
        }
        if (var_grid_size_h == NULL) {
            Py_DECREF(tmp_xrange_high_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 232;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_xrange_step_6 = var_grid_size_h;
        tmp_iter_arg_15 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_8, tmp_xrange_high_6, tmp_xrange_step_6);
        Py_DECREF(tmp_xrange_high_6);
        if (tmp_iter_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_assign_source_118 = MAKE_ITERATOR(tstate, tmp_iter_arg_15);
        Py_DECREF(tmp_iter_arg_15);
        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = tmp_for_loop_8__for_iterator;
            tmp_for_loop_8__for_iterator = tmp_assign_source_118;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_8;
        PyObject *tmp_assign_source_119;
        CHECK_OBJECT(tmp_for_loop_8__for_iterator);
        tmp_next_source_8 = tmp_for_loop_8__for_iterator;
        tmp_assign_source_119 = ITERATOR_NEXT(tmp_next_source_8);
        if (tmp_assign_source_119 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_8;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                exception_lineno = 232;
                goto try_except_handler_23;
            }
        }

        {
            PyObject *old = tmp_for_loop_8__iter_value;
            tmp_for_loop_8__iter_value = tmp_assign_source_119;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_120;
        CHECK_OBJECT(tmp_for_loop_8__iter_value);
        tmp_assign_source_120 = tmp_for_loop_8__iter_value;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_120;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_iadd_expr_left_9;
        nuitka_digit tmp_iadd_expr_right_9;
        if (var_grid_cell_num == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 233;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_iadd_expr_left_9 = var_grid_cell_num;
        tmp_iadd_expr_right_9 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_9, tmp_iadd_expr_right_9);
        assert(!(tmp_result == false));
        tmp_assign_source_121 = tmp_iadd_expr_left_9;
        var_grid_cell_num = tmp_assign_source_121;

    }
    Py_XDECREF(var_AVG_RED);
    var_AVG_RED = NULL;

    Py_XDECREF(var_AVG_BLUE);
    var_AVG_BLUE = NULL;

    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[33];
        {
            PyObject *old = var_mag_sum_red;
            var_mag_sum_red = tmp_assign_source_122;
            Py_INCREF(var_mag_sum_red);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[33];
        {
            PyObject *old = var_mag_sum_blue;
            var_mag_sum_blue = tmp_assign_source_123;
            Py_INCREF(var_mag_sum_blue);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[33];
        {
            PyObject *old = var_D;
            var_D = tmp_assign_source_124;
            Py_INCREF(var_D);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_start_value_5;
        PyObject *tmp_stop_value_5;
        PyObject *tmp_add_expr_left_15;
        PyObject *tmp_add_expr_right_15;
        CHECK_OBJECT(var_channel_array);
        tmp_expression_value_36 = var_channel_array;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 240;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_start_value_5 = var_r;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 240;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_add_expr_left_15 = var_r;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 240;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_add_expr_right_15 = var_grid_size_w;
        tmp_stop_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_15, tmp_add_expr_right_15);
        if (tmp_stop_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_tuple_element_5 = MAKE_SLICE_OBJECT2(tmp_start_value_5, tmp_stop_value_5);
        Py_DECREF(tmp_stop_value_5);
        assert(!(tmp_tuple_element_5 == NULL));
        tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_start_value_6;
            PyObject *tmp_stop_value_6;
            PyObject *tmp_add_expr_left_16;
            PyObject *tmp_add_expr_right_16;
            PyTuple_SET_ITEM(tmp_subscript_value_11, 0, tmp_tuple_element_5);
            CHECK_OBJECT(var_c);
            tmp_start_value_6 = var_c;
            CHECK_OBJECT(var_c);
            tmp_add_expr_left_16 = var_c;
            if (var_grid_size_h == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 240;
                type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                goto tuple_build_exception_5;
            }

            tmp_add_expr_right_16 = var_grid_size_h;
            tmp_stop_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
            if (tmp_stop_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = MAKE_SLICE_OBJECT2(tmp_start_value_6, tmp_stop_value_6);
            Py_DECREF(tmp_stop_value_6);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_11, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_subscript_value_11);
        goto try_except_handler_23;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_assign_source_125 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_11);
        Py_DECREF(tmp_subscript_value_11);
        if (tmp_assign_source_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_grid_cell;
            var_grid_cell = tmp_assign_source_125;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_iter_arg_16;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_58;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 242;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_grid_cell);
        tmp_args_element_value_58 = var_grid_cell;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 242;
        tmp_iter_arg_16 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[46], tmp_args_element_value_58);
        if (tmp_iter_arg_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_24;
        }
        tmp_assign_source_126 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_16);
        Py_DECREF(tmp_iter_arg_16);
        if (tmp_assign_source_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_24;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__source_iter;
            tmp_tuple_unpack_8__source_iter = tmp_assign_source_126;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_15 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_127 = UNPACK_NEXT(tstate, tmp_unpack_15, 0, 2);
        if (tmp_assign_source_127 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 242;
            goto try_except_handler_25;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_1;
            tmp_tuple_unpack_8__element_1 = tmp_assign_source_127;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_16 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_128 = UNPACK_NEXT(tstate, tmp_unpack_16, 1, 2);
        if (tmp_assign_source_128 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 242;
            goto try_except_handler_25;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_2;
            tmp_tuple_unpack_8__element_2 = tmp_assign_source_128;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_8;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_iterator_name_8 = tmp_tuple_unpack_8__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_8); assert(HAS_ITERNEXT(tmp_iterator_name_8));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_8)->tp_iternext)(tmp_iterator_name_8);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                    exception_lineno = 242;
                    goto try_except_handler_25;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[24];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 242;
            goto try_except_handler_25;
        }
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
    Py_DECREF(tmp_tuple_unpack_8__source_iter);
    tmp_tuple_unpack_8__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto try_except_handler_24;
    // End of try:
    try_end_21:;
    goto try_end_22;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_8__element_1);
    tmp_tuple_unpack_8__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_2);
    tmp_tuple_unpack_8__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_23;
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
    Py_DECREF(tmp_tuple_unpack_8__source_iter);
    tmp_tuple_unpack_8__source_iter = NULL;
    {
        PyObject *tmp_assign_source_129;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_1);
        tmp_assign_source_129 = tmp_tuple_unpack_8__element_1;
        {
            PyObject *old = var_mag;
            var_mag = tmp_assign_source_129;
            Py_INCREF(var_mag);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_1);
    tmp_tuple_unpack_8__element_1 = NULL;

    {
        PyObject *tmp_assign_source_130;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_2);
        tmp_assign_source_130 = tmp_tuple_unpack_8__element_2;
        {
            PyObject *old = var_phase;
            var_phase = tmp_assign_source_130;
            Py_INCREF(var_phase);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_2);
    tmp_tuple_unpack_8__element_2 = NULL;

    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_int_arg_5;
        PyObject *tmp_truediv_expr_left_21;
        PyObject *tmp_truediv_expr_right_21;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_12;
        CHECK_OBJECT(var_grid_cell);
        tmp_expression_value_38 = var_grid_cell;
        tmp_expression_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[12]);
        if (tmp_expression_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_subscript_value_12 = mod_consts[33];
        tmp_truediv_expr_left_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_12, 0);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_truediv_expr_left_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_truediv_expr_right_21 = mod_consts[36];
        tmp_int_arg_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_21, tmp_truediv_expr_right_21);
        Py_DECREF(tmp_truediv_expr_left_21);
        if (tmp_int_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_131 = PyNumber_Int(tmp_int_arg_5);
        Py_DECREF(tmp_int_arg_5);
        if (tmp_assign_source_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_cx;
            var_cx = tmp_assign_source_131;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_int_arg_6;
        PyObject *tmp_truediv_expr_left_22;
        PyObject *tmp_truediv_expr_right_22;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_13;
        CHECK_OBJECT(var_grid_cell);
        tmp_expression_value_40 = var_grid_cell;
        tmp_expression_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[12]);
        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_subscript_value_13 = mod_consts[39];
        tmp_truediv_expr_left_22 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_39, tmp_subscript_value_13, 1);
        Py_DECREF(tmp_expression_value_39);
        if (tmp_truediv_expr_left_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_truediv_expr_right_22 = mod_consts[36];
        tmp_int_arg_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_22, tmp_truediv_expr_right_22);
        Py_DECREF(tmp_truediv_expr_left_22);
        if (tmp_int_arg_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_132 = PyNumber_Int(tmp_int_arg_6);
        Py_DECREF(tmp_int_arg_6);
        if (tmp_assign_source_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_cy;
            var_cy = tmp_assign_source_132;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_iter_arg_17;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_26;
        }
        CHECK_OBJECT(var_mag);
        tmp_args_element_value_59 = var_mag;
        if (var_RED_RADIOUS_X == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 249;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_args_element_value_60 = var_RED_RADIOUS_X;
        if (var_RED_RADIOUS_Y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 249;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_args_element_value_61 = var_RED_RADIOUS_Y;
        if (var_RED_WIDTH == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 249;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_args_element_value_62 = var_RED_WIDTH;
        CHECK_OBJECT(var_cx);
        tmp_args_element_value_63 = var_cx;
        CHECK_OBJECT(var_cy);
        tmp_args_element_value_64 = var_cy;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 249;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_args_element_value_65 = var_grid_size_w;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 249;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_args_element_value_66 = var_grid_size_h;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66};
            tmp_iter_arg_17 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_27, call_args);
        }

        if (tmp_iter_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_assign_source_133 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_17);
        Py_DECREF(tmp_iter_arg_17);
        if (tmp_assign_source_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_26;
        }
        {
            PyObject *old = tmp_tuple_unpack_9__source_iter;
            tmp_tuple_unpack_9__source_iter = tmp_assign_source_133;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_17 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_134 = UNPACK_NEXT(tstate, tmp_unpack_17, 0, 2);
        if (tmp_assign_source_134 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 249;
            goto try_except_handler_27;
        }
        {
            PyObject *old = tmp_tuple_unpack_9__element_1;
            tmp_tuple_unpack_9__element_1 = tmp_assign_source_134;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_18 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_135 = UNPACK_NEXT(tstate, tmp_unpack_18, 1, 2);
        if (tmp_assign_source_135 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 249;
            goto try_except_handler_27;
        }
        {
            PyObject *old = tmp_tuple_unpack_9__element_2;
            tmp_tuple_unpack_9__element_2 = tmp_assign_source_135;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_9;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_iterator_name_9 = tmp_tuple_unpack_9__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_9); assert(HAS_ITERNEXT(tmp_iterator_name_9));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_9)->tp_iternext)(tmp_iterator_name_9);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                    exception_lineno = 249;
                    goto try_except_handler_27;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[24];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 249;
            goto try_except_handler_27;
        }
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
    Py_DECREF(tmp_tuple_unpack_9__source_iter);
    tmp_tuple_unpack_9__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto try_except_handler_26;
    // End of try:
    try_end_23:;
    goto try_end_24;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_9__element_1);
    tmp_tuple_unpack_9__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_9__element_2);
    tmp_tuple_unpack_9__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_23;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
    Py_DECREF(tmp_tuple_unpack_9__source_iter);
    tmp_tuple_unpack_9__source_iter = NULL;
    {
        PyObject *tmp_assign_source_136;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_1);
        tmp_assign_source_136 = tmp_tuple_unpack_9__element_1;
        {
            PyObject *old = var_red;
            var_red = tmp_assign_source_136;
            Py_INCREF(var_red);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_9__element_1);
    tmp_tuple_unpack_9__element_1 = NULL;

    {
        PyObject *tmp_assign_source_137;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_2);
        tmp_assign_source_137 = tmp_tuple_unpack_9__element_2;
        {
            PyObject *old = var_coord_red;
            var_coord_red = tmp_assign_source_137;
            Py_INCREF(var_coord_red);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_9__element_2);
    tmp_tuple_unpack_9__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_iter_arg_18;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_args_element_value_74;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_28;
        }
        CHECK_OBJECT(var_mag);
        tmp_args_element_value_67 = var_mag;
        if (var_BLUE_RADIOUS_X == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 250;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_28;
        }

        tmp_args_element_value_68 = var_BLUE_RADIOUS_X;
        if (var_BLUE_RADIOUS_Y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 250;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_28;
        }

        tmp_args_element_value_69 = var_BLUE_RADIOUS_Y;
        if (var_BLUE_WIDTH == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 250;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_28;
        }

        tmp_args_element_value_70 = var_BLUE_WIDTH;
        CHECK_OBJECT(var_cx);
        tmp_args_element_value_71 = var_cx;
        CHECK_OBJECT(var_cy);
        tmp_args_element_value_72 = var_cy;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 250;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_28;
        }

        tmp_args_element_value_73 = var_grid_size_w;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 250;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_28;
        }

        tmp_args_element_value_74 = var_grid_size_h;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72, tmp_args_element_value_73, tmp_args_element_value_74};
            tmp_iter_arg_18 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_28, call_args);
        }

        if (tmp_iter_arg_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_28;
        }
        tmp_assign_source_138 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_18);
        Py_DECREF(tmp_iter_arg_18);
        if (tmp_assign_source_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_28;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__source_iter;
            tmp_tuple_unpack_10__source_iter = tmp_assign_source_138;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_19 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_139 = UNPACK_NEXT(tstate, tmp_unpack_19, 0, 2);
        if (tmp_assign_source_139 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 250;
            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__element_1;
            tmp_tuple_unpack_10__element_1 = tmp_assign_source_139;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_20 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_140 = UNPACK_NEXT(tstate, tmp_unpack_20, 1, 2);
        if (tmp_assign_source_140 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 250;
            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__element_2;
            tmp_tuple_unpack_10__element_2 = tmp_assign_source_140;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_10;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_iterator_name_10 = tmp_tuple_unpack_10__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_10); assert(HAS_ITERNEXT(tmp_iterator_name_10));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_10)->tp_iternext)(tmp_iterator_name_10);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                    exception_lineno = 250;
                    goto try_except_handler_29;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[24];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            exception_lineno = 250;
            goto try_except_handler_29;
        }
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
    Py_DECREF(tmp_tuple_unpack_10__source_iter);
    tmp_tuple_unpack_10__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto try_except_handler_28;
    // End of try:
    try_end_25:;
    goto try_end_26;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_10__element_1);
    tmp_tuple_unpack_10__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_10__element_2);
    tmp_tuple_unpack_10__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto try_except_handler_23;
    // End of try:
    try_end_26:;
    CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
    Py_DECREF(tmp_tuple_unpack_10__source_iter);
    tmp_tuple_unpack_10__source_iter = NULL;
    {
        PyObject *tmp_assign_source_141;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_1);
        tmp_assign_source_141 = tmp_tuple_unpack_10__element_1;
        {
            PyObject *old = var_blue;
            var_blue = tmp_assign_source_141;
            Py_INCREF(var_blue);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_10__element_1);
    tmp_tuple_unpack_10__element_1 = NULL;

    {
        PyObject *tmp_assign_source_142;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_2);
        tmp_assign_source_142 = tmp_tuple_unpack_10__element_2;
        {
            PyObject *old = var_coord_blue;
            var_coord_blue = tmp_assign_source_142;
            Py_INCREF(var_coord_blue);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_10__element_2);
    tmp_tuple_unpack_10__element_2 = NULL;

    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_truediv_expr_left_23;
        PyObject *tmp_truediv_expr_right_23;
        PyObject *tmp_sum_sequence_5;
        PyObject *tmp_len_arg_7;
        CHECK_OBJECT(var_red);
        tmp_sum_sequence_5 = var_red;
        tmp_truediv_expr_left_23 = BUILTIN_SUM1(tstate, tmp_sum_sequence_5);
        if (tmp_truediv_expr_left_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_red);
        tmp_len_arg_7 = var_red;
        tmp_truediv_expr_right_23 = BUILTIN_LEN(tstate, tmp_len_arg_7);
        if (tmp_truediv_expr_right_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_23);

            exception_lineno = 253;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_143 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_23, tmp_truediv_expr_right_23);
        Py_DECREF(tmp_truediv_expr_left_23);
        Py_DECREF(tmp_truediv_expr_right_23);
        if (tmp_assign_source_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        assert(var_AVG_RED == NULL);
        var_AVG_RED = tmp_assign_source_143;
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_truediv_expr_left_24;
        PyObject *tmp_truediv_expr_right_24;
        PyObject *tmp_sum_sequence_6;
        PyObject *tmp_len_arg_8;
        CHECK_OBJECT(var_blue);
        tmp_sum_sequence_6 = var_blue;
        tmp_truediv_expr_left_24 = BUILTIN_SUM1(tstate, tmp_sum_sequence_6);
        if (tmp_truediv_expr_left_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_blue);
        tmp_len_arg_8 = var_blue;
        tmp_truediv_expr_right_24 = BUILTIN_LEN(tstate, tmp_len_arg_8);
        if (tmp_truediv_expr_right_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_24);

            exception_lineno = 255;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_144 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_24, tmp_truediv_expr_right_24);
        Py_DECREF(tmp_truediv_expr_left_24);
        Py_DECREF(tmp_truediv_expr_right_24);
        if (tmp_assign_source_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        assert(var_AVG_BLUE == NULL);
        var_AVG_BLUE = tmp_assign_source_144;
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_75;
        if (var_avg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 257;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_expression_value_41 = var_avg;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[55]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_AVG_RED);
        tmp_args_element_value_75 = var_AVG_RED;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 257;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_75);
        Py_DECREF(tmp_called_value_29);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_iadd_expr_left_10;
        PyObject *tmp_iadd_expr_right_10;
        CHECK_OBJECT(var_c);
        tmp_iadd_expr_left_10 = var_c;
        tmp_iadd_expr_right_10 = mod_consts[39];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_10, tmp_iadd_expr_right_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_145 = tmp_iadd_expr_left_10;
        var_c = tmp_assign_source_145;

    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_sub_expr_left_15;
        PyObject *tmp_sub_expr_right_15;
        CHECK_OBJECT(var_AVG_BLUE);
        tmp_sub_expr_left_15 = var_AVG_BLUE;
        CHECK_OBJECT(var_AVG_RED);
        tmp_sub_expr_right_15 = var_AVG_RED;
        tmp_assign_source_146 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_15, tmp_sub_expr_right_15);
        if (tmp_assign_source_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_extract_factor;
            var_extract_factor = tmp_assign_source_146;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_tuple_element_6;
        if (var_minAvg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 262;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_expression_value_42 = var_minAvg;
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[55]);
        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_extract_factor);
        tmp_tuple_element_6 = var_extract_factor;
        tmp_args_element_value_76 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_76, 0, tmp_tuple_element_6);
        if (var_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 262;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto tuple_build_exception_6;
        }

        tmp_tuple_element_6 = var_y;
        PyTuple_SET_ITEM0(tmp_args_element_value_76, 1, tmp_tuple_element_6);
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_76);
        goto try_except_handler_23;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 262;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_76);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_76);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_iadd_expr_left_11;
        PyObject *tmp_iadd_expr_right_11;
        if (var_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 265;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_iadd_expr_left_11 = var_y;
        tmp_iadd_expr_right_11 = mod_consts[39];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_11, tmp_iadd_expr_right_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_147 = tmp_iadd_expr_left_11;
        var_y = tmp_assign_source_147;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 232;
        type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
        goto try_except_handler_23;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_27;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_8__iter_value);
    tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_8__for_iterator);
    Py_DECREF(tmp_for_loop_8__for_iterator);
    tmp_for_loop_8__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto try_except_handler_22;
    // End of try:
    try_end_27:;
    Py_XDECREF(tmp_for_loop_8__iter_value);
    tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_8__for_iterator);
    Py_DECREF(tmp_for_loop_8__for_iterator);
    tmp_for_loop_8__for_iterator = NULL;
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_78;
        if (var_minAll == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 266;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_expression_value_43 = var_minAll;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[55]);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_called_value_32 = LOOKUP_BUILTIN(mod_consts[59]);
        assert(tmp_called_value_32 != NULL);
        if (var_minAvg == NULL) {
            Py_DECREF(tmp_called_value_31);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 266;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_args_element_value_78 = var_minAvg;
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 266;
        tmp_args_element_value_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_78);
        if (tmp_args_element_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 266;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_22;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 266;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_77);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_77);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_iadd_expr_left_12;
        nuitka_digit tmp_iadd_expr_right_12;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 268;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_iadd_expr_left_12 = var_x;
        tmp_iadd_expr_right_12 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_12, tmp_iadd_expr_right_12);
        assert(!(tmp_result == false));
        tmp_assign_source_148 = tmp_iadd_expr_left_12;
        var_x = tmp_assign_source_148;

    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[33];
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_149;
            Py_INCREF(var_y);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_delsubscr_target_3;
        PyObject *tmp_delsubscr_subscript_3;
        if (var_minAvg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 270;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_delsubscr_target_3 = var_minAvg;
        tmp_delsubscr_subscript_3 = mod_consts[61];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_3, tmp_delsubscr_subscript_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_22;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 231;
        type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
        goto try_except_handler_22;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_28;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_iter_arg_19;
        PyObject *tmp_xrange_low_9;
        PyObject *tmp_len_arg_9;
        if (var_minAll == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 271;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_9 = var_minAll;
        tmp_xrange_low_9 = BUILTIN_LEN(tstate, tmp_len_arg_9);
        if (tmp_xrange_low_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_19 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_9);
        Py_DECREF(tmp_xrange_low_9);
        if (tmp_iter_arg_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_150 = MAKE_ITERATOR(tstate, tmp_iter_arg_19);
        Py_DECREF(tmp_iter_arg_19);
        if (tmp_assign_source_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_9__for_iterator == NULL);
        tmp_for_loop_9__for_iterator = tmp_assign_source_150;
    }
    // Tried code:
    loop_start_9:;
    {
        PyObject *tmp_next_source_9;
        PyObject *tmp_assign_source_151;
        CHECK_OBJECT(tmp_for_loop_9__for_iterator);
        tmp_next_source_9 = tmp_for_loop_9__for_iterator;
        tmp_assign_source_151 = ITERATOR_NEXT(tmp_next_source_9);
        if (tmp_assign_source_151 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_9;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
                exception_lineno = 271;
                goto try_except_handler_30;
            }
        }

        {
            PyObject *old = tmp_for_loop_9__iter_value;
            tmp_for_loop_9__iter_value = tmp_assign_source_151;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_152;
        CHECK_OBJECT(tmp_for_loop_9__iter_value);
        tmp_assign_source_152 = tmp_for_loop_9__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_152;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_add_expr_left_17;
        PyObject *tmp_add_expr_right_17;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_subscript_value_15;
        if (var_sip == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 272;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_30;
        }

        tmp_expression_value_44 = var_sip;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[55]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_30;
        }
        if (var_minAll == NULL) {
            Py_DECREF(tmp_called_value_33);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 272;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_30;
        }

        tmp_expression_value_46 = var_minAll;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_14 = var_i;
        tmp_expression_value_45 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_14);
        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 272;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_30;
        }
        tmp_subscript_value_15 = mod_consts[39];
        tmp_add_expr_left_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_45, tmp_subscript_value_15, 1);
        Py_DECREF(tmp_expression_value_45);
        if (tmp_add_expr_left_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 272;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_30;
        }
        tmp_add_expr_right_17 = mod_consts[39];
        tmp_args_element_value_79 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_17, tmp_add_expr_right_17);
        Py_DECREF(tmp_add_expr_left_17);
        if (tmp_args_element_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 272;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_30;
        }
        frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame.f_lineno = 272;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_79);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_element_value_79);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
            goto try_except_handler_30;
        }
        Py_DECREF(tmp_call_result_12);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 271;
        type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
        goto try_except_handler_30;
    }
    goto loop_start_9;
    loop_end_9:;
    goto try_end_29;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_9__iter_value);
    tmp_for_loop_9__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_9__for_iterator);
    Py_DECREF(tmp_for_loop_9__for_iterator);
    tmp_for_loop_9__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    Py_XDECREF(tmp_for_loop_9__iter_value);
    tmp_for_loop_9__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_9__for_iterator);
    Py_DECREF(tmp_for_loop_9__for_iterator);
    tmp_for_loop_9__for_iterator = NULL;
    if (var_sip == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 273;
        type_description_1 = "oooooooNoooooooooooooooooooNNoooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_sip;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_4:;
    branch_end_3:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_867b81cbb5af906ff5ba9dcb9b543afa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_867b81cbb5af906ff5ba9dcb9b543afa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_867b81cbb5af906ff5ba9dcb9b543afa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_867b81cbb5af906ff5ba9dcb9b543afa,
        type_description_1,
        par_self,
        par_channel,
        par_SIZE,
        par_K,
        par_PR,
        par_PB,
        var_grid_cell_num,
        NULL,
        var_sip,
        var_avg,
        var_M,
        var_N,
        var_channel_array,
        var_grid_size_w,
        var_grid_size_h,
        var_RED_WIDTH,
        var_BLUE_WIDTH,
        var_RED_RADIOUS_X,
        var_RED_RADIOUS_Y,
        var_BLUE_RADIOUS_X,
        var_BLUE_RADIOUS_Y,
        var_minAvg,
        var_minAll,
        var_x,
        var_y,
        var_i,
        var_c,
        NULL,
        NULL,
        var_r,
        var_AVG_RED,
        var_AVG_BLUE,
        var_mag_sum_red,
        var_mag_sum_blue,
        var_D,
        var_grid_cell,
        var_mag,
        var_phase,
        var_cx,
        var_cy,
        var_red,
        var_coord_red,
        var_blue,
        var_coord_blue,
        var_extract_factor
    );


    // Release cached frame if used for exception.
    if (frame_867b81cbb5af906ff5ba9dcb9b543afa == cache_frame_867b81cbb5af906ff5ba9dcb9b543afa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_867b81cbb5af906ff5ba9dcb9b543afa);
        cache_frame_867b81cbb5af906ff5ba9dcb9b543afa = NULL;
    }

    assertFrameObject(frame_867b81cbb5af906ff5ba9dcb9b543afa);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_grid_cell_num);
    var_grid_cell_num = NULL;
    Py_XDECREF(var_sip);
    var_sip = NULL;
    Py_XDECREF(var_avg);
    var_avg = NULL;
    Py_XDECREF(var_M);
    var_M = NULL;
    Py_XDECREF(var_N);
    var_N = NULL;
    CHECK_OBJECT(var_channel_array);
    Py_DECREF(var_channel_array);
    var_channel_array = NULL;
    Py_XDECREF(var_grid_size_w);
    var_grid_size_w = NULL;
    Py_XDECREF(var_grid_size_h);
    var_grid_size_h = NULL;
    Py_XDECREF(var_RED_WIDTH);
    var_RED_WIDTH = NULL;
    Py_XDECREF(var_BLUE_WIDTH);
    var_BLUE_WIDTH = NULL;
    Py_XDECREF(var_RED_RADIOUS_X);
    var_RED_RADIOUS_X = NULL;
    Py_XDECREF(var_RED_RADIOUS_Y);
    var_RED_RADIOUS_Y = NULL;
    Py_XDECREF(var_BLUE_RADIOUS_X);
    var_BLUE_RADIOUS_X = NULL;
    Py_XDECREF(var_BLUE_RADIOUS_Y);
    var_BLUE_RADIOUS_Y = NULL;
    Py_XDECREF(var_minAvg);
    var_minAvg = NULL;
    Py_XDECREF(var_minAll);
    var_minAll = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_AVG_RED);
    var_AVG_RED = NULL;
    Py_XDECREF(var_AVG_BLUE);
    var_AVG_BLUE = NULL;
    Py_XDECREF(var_mag_sum_red);
    var_mag_sum_red = NULL;
    Py_XDECREF(var_mag_sum_blue);
    var_mag_sum_blue = NULL;
    Py_XDECREF(var_D);
    var_D = NULL;
    Py_XDECREF(var_grid_cell);
    var_grid_cell = NULL;
    Py_XDECREF(var_mag);
    var_mag = NULL;
    Py_XDECREF(var_phase);
    var_phase = NULL;
    Py_XDECREF(var_cx);
    var_cx = NULL;
    Py_XDECREF(var_cy);
    var_cy = NULL;
    Py_XDECREF(var_red);
    var_red = NULL;
    Py_XDECREF(var_coord_red);
    var_coord_red = NULL;
    Py_XDECREF(var_blue);
    var_blue = NULL;
    Py_XDECREF(var_coord_blue);
    var_coord_blue = NULL;
    Py_XDECREF(var_extract_factor);
    var_extract_factor = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_grid_cell_num);
    var_grid_cell_num = NULL;
    Py_XDECREF(var_sip);
    var_sip = NULL;
    Py_XDECREF(var_avg);
    var_avg = NULL;
    Py_XDECREF(var_M);
    var_M = NULL;
    Py_XDECREF(var_N);
    var_N = NULL;
    Py_XDECREF(var_channel_array);
    var_channel_array = NULL;
    Py_XDECREF(var_grid_size_w);
    var_grid_size_w = NULL;
    Py_XDECREF(var_grid_size_h);
    var_grid_size_h = NULL;
    Py_XDECREF(var_RED_WIDTH);
    var_RED_WIDTH = NULL;
    Py_XDECREF(var_BLUE_WIDTH);
    var_BLUE_WIDTH = NULL;
    Py_XDECREF(var_RED_RADIOUS_X);
    var_RED_RADIOUS_X = NULL;
    Py_XDECREF(var_RED_RADIOUS_Y);
    var_RED_RADIOUS_Y = NULL;
    Py_XDECREF(var_BLUE_RADIOUS_X);
    var_BLUE_RADIOUS_X = NULL;
    Py_XDECREF(var_BLUE_RADIOUS_Y);
    var_BLUE_RADIOUS_Y = NULL;
    Py_XDECREF(var_minAvg);
    var_minAvg = NULL;
    Py_XDECREF(var_minAll);
    var_minAll = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_AVG_RED);
    var_AVG_RED = NULL;
    Py_XDECREF(var_AVG_BLUE);
    var_AVG_BLUE = NULL;
    Py_XDECREF(var_mag_sum_red);
    var_mag_sum_red = NULL;
    Py_XDECREF(var_mag_sum_blue);
    var_mag_sum_blue = NULL;
    Py_XDECREF(var_D);
    var_D = NULL;
    Py_XDECREF(var_grid_cell);
    var_grid_cell = NULL;
    Py_XDECREF(var_mag);
    var_mag = NULL;
    Py_XDECREF(var_phase);
    var_phase = NULL;
    Py_XDECREF(var_cx);
    var_cx = NULL;
    Py_XDECREF(var_cy);
    var_cy = NULL;
    Py_XDECREF(var_red);
    var_red = NULL;
    Py_XDECREF(var_coord_red);
    var_coord_red = NULL;
    Py_XDECREF(var_blue);
    var_blue = NULL;
    Py_XDECREF(var_coord_blue);
    var_coord_blue = NULL;
    Py_XDECREF(var_extract_factor);
    var_extract_factor = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_channel);
    Py_DECREF(par_channel);
    CHECK_OBJECT(par_SIZE);
    Py_DECREF(par_SIZE);
    CHECK_OBJECT(par_K);
    Py_DECREF(par_K);
    CHECK_OBJECT(par_PR);
    Py_DECREF(par_PR);
    CHECK_OBJECT(par_PB);
    Py_DECREF(par_PB);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_channel);
    Py_DECREF(par_channel);
    CHECK_OBJECT(par_SIZE);
    Py_DECREF(par_SIZE);
    CHECK_OBJECT(par_K);
    Py_DECREF(par_K);
    CHECK_OBJECT(par_PR);
    Py_DECREF(par_PR);
    CHECK_OBJECT(par_PB);
    Py_DECREF(par_PB);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        mod_consts[91],
#endif
        codeobj_46bdf69ee99fe28bd419e60a5a6c106d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$extract_sip,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__2_openImage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_algorithms$w_algorithms$extract_sip$$$function__2_openImage,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_3eb27f85a4e6ffef644aecf6d9250fb9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$extract_sip,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__3_getFFTTransform() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_algorithms$w_algorithms$extract_sip$$$function__3_getFFTTransform,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[94],
#endif
        codeobj_dd3b0ea2038eeaa3d3622a53ed01de80,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$extract_sip,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__4_getIFFTTransform() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_algorithms$w_algorithms$extract_sip$$$function__4_getIFFTTransform,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_ece88bf49f221ab3865c97991e67de21,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$extract_sip,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__5_showImage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_algorithms$w_algorithms$extract_sip$$$function__5_showImage,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_6fd29e63e06dba621f041656532de4ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$extract_sip,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__6_getSip() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_algorithms$w_algorithms$extract_sip$$$function__6_getSip,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[100],
#endif
        codeobj_81dcae2f904f3c7ae924b1db977f3cc6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$extract_sip,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__7_extractPermutationFromChannel() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_algorithms$w_algorithms$extract_sip$$$function__7_extractPermutationFromChannel,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_867b81cbb5af906ff5ba9dcb9b543afa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$extract_sip,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_algorithms$w_algorithms$extract_sip[] = {
    NULL,
    impl_algorithms$w_algorithms$extract_sip$$$function__2_openImage,
    impl_algorithms$w_algorithms$extract_sip$$$function__3_getFFTTransform,
    impl_algorithms$w_algorithms$extract_sip$$$function__4_getIFFTTransform,
    impl_algorithms$w_algorithms$extract_sip$$$function__5_showImage,
    impl_algorithms$w_algorithms$extract_sip$$$function__6_getSip,
    impl_algorithms$w_algorithms$extract_sip$$$function__7_extractPermutationFromChannel,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_algorithms$w_algorithms$extract_sip;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_algorithms$w_algorithms$extract_sip) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_algorithms$w_algorithms$extract_sip[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_algorithms$w_algorithms$extract_sip,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_algorithms$w_algorithms$extract_sip(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("algorithms.w_algorithms.extract_sip");

    // Store the module for future use.
    module_algorithms$w_algorithms$extract_sip = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("algorithms.w_algorithms.extract_sip: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("algorithms.w_algorithms.extract_sip: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initalgorithms$w_algorithms$extract_sip\n");

    moduledict_algorithms$w_algorithms$extract_sip = MODULE_DICT(module_algorithms$w_algorithms$extract_sip);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_algorithms$w_algorithms$extract_sip,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_algorithms$w_algorithms$extract_sip,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[112]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_algorithms$w_algorithms$extract_sip,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_algorithms$w_algorithms$extract_sip,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_algorithms$w_algorithms$extract_sip,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_algorithms$w_algorithms$extract_sip);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_algorithms$w_algorithms$extract_sip);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_b6103d70253fe8a202d25d74b8519a5b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_algorithms$w_algorithms$extract_sip$$$class__1_ExtractPermutation_12 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_2);
    }
    frame_b6103d70253fe8a202d25d74b8519a5b = MAKE_MODULE_FRAME(codeobj_b6103d70253fe8a202d25d74b8519a5b, module_algorithms$w_algorithms$extract_sip);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b6103d70253fe8a202d25d74b8519a5b);
    assert(Py_REFCNT(frame_b6103d70253fe8a202d25d74b8519a5b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[66], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[67], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[17];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_algorithms$w_algorithms$extract_sip;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[33];
        frame_b6103d70253fe8a202d25d74b8519a5b->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[69];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_algorithms$w_algorithms$extract_sip;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[33];
        frame_b6103d70253fe8a202d25d74b8519a5b->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_algorithms$w_algorithms$extract_sip,
                mod_consts[70],
                mod_consts[33]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[70]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[72];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_algorithms$w_algorithms$extract_sip;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[33];
        frame_b6103d70253fe8a202d25d74b8519a5b->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[73];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_algorithms$w_algorithms$extract_sip;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[74];
        tmp_level_value_4 = mod_consts[33];
        frame_b6103d70253fe8a202d25d74b8519a5b->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_algorithms$w_algorithms$extract_sip,
                mod_consts[75],
                mod_consts[33]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[75]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[76];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_algorithms$w_algorithms$extract_sip;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[77];
        tmp_level_value_5 = mod_consts[33];
        frame_b6103d70253fe8a202d25d74b8519a5b->m_frame.f_lineno = 5;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_algorithms$w_algorithms$extract_sip,
                mod_consts[47],
                mod_consts[33]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[47]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[34];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_algorithms$w_algorithms$extract_sip;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[78];
        tmp_level_value_6 = mod_consts[33];
        frame_b6103d70253fe8a202d25d74b8519a5b->m_frame.f_lineno = 6;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        assert(!(tmp_import_name_from_4 == NULL));
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_algorithms$w_algorithms$extract_sip,
                mod_consts[79],
                mod_consts[33]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[79]);
        }

        Py_DECREF(tmp_import_name_from_4);
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[80];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_algorithms$w_algorithms$extract_sip;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[81];
        tmp_level_value_7 = mod_consts[33];
        frame_b6103d70253fe8a202d25d74b8519a5b->m_frame.f_lineno = 7;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_algorithms$w_algorithms$extract_sip,
                mod_consts[0],
                mod_consts[33]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[82];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_algorithms$w_algorithms$extract_sip;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = Py_None;
        tmp_level_value_8 = mod_consts[33];
        frame_b6103d70253fe8a202d25d74b8519a5b->m_frame.f_lineno = 8;
        tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        assert(!(tmp_assign_source_11 == NULL));
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[84];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_algorithms$w_algorithms$extract_sip;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = Py_None;
        tmp_level_value_9 = mod_consts[33];
        frame_b6103d70253fe8a202d25d74b8519a5b->m_frame.f_lineno = 9;
        tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[85];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_algorithms$w_algorithms$extract_sip;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = Py_None;
        tmp_level_value_10 = mod_consts[33];
        frame_b6103d70253fe8a202d25d74b8519a5b->m_frame.f_lineno = 9;
        tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[34];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_algorithms$w_algorithms$extract_sip;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = Py_None;
        tmp_level_value_11 = mod_consts[33];
        frame_b6103d70253fe8a202d25d74b8519a5b->m_frame.f_lineno = 10;
        tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        assert(!(tmp_assign_source_14 == NULL));
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_algorithms$w_algorithms$extract_sip$$$class__1_ExtractPermutation_12 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[86];
        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$extract_sip$$$class__1_ExtractPermutation_12, mod_consts[87], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[88];
        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$extract_sip$$$class__1_ExtractPermutation_12, mod_consts[89], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__1___init__();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$extract_sip$$$class__1_ExtractPermutation_12, mod_consts[90], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__2_openImage();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$extract_sip$$$class__1_ExtractPermutation_12, mod_consts[92], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__3_getFFTTransform();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$extract_sip$$$class__1_ExtractPermutation_12, mod_consts[46], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__4_getIFFTTransform();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$extract_sip$$$class__1_ExtractPermutation_12, mod_consts[95], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__5_showImage();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$extract_sip$$$class__1_ExtractPermutation_12, mod_consts[97], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__6_getSip();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$extract_sip$$$class__1_ExtractPermutation_12, mod_consts[99], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$extract_sip$$$function__7_extractPermutationFromChannel();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$extract_sip$$$class__1_ExtractPermutation_12, mod_consts[32], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[88];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[102];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_algorithms$w_algorithms$extract_sip$$$class__1_ExtractPermutation_12;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_b6103d70253fe8a202d25d74b8519a5b->m_frame.f_lineno = 12;
            tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_17 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_algorithms$w_algorithms$extract_sip$$$class__1_ExtractPermutation_12);
        locals_algorithms$w_algorithms$extract_sip$$$class__1_ExtractPermutation_12 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_algorithms$w_algorithms$extract_sip$$$class__1_ExtractPermutation_12);
        locals_algorithms$w_algorithms$extract_sip$$$class__1_ExtractPermutation_12 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 12;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_17);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b6103d70253fe8a202d25d74b8519a5b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b6103d70253fe8a202d25d74b8519a5b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b6103d70253fe8a202d25d74b8519a5b, exception_lineno);
    }



    assertFrameObject(frame_b6103d70253fe8a202d25d74b8519a5b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("algorithms.w_algorithms.extract_sip", false);

    Py_INCREF(module_algorithms$w_algorithms$extract_sip);
    return module_algorithms$w_algorithms$extract_sip;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$extract_sip, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("algorithms$w_algorithms$extract_sip", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
