/* Generated code for Python module 'algorithms.w_algorithms.embed_key'
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

/* The "module_algorithms$w_algorithms$embed_key" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_algorithms$w_algorithms$embed_key;
PyDictObject *moduledict_algorithms$w_algorithms$embed_key;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[171];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[171];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("algorithms.w_algorithms.embed_key"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 171; i++) {
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
void checkModuleConstants_algorithms$w_algorithms$embed_key(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 171; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_555608920d52ed39c1c2494f96808acf;
static PyCodeObject *codeobj_7fdaebf25ffb28f57e44172ac0174745;
static PyCodeObject *codeobj_a7308baea8a14741a1bb4621253117c6;
static PyCodeObject *codeobj_87f2fcfdcdc493ad4f17a34c52f8f312;
static PyCodeObject *codeobj_94898da15be0f509e454e036b91ab6bb;
static PyCodeObject *codeobj_a987fa4d9997dcadadbb93bb2b384cb0;
static PyCodeObject *codeobj_8389cd781ee11ddef8f3a6b30fd911bf;
static PyCodeObject *codeobj_27e9bf25e8059d7b06b901237094bdd8;
static PyCodeObject *codeobj_bbe6640738de279ab330ba430a1933ee;
static PyCodeObject *codeobj_4309d1b0025efbe044730d17ba4523d6;
static PyCodeObject *codeobj_1914b1984249da02046105134a7676a2;
static PyCodeObject *codeobj_e0bd65c1df4b623782cef1b706ce0464;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[157]); CHECK_OBJECT(module_filename_obj);
    codeobj_555608920d52ed39c1c2494f96808acf = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[158], mod_consts[158], NULL, NULL, 0, 0, 0);
    codeobj_7fdaebf25ffb28f57e44172ac0174745 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[140], mod_consts[140], mod_consts[159], NULL, 1, 0, 0);
    codeobj_a7308baea8a14741a1bb4621253117c6 = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[160], NULL, 8, 0, 0);
    codeobj_87f2fcfdcdc493ad4f17a34c52f8f312 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[161], NULL, 2, 0, 0);
    codeobj_94898da15be0f509e454e036b91ab6bb = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[162], NULL, 3, 0, 0);
    codeobj_a987fa4d9997dcadadbb93bb2b384cb0 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[151], mod_consts[151], mod_consts[163], NULL, 10, 0, 0);
    codeobj_8389cd781ee11ddef8f3a6b30fd911bf = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[146], mod_consts[146], mod_consts[164], NULL, 2, 0, 0);
    codeobj_27e9bf25e8059d7b06b901237094bdd8 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[165], NULL, 6, 0, 0);
    codeobj_bbe6640738de279ab330ba430a1933ee = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[120], mod_consts[120], mod_consts[166], NULL, 8, 0, 0);
    codeobj_4309d1b0025efbe044730d17ba4523d6 = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[142], mod_consts[142], mod_consts[167], NULL, 2, 0, 0);
    codeobj_1914b1984249da02046105134a7676a2 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[148], mod_consts[148], mod_consts[168], NULL, 1, 0, 0);
    codeobj_e0bd65c1df4b623782cef1b706ce0464 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[169], NULL, 4, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__10_modifyMagnitude();


static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__11_embedPermutationToChannel();


static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__1___init__();


static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__2_openImage();


static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__3_getFFTTransform();


static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__4_getIFFTTransform();


static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__5_hash_block();


static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__6_showImage();


static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__7_sortCells();


static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__8_getWatermarkedImage();


static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__9_mergeCellsToImage();


// The module function definitions.
static PyObject *impl_algorithms$w_algorithms$embed_key$$$function__2_openImage(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *var_img = NULL;
    struct Nuitka_FrameObject *frame_4309d1b0025efbe044730d17ba4523d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4309d1b0025efbe044730d17ba4523d6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4309d1b0025efbe044730d17ba4523d6)) {
        Py_XDECREF(cache_frame_4309d1b0025efbe044730d17ba4523d6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4309d1b0025efbe044730d17ba4523d6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4309d1b0025efbe044730d17ba4523d6 = MAKE_FUNCTION_FRAME(tstate, codeobj_4309d1b0025efbe044730d17ba4523d6, module_algorithms$w_algorithms$embed_key, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4309d1b0025efbe044730d17ba4523d6->m_type_description == NULL);
    frame_4309d1b0025efbe044730d17ba4523d6 = cache_frame_4309d1b0025efbe044730d17ba4523d6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4309d1b0025efbe044730d17ba4523d6);
    assert(Py_REFCNT(frame_4309d1b0025efbe044730d17ba4523d6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_4309d1b0025efbe044730d17ba4523d6->m_frame.f_lineno = 17;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
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
        exception_tb = MAKE_TRACEBACK(frame_4309d1b0025efbe044730d17ba4523d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4309d1b0025efbe044730d17ba4523d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4309d1b0025efbe044730d17ba4523d6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4309d1b0025efbe044730d17ba4523d6,
        type_description_1,
        par_self,
        par_path,
        var_img
    );


    // Release cached frame if used for exception.
    if (frame_4309d1b0025efbe044730d17ba4523d6 == cache_frame_4309d1b0025efbe044730d17ba4523d6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4309d1b0025efbe044730d17ba4523d6);
        cache_frame_4309d1b0025efbe044730d17ba4523d6 = NULL;
    }

    assertFrameObject(frame_4309d1b0025efbe044730d17ba4523d6);

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


static PyObject *impl_algorithms$w_algorithms$embed_key$$$function__3_getFFTTransform(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
    struct Nuitka_FrameObject *frame_87f2fcfdcdc493ad4f17a34c52f8f312;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_87f2fcfdcdc493ad4f17a34c52f8f312 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_87f2fcfdcdc493ad4f17a34c52f8f312)) {
        Py_XDECREF(cache_frame_87f2fcfdcdc493ad4f17a34c52f8f312);

#if _DEBUG_REFCOUNTS
        if (cache_frame_87f2fcfdcdc493ad4f17a34c52f8f312 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_87f2fcfdcdc493ad4f17a34c52f8f312 = MAKE_FUNCTION_FRAME(tstate, codeobj_87f2fcfdcdc493ad4f17a34c52f8f312, module_algorithms$w_algorithms$embed_key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_87f2fcfdcdc493ad4f17a34c52f8f312->m_type_description == NULL);
    frame_87f2fcfdcdc493ad4f17a34c52f8f312 = cache_frame_87f2fcfdcdc493ad4f17a34c52f8f312;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_87f2fcfdcdc493ad4f17a34c52f8f312);
    assert(Py_REFCNT(frame_87f2fcfdcdc493ad4f17a34c52f8f312) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_image);
        tmp_tuple_element_1 = par_image;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[5]);
        frame_87f2fcfdcdc493ad4f17a34c52f8f312->m_frame.f_lineno = 21;
        tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
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
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dft);
        tmp_args_element_value_1 = var_dft;
        frame_87f2fcfdcdc493ad4f17a34c52f8f312->m_frame.f_lineno = 22;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[6], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
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
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fftShift);
        tmp_args_element_value_2 = var_fftShift;
        frame_87f2fcfdcdc493ad4f17a34c52f8f312->m_frame.f_lineno = 23;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[7], tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
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
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fftShift);
        tmp_args_element_value_3 = var_fftShift;
        frame_87f2fcfdcdc493ad4f17a34c52f8f312->m_frame.f_lineno = 24;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[8], tmp_args_element_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
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
        exception_tb = MAKE_TRACEBACK(frame_87f2fcfdcdc493ad4f17a34c52f8f312, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_87f2fcfdcdc493ad4f17a34c52f8f312->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_87f2fcfdcdc493ad4f17a34c52f8f312, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_87f2fcfdcdc493ad4f17a34c52f8f312,
        type_description_1,
        par_self,
        par_image,
        var_dft,
        var_fftShift,
        var_mag,
        var_phase
    );


    // Release cached frame if used for exception.
    if (frame_87f2fcfdcdc493ad4f17a34c52f8f312 == cache_frame_87f2fcfdcdc493ad4f17a34c52f8f312) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_87f2fcfdcdc493ad4f17a34c52f8f312);
        cache_frame_87f2fcfdcdc493ad4f17a34c52f8f312 = NULL;
    }

    assertFrameObject(frame_87f2fcfdcdc493ad4f17a34c52f8f312);

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


static PyObject *impl_algorithms$w_algorithms$embed_key$$$function__4_getIFFTTransform(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
    struct Nuitka_FrameObject *frame_94898da15be0f509e454e036b91ab6bb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_94898da15be0f509e454e036b91ab6bb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_94898da15be0f509e454e036b91ab6bb)) {
        Py_XDECREF(cache_frame_94898da15be0f509e454e036b91ab6bb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94898da15be0f509e454e036b91ab6bb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94898da15be0f509e454e036b91ab6bb = MAKE_FUNCTION_FRAME(tstate, codeobj_94898da15be0f509e454e036b91ab6bb, module_algorithms$w_algorithms$embed_key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_94898da15be0f509e454e036b91ab6bb->m_type_description == NULL);
    frame_94898da15be0f509e454e036b91ab6bb = cache_frame_94898da15be0f509e454e036b91ab6bb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_94898da15be0f509e454e036b91ab6bb);
    assert(Py_REFCNT(frame_94898da15be0f509e454e036b91ab6bb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_mag);
        tmp_mult_expr_left_1 = par_mag;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_phase);
        tmp_args_element_value_1 = par_phase;
        frame_94898da15be0f509e454e036b91ab6bb->m_frame.f_lineno = 28;
        tmp_mult_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[9], tmp_args_element_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
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
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_phase);
        tmp_args_element_value_2 = par_phase;
        frame_94898da15be0f509e454e036b91ab6bb->m_frame.f_lineno = 29;
        tmp_mult_expr_right_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[10], tmp_args_element_value_2);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
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

            exception_lineno = 30;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = (PyObject *)&PyComplex_Type;
        frame_94898da15be0f509e454e036b91ab6bb->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
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


            exception_lineno = 32;
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


            exception_lineno = 33;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[3]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_complex_output);
        tmp_args_element_value_5 = var_complex_output;
        frame_94898da15be0f509e454e036b91ab6bb->m_frame.f_lineno = 34;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[15], tmp_args_element_value_5);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
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
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[3]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[16]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_back_ishift);
        tmp_tuple_element_1 = var_back_ishift;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[5]);
        frame_94898da15be0f509e454e036b91ab6bb->m_frame.f_lineno = 35;
        tmp_assign_source_5 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
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


            exception_lineno = 36;
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
        exception_tb = MAKE_TRACEBACK(frame_94898da15be0f509e454e036b91ab6bb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94898da15be0f509e454e036b91ab6bb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94898da15be0f509e454e036b91ab6bb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94898da15be0f509e454e036b91ab6bb,
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
    if (frame_94898da15be0f509e454e036b91ab6bb == cache_frame_94898da15be0f509e454e036b91ab6bb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_94898da15be0f509e454e036b91ab6bb);
        cache_frame_94898da15be0f509e454e036b91ab6bb = NULL;
    }

    assertFrameObject(frame_94898da15be0f509e454e036b91ab6bb);

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


static PyObject *impl_algorithms$w_algorithms$embed_key$$$function__5_hash_block(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_b = python_pars[1];
    PyObject *var_h = NULL;
    PyObject *var_hashb = NULL;
    struct Nuitka_FrameObject *frame_8389cd781ee11ddef8f3a6b30fd911bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8389cd781ee11ddef8f3a6b30fd911bf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8389cd781ee11ddef8f3a6b30fd911bf)) {
        Py_XDECREF(cache_frame_8389cd781ee11ddef8f3a6b30fd911bf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8389cd781ee11ddef8f3a6b30fd911bf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8389cd781ee11ddef8f3a6b30fd911bf = MAKE_FUNCTION_FRAME(tstate, codeobj_8389cd781ee11ddef8f3a6b30fd911bf, module_algorithms$w_algorithms$embed_key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8389cd781ee11ddef8f3a6b30fd911bf->m_type_description == NULL);
    frame_8389cd781ee11ddef8f3a6b30fd911bf = cache_frame_8389cd781ee11ddef8f3a6b30fd911bf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8389cd781ee11ddef8f3a6b30fd911bf);
    assert(Py_REFCNT(frame_8389cd781ee11ddef8f3a6b30fd911bf) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_8389cd781ee11ddef8f3a6b30fd911bf->m_frame.f_lineno = 40;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[18],
            PyTuple_GET_ITEM(mod_consts[19], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_h == NULL);
        var_h = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_h);
        tmp_expression_value_1 = var_h;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_b);
        tmp_called_instance_2 = par_b;
        frame_8389cd781ee11ddef8f3a6b30fd911bf->m_frame.f_lineno = 41;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[21]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_8389cd781ee11ddef8f3a6b30fd911bf->m_frame.f_lineno = 41;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_h);
        tmp_called_instance_3 = var_h;
        frame_8389cd781ee11ddef8f3a6b30fd911bf->m_frame.f_lineno = 42;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[22]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_hashb == NULL);
        var_hashb = tmp_assign_source_2;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8389cd781ee11ddef8f3a6b30fd911bf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8389cd781ee11ddef8f3a6b30fd911bf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8389cd781ee11ddef8f3a6b30fd911bf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8389cd781ee11ddef8f3a6b30fd911bf,
        type_description_1,
        par_self,
        par_b,
        var_h,
        var_hashb
    );


    // Release cached frame if used for exception.
    if (frame_8389cd781ee11ddef8f3a6b30fd911bf == cache_frame_8389cd781ee11ddef8f3a6b30fd911bf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8389cd781ee11ddef8f3a6b30fd911bf);
        cache_frame_8389cd781ee11ddef8f3a6b30fd911bf = NULL;
    }

    assertFrameObject(frame_8389cd781ee11ddef8f3a6b30fd911bf);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_hashb);
    tmp_return_value = var_hashb;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_h);
    Py_DECREF(var_h);
    var_h = NULL;
    CHECK_OBJECT(var_hashb);
    Py_DECREF(var_hashb);
    var_hashb = NULL;
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

    Py_XDECREF(var_h);
    var_h = NULL;
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
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_algorithms$w_algorithms$embed_key$$$function__6_showImage(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
    struct Nuitka_FrameObject *frame_1914b1984249da02046105134a7676a2;
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
    static struct Nuitka_FrameObject *cache_frame_1914b1984249da02046105134a7676a2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1914b1984249da02046105134a7676a2)) {
        Py_XDECREF(cache_frame_1914b1984249da02046105134a7676a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1914b1984249da02046105134a7676a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1914b1984249da02046105134a7676a2 = MAKE_FUNCTION_FRAME(tstate, codeobj_1914b1984249da02046105134a7676a2, module_algorithms$w_algorithms$embed_key, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1914b1984249da02046105134a7676a2->m_type_description == NULL);
    frame_1914b1984249da02046105134a7676a2 = cache_frame_1914b1984249da02046105134a7676a2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1914b1984249da02046105134a7676a2);
    assert(Py_REFCNT(frame_1914b1984249da02046105134a7676a2) == 2);

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


            exception_lineno = 46;
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
                exception_lineno = 46;
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
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = mod_consts[25];
        CHECK_OBJECT(var_image);
        tmp_args_element_value_2 = var_image;
        frame_1914b1984249da02046105134a7676a2->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_1914b1984249da02046105134a7676a2->m_frame.f_lineno = 48;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[26],
            PyTuple_GET_ITEM(mod_consts[27], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 46;
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
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1914b1984249da02046105134a7676a2->m_frame.f_lineno = 49;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[26],
            PyTuple_GET_ITEM(mod_consts[27], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
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
        exception_tb = MAKE_TRACEBACK(frame_1914b1984249da02046105134a7676a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1914b1984249da02046105134a7676a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1914b1984249da02046105134a7676a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1914b1984249da02046105134a7676a2,
        type_description_1,
        par_self,
        par_image_args,
        var_image
    );


    // Release cached frame if used for exception.
    if (frame_1914b1984249da02046105134a7676a2 == cache_frame_1914b1984249da02046105134a7676a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1914b1984249da02046105134a7676a2);
        cache_frame_1914b1984249da02046105134a7676a2 = NULL;
    }

    assertFrameObject(frame_1914b1984249da02046105134a7676a2);

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


static PyObject *impl_algorithms$w_algorithms$embed_key$$$function__7_sortCells(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_mc = python_pars[1];
    PyObject *par_nonm = python_pars[2];
    PyObject *par_sip_cells = python_pars[3];
    PyObject *var_cell_list = NULL;
    PyObject *var_k = NULL;
    PyObject *var_f = NULL;
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_e0bd65c1df4b623782cef1b706ce0464;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e0bd65c1df4b623782cef1b706ce0464 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_cell_list == NULL);
        var_cell_list = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[28];
        assert(var_k == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_k = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[28];
        assert(var_f == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_f = tmp_assign_source_3;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_e0bd65c1df4b623782cef1b706ce0464)) {
        Py_XDECREF(cache_frame_e0bd65c1df4b623782cef1b706ce0464);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e0bd65c1df4b623782cef1b706ce0464 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e0bd65c1df4b623782cef1b706ce0464 = MAKE_FUNCTION_FRAME(tstate, codeobj_e0bd65c1df4b623782cef1b706ce0464, module_algorithms$w_algorithms$embed_key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e0bd65c1df4b623782cef1b706ce0464->m_type_description == NULL);
    frame_e0bd65c1df4b623782cef1b706ce0464 = cache_frame_e0bd65c1df4b623782cef1b706ce0464;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e0bd65c1df4b623782cef1b706ce0464);
    assert(Py_REFCNT(frame_e0bd65c1df4b623782cef1b706ce0464) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_sip_cells);
        tmp_len_arg_1 = par_sip_cells;
        tmp_xrange_low_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_xrange_low_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 56;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_len_arg_2;
        if (par_sip_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 57;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_len_arg_2 = par_sip_cells;
        tmp_xrange_low_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_xrange_low_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_2 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_2);
        Py_DECREF(tmp_xrange_low_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 57;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_9 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_9;
            Py_INCREF(var_j);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_3;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        if (var_k == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_left_1 = var_k;
        if (par_sip_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }

        tmp_len_arg_3 = par_sip_cells;
        tmp_cmp_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_3);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        tmp_and_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (par_sip_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_2 = par_sip_cells;
        if (var_k == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_1 = var_k;
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_2 = mod_consts[28];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_i);
        tmp_cmp_expr_right_2 = var_i;
        tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        if (par_sip_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_4 = par_sip_cells;
        if (var_k == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_3 = var_k;
        tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_4 = mod_consts[31];
        tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_4, 1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_j);
        tmp_cmp_expr_right_3 = var_j;
        tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_5;
        if (var_cell_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 59;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_5 = var_cell_list;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_mc);
        tmp_expression_value_6 = par_mc;
        if (var_k == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 59;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_5 = var_k;
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_5);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 59;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        frame_e0bd65c1df4b623782cef1b706ce0464->m_frame.f_lineno = 59;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_k == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 60;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }

        tmp_iadd_expr_left_1 = var_k;
        tmp_iadd_expr_right_1 = mod_consts[31];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_10 = tmp_iadd_expr_left_1;
        var_k = tmp_assign_source_10;

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_6;
        if (var_cell_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 62;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_7 = var_cell_list;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[33]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_nonm);
        tmp_expression_value_8 = par_nonm;
        if (var_f == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 62;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_6 = var_f;
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_6);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 62;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        frame_e0bd65c1df4b623782cef1b706ce0464->m_frame.f_lineno = 62;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        if (var_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 63;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }

        tmp_iadd_expr_left_2 = var_f;
        tmp_iadd_expr_right_2 = mod_consts[31];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_11 = tmp_iadd_expr_left_2;
        var_f = tmp_assign_source_11;

    }
    branch_end_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 57;
        type_description_1 = "ooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 56;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_cell_list == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 64;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_cell_list;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e0bd65c1df4b623782cef1b706ce0464, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e0bd65c1df4b623782cef1b706ce0464->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e0bd65c1df4b623782cef1b706ce0464, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e0bd65c1df4b623782cef1b706ce0464,
        type_description_1,
        par_self,
        par_mc,
        par_nonm,
        par_sip_cells,
        var_cell_list,
        var_k,
        var_f,
        var_i,
        var_j
    );


    // Release cached frame if used for exception.
    if (frame_e0bd65c1df4b623782cef1b706ce0464 == cache_frame_e0bd65c1df4b623782cef1b706ce0464) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e0bd65c1df4b623782cef1b706ce0464);
        cache_frame_e0bd65c1df4b623782cef1b706ce0464 = NULL;
    }

    assertFrameObject(frame_e0bd65c1df4b623782cef1b706ce0464);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_cell_list);
    var_cell_list = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_cell_list);
    var_cell_list = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_mc);
    Py_DECREF(par_mc);
    CHECK_OBJECT(par_nonm);
    Py_DECREF(par_nonm);
    CHECK_OBJECT(par_sip_cells);
    Py_DECREF(par_sip_cells);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_mc);
    Py_DECREF(par_mc);
    CHECK_OBJECT(par_nonm);
    Py_DECREF(par_nonm);
    CHECK_OBJECT(par_sip_cells);
    Py_DECREF(par_sip_cells);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_algorithms$w_algorithms$embed_key$$$function__8_getWatermarkedImage(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_im = python_pars[1];
    PyObject *par_sip = python_pars[2];
    PyObject *par_SIZE = python_pars[3];
    PyObject *par_K = python_pars[4];
    PyObject *par_name = python_pars[5];
    PyObject *par_copt = python_pars[6];
    PyObject *par_PR = python_pars[7];
    PyObject *par_PB = python_pars[8];
    PyObject *par_im_format = python_pars[9];
    PyObject *var_im1 = NULL;
    PyObject *var_M = NULL;
    PyObject *var_N = NULL;
    PyObject *var_outim_w = NULL;
    PyObject *var_outim_h = NULL;
    PyObject *var_new_w = NULL;
    PyObject *var_new_h = NULL;
    PyObject *var_r = NULL;
    PyObject *var_g = NULL;
    PyObject *var_b = NULL;
    PyObject *var_r_img = NULL;
    PyObject *var_k = NULL;
    PyObject *var_g_img = NULL;
    PyObject *var_b_img = NULL;
    PyObject *var_red = NULL;
    PyObject *var_green = NULL;
    PyObject *var_blue = NULL;
    PyObject *var_rgb = NULL;
    PyObject *var_s = NULL;
    PyObject *var_a = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
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
    PyObject *tmp_tuple_unpack_6__element_3 = NULL;
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
    struct Nuitka_FrameObject *frame_a987fa4d9997dcadadbb93bb2b384cb0;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
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
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_a987fa4d9997dcadadbb93bb2b384cb0 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a987fa4d9997dcadadbb93bb2b384cb0)) {
        Py_XDECREF(cache_frame_a987fa4d9997dcadadbb93bb2b384cb0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a987fa4d9997dcadadbb93bb2b384cb0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a987fa4d9997dcadadbb93bb2b384cb0 = MAKE_FUNCTION_FRAME(tstate, codeobj_a987fa4d9997dcadadbb93bb2b384cb0, module_algorithms$w_algorithms$embed_key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a987fa4d9997dcadadbb93bb2b384cb0->m_type_description == NULL);
    frame_a987fa4d9997dcadadbb93bb2b384cb0 = cache_frame_a987fa4d9997dcadadbb93bb2b384cb0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a987fa4d9997dcadadbb93bb2b384cb0);
    assert(Py_REFCNT(frame_a987fa4d9997dcadadbb93bb2b384cb0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_im);
        tmp_args_element_value_1 = par_im;
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 68;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[35], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooooooooooooooo";
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
        CHECK_OBJECT(par_im);
        tmp_expression_value_1 = par_im;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[36]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooooooooooooooo";
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


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 69;
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


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 69;
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

                    type_description_1 = "oooooooooooooooooooooooooooooo";
                    exception_lineno = 69;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 69;
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


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[39]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_M);
        tmp_truediv_expr_left_1 = var_M;
        CHECK_OBJECT(par_SIZE);
        tmp_truediv_expr_right_1 = par_SIZE;
        tmp_args_element_value_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 72;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_outim_w == NULL);
        var_outim_w = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[39]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooooooooooooooo";
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

            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 73;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_outim_h == NULL);
        var_outim_h = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(var_outim_w);
        tmp_mult_expr_left_1 = var_outim_w;
        CHECK_OBJECT(par_SIZE);
        tmp_mult_expr_right_1 = par_SIZE;
        tmp_assign_source_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_w == NULL);
        var_new_w = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        CHECK_OBJECT(var_outim_h);
        tmp_mult_expr_left_2 = var_outim_h;
        CHECK_OBJECT(par_SIZE);
        tmp_mult_expr_right_2 = par_SIZE;
        tmp_assign_source_10 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_h == NULL);
        var_new_h = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_im_format);
        tmp_cmp_expr_left_2 = par_im_format;
        tmp_cmp_expr_right_2 = mod_consts[40];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_im);
        tmp_expression_value_4 = par_im;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[41]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 79;
        tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 3);
        if (tmp_assign_source_12 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 79;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 3);
        if (tmp_assign_source_13 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 79;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tstate, tmp_unpack_5, 2, 3);
        if (tmp_assign_source_14 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 79;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_14;
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

                    type_description_1 = "oooooooooooooooooooooooooooooo";
                    exception_lineno = 79;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[42];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 79;
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
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
        assert(var_r == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_r = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
        assert(var_g == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_g = tmp_assign_source_16;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_3;
        assert(var_b == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_b = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[43]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_im1);
        tmp_expression_value_6 = var_im1;
        tmp_subscript_value_1 = mod_consts[44];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 81;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[43]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_im1);
        tmp_expression_value_8 = var_im1;
        tmp_subscript_value_2 = mod_consts[45];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 82;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_g == NULL);
        var_g = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[43]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_im1);
        tmp_expression_value_10 = var_im1;
        tmp_subscript_value_3 = mod_consts[46];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_3);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 83;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 83;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_b == NULL);
        var_b = tmp_assign_source_20;
    }
    branch_end_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_r);
        tmp_args_element_value_7 = var_r;
        CHECK_OBJECT(par_sip);
        tmp_args_element_value_8 = par_sip;
        CHECK_OBJECT(par_SIZE);
        tmp_args_element_value_9 = par_SIZE;
        CHECK_OBJECT(par_K);
        tmp_args_element_value_10 = par_K;
        CHECK_OBJECT(par_copt);
        tmp_args_element_value_11 = par_copt;
        CHECK_OBJECT(par_PR);
        tmp_args_element_value_12 = par_PR;
        CHECK_OBJECT(par_PB);
        tmp_args_element_value_13 = par_PB;
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_iter_arg_3 = CALL_METHOD_WITH_ARGS7(
                tstate,
                tmp_called_instance_2,
                mod_consts[47],
                call_args
            );
        }

        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_21 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tstate, tmp_unpack_6, 0, 2);
        if (tmp_assign_source_22 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 86;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT(tstate, tmp_unpack_7, 1, 2);
        if (tmp_assign_source_23 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 86;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_23;
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

                    type_description_1 = "oooooooooooooooooooooooooooooo";
                    exception_lineno = 86;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 86;
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
        assert(var_r_img == NULL);
        Py_INCREF(tmp_assign_source_24);
        var_r_img = tmp_assign_source_24;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_25 = tmp_tuple_unpack_3__element_2;
        assert(var_k == NULL);
        Py_INCREF(tmp_assign_source_25);
        var_k = tmp_assign_source_25;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_g);
        tmp_args_element_value_14 = var_g;
        CHECK_OBJECT(par_sip);
        tmp_args_element_value_15 = par_sip;
        CHECK_OBJECT(par_SIZE);
        tmp_args_element_value_16 = par_SIZE;
        CHECK_OBJECT(par_K);
        tmp_args_element_value_17 = par_K;
        CHECK_OBJECT(par_copt);
        tmp_args_element_value_18 = par_copt;
        CHECK_OBJECT(par_PR);
        tmp_args_element_value_19 = par_PR;
        CHECK_OBJECT(par_PB);
        tmp_args_element_value_20 = par_PB;
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_iter_arg_4 = CALL_METHOD_WITH_ARGS7(
                tstate,
                tmp_called_instance_3,
                mod_consts[47],
                call_args
            );
        }

        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_26 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(tmp_tuple_unpack_4__source_iter == NULL);
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_27 = UNPACK_NEXT(tstate, tmp_unpack_8, 0, 2);
        if (tmp_assign_source_27 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 87;
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_4__element_1 == NULL);
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_28 = UNPACK_NEXT(tstate, tmp_unpack_9, 1, 2);
        if (tmp_assign_source_28 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 87;
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_4__element_2 == NULL);
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_28;
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

                    type_description_1 = "oooooooooooooooooooooooooooooo";
                    exception_lineno = 87;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 87;
            goto try_except_handler_9;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
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

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_29 = tmp_tuple_unpack_4__element_1;
        assert(var_g_img == NULL);
        Py_INCREF(tmp_assign_source_29);
        var_g_img = tmp_assign_source_29;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_30 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_k;
            assert(old != NULL);
            var_k = tmp_assign_source_30;
            Py_INCREF(var_k);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_b);
        tmp_args_element_value_21 = var_b;
        CHECK_OBJECT(par_sip);
        tmp_args_element_value_22 = par_sip;
        CHECK_OBJECT(par_SIZE);
        tmp_args_element_value_23 = par_SIZE;
        CHECK_OBJECT(par_K);
        tmp_args_element_value_24 = par_K;
        CHECK_OBJECT(par_copt);
        tmp_args_element_value_25 = par_copt;
        CHECK_OBJECT(par_PR);
        tmp_args_element_value_26 = par_PR;
        CHECK_OBJECT(par_PB);
        tmp_args_element_value_27 = par_PB;
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_iter_arg_5 = CALL_METHOD_WITH_ARGS7(
                tstate,
                tmp_called_instance_4,
                mod_consts[47],
                call_args
            );
        }

        if (tmp_iter_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_31 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        assert(tmp_tuple_unpack_5__source_iter == NULL);
        tmp_tuple_unpack_5__source_iter = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_32 = UNPACK_NEXT(tstate, tmp_unpack_10, 0, 2);
        if (tmp_assign_source_32 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 88;
            goto try_except_handler_11;
        }
        assert(tmp_tuple_unpack_5__element_1 == NULL);
        tmp_tuple_unpack_5__element_1 = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_33 = UNPACK_NEXT(tstate, tmp_unpack_11, 1, 2);
        if (tmp_assign_source_33 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 88;
            goto try_except_handler_11;
        }
        assert(tmp_tuple_unpack_5__element_2 == NULL);
        tmp_tuple_unpack_5__element_2 = tmp_assign_source_33;
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

                    type_description_1 = "oooooooooooooooooooooooooooooo";
                    exception_lineno = 88;
                    goto try_except_handler_11;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 88;
            goto try_except_handler_11;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_10;
    // End of try:
    try_end_9:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_34 = tmp_tuple_unpack_5__element_1;
        assert(var_b_img == NULL);
        Py_INCREF(tmp_assign_source_34);
        var_b_img = tmp_assign_source_34;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_35 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var_k;
            assert(old != NULL);
            var_k = tmp_assign_source_35;
            Py_INCREF(var_k);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_28;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_r_img);
        tmp_args_element_value_28 = var_r_img;
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 90;
        tmp_assign_source_36 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[43], tmp_args_element_value_28);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_red == NULL);
        var_red = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_29;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_g_img);
        tmp_args_element_value_29 = var_g_img;
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 91;
        tmp_assign_source_37 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts[43], tmp_args_element_value_29);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_green == NULL);
        var_green = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_30;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_b_img);
        tmp_args_element_value_30 = var_b_img;
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 92;
        tmp_assign_source_38 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[43], tmp_args_element_value_30);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blue == NULL);
        var_blue = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_tuple_element_1;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = mod_consts[49];
        CHECK_OBJECT(var_red);
        tmp_tuple_element_1 = var_red;
        tmp_args_element_value_32 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_element_value_32, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_green);
        tmp_tuple_element_1 = var_green;
        PyTuple_SET_ITEM0(tmp_args_element_value_32, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_blue);
        tmp_tuple_element_1 = var_blue;
        PyTuple_SET_ITEM0(tmp_args_element_value_32, 2, tmp_tuple_element_1);
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
            tmp_assign_source_39 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_8,
                mod_consts[48],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_32);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rgb == NULL);
        var_rgb = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[50]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rgb);
        tmp_args_element_value_33 = var_rgb;
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 95;
        tmp_kw_call_arg_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts[35], tmp_args_element_value_33);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_tuple_element_2 = var_N;
        tmp_kw_call_arg_value_1_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_1_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_M);
        tmp_tuple_element_2 = var_M;
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_1_1, 1, tmp_tuple_element_2);
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[51]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 95;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts[52]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rgb;
            assert(old != NULL);
            var_rgb = tmp_assign_source_40;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_34;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rgb);
        tmp_args_element_value_34 = var_rgb;
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 96;
        tmp_assign_source_41 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts[43], tmp_args_element_value_34);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rgb;
            assert(old != NULL);
            var_rgb = tmp_assign_source_41;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(var_rgb);
        tmp_expression_value_13 = var_rgb;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[53]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_3 = mod_consts[54];
        CHECK_OBJECT(par_name);
        tmp_add_expr_right_3 = par_name;
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[55];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_im_format);
        tmp_add_expr_right_1 = par_im_format;
        tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_3);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[56]);
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 97;
        tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    CHECK_OBJECT(var_rgb);
    tmp_return_value = var_rgb;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[39]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_M);
        tmp_truediv_expr_left_3 = var_M;
        CHECK_OBJECT(par_SIZE);
        tmp_truediv_expr_right_3 = par_SIZE;
        tmp_args_element_value_35 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        if (tmp_args_element_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 103;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_35);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_outim_w == NULL);
        var_outim_w = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[39]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_truediv_expr_left_4 = var_N;
        CHECK_OBJECT(par_SIZE);
        tmp_truediv_expr_right_4 = par_SIZE;
        tmp_args_element_value_36 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        if (tmp_args_element_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 104;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_outim_h == NULL);
        var_outim_h = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(var_im1);
        tmp_expression_value_16 = var_im1;
        tmp_assign_source_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[12]);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_s == NULL);
        var_s = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        CHECK_OBJECT(var_outim_w);
        tmp_mult_expr_left_3 = var_outim_w;
        CHECK_OBJECT(par_SIZE);
        tmp_mult_expr_right_3 = par_SIZE;
        tmp_assign_source_45 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_w == NULL);
        var_new_w = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        CHECK_OBJECT(var_outim_h);
        tmp_mult_expr_left_4 = var_outim_h;
        CHECK_OBJECT(par_SIZE);
        tmp_mult_expr_right_4 = par_SIZE;
        tmp_assign_source_46 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_h == NULL);
        var_new_h = tmp_assign_source_46;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_im_format);
        tmp_cmp_expr_left_3 = par_im_format;
        tmp_cmp_expr_right_3 = mod_consts[40];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_47;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(par_im);
        tmp_expression_value_17 = par_im;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[41]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 112;
        tmp_iter_arg_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_11);
        Py_DECREF(tmp_called_value_11);
        if (tmp_iter_arg_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_47 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(tmp_tuple_unpack_6__source_iter == NULL);
        tmp_tuple_unpack_6__source_iter = tmp_assign_source_47;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_48 = UNPACK_NEXT(tstate, tmp_unpack_12, 0, 3);
        if (tmp_assign_source_48 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 112;
            goto try_except_handler_13;
        }
        assert(tmp_tuple_unpack_6__element_1 == NULL);
        tmp_tuple_unpack_6__element_1 = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_49 = UNPACK_NEXT(tstate, tmp_unpack_13, 1, 3);
        if (tmp_assign_source_49 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 112;
            goto try_except_handler_13;
        }
        assert(tmp_tuple_unpack_6__element_2 == NULL);
        tmp_tuple_unpack_6__element_2 = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_50 = UNPACK_NEXT(tstate, tmp_unpack_14, 2, 3);
        if (tmp_assign_source_50 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 112;
            goto try_except_handler_13;
        }
        assert(tmp_tuple_unpack_6__element_3 == NULL);
        tmp_tuple_unpack_6__element_3 = tmp_assign_source_50;
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

                    type_description_1 = "oooooooooooooooooooooooooooooo";
                    exception_lineno = 112;
                    goto try_except_handler_13;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[42];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 112;
            goto try_except_handler_13;
        }
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    try_end_11:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_3);
    tmp_tuple_unpack_6__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    {
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
        tmp_assign_source_51 = tmp_tuple_unpack_6__element_1;
        assert(var_r == NULL);
        Py_INCREF(tmp_assign_source_51);
        var_r = tmp_assign_source_51;
    }
    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
        tmp_assign_source_52 = tmp_tuple_unpack_6__element_2;
        assert(var_g == NULL);
        Py_INCREF(tmp_assign_source_52);
        var_g = tmp_assign_source_52;
    }
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;

    {
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_3);
        tmp_assign_source_53 = tmp_tuple_unpack_6__element_3;
        assert(var_b == NULL);
        Py_INCREF(tmp_assign_source_53);
        var_b = tmp_assign_source_53;
    }
    Py_XDECREF(tmp_tuple_unpack_6__element_3);
    tmp_tuple_unpack_6__element_3 = NULL;

    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_s);
        tmp_expression_value_18 = var_s;
        tmp_subscript_value_4 = mod_consts[57];
        tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_4, 2);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[58];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_5;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[43]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_im1);
        tmp_expression_value_20 = var_im1;
        tmp_subscript_value_5 = mod_consts[44];
        tmp_args_element_value_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_5);
        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 115;
        tmp_assign_source_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_37);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_6;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[43]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_im1);
        tmp_expression_value_22 = var_im1;
        tmp_subscript_value_6 = mod_consts[45];
        tmp_args_element_value_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_6);
        if (tmp_args_element_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 116;
        tmp_assign_source_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_g == NULL);
        var_g = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_7;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[43]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_im1);
        tmp_expression_value_24 = var_im1;
        tmp_subscript_value_7 = mod_consts[46];
        tmp_args_element_value_39 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_7);
        if (tmp_args_element_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 117;
        tmp_assign_source_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_39);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_b == NULL);
        var_b = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_8;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[43]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_im1);
        tmp_expression_value_26 = var_im1;
        tmp_subscript_value_8 = mod_consts[59];
        tmp_args_element_value_40 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_8);
        if (tmp_args_element_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 118;
        tmp_assign_source_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_a == NULL);
        var_a = tmp_assign_source_57;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_9;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[43]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_im1);
        tmp_expression_value_28 = var_im1;
        tmp_subscript_value_9 = mod_consts[44];
        tmp_args_element_value_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_9);
        if (tmp_args_element_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 120;
        tmp_assign_source_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_41);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_10;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[43]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_im1);
        tmp_expression_value_30 = var_im1;
        tmp_subscript_value_10 = mod_consts[45];
        tmp_args_element_value_42 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_10);
        if (tmp_args_element_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 121;
        tmp_assign_source_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_42);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_g == NULL);
        var_g = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_11;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[43]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_im1);
        tmp_expression_value_32 = var_im1;
        tmp_subscript_value_11 = mod_consts[46];
        tmp_args_element_value_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_11);
        if (tmp_args_element_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 122;
        tmp_assign_source_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_43);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_b == NULL);
        var_b = tmp_assign_source_60;
    }
    branch_end_4:;
    branch_end_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_args_element_value_50;
        CHECK_OBJECT(par_self);
        tmp_called_instance_11 = par_self;
        CHECK_OBJECT(var_r);
        tmp_args_element_value_44 = var_r;
        CHECK_OBJECT(par_sip);
        tmp_args_element_value_45 = par_sip;
        CHECK_OBJECT(par_SIZE);
        tmp_args_element_value_46 = par_SIZE;
        CHECK_OBJECT(par_K);
        tmp_args_element_value_47 = par_K;
        CHECK_OBJECT(par_copt);
        tmp_args_element_value_48 = par_copt;
        CHECK_OBJECT(par_PR);
        tmp_args_element_value_49 = par_PR;
        CHECK_OBJECT(par_PB);
        tmp_args_element_value_50 = par_PB;
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49, tmp_args_element_value_50};
            tmp_iter_arg_7 = CALL_METHOD_WITH_ARGS7(
                tstate,
                tmp_called_instance_11,
                mod_consts[47],
                call_args
            );
        }

        if (tmp_iter_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_61 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        assert(tmp_tuple_unpack_7__source_iter == NULL);
        tmp_tuple_unpack_7__source_iter = tmp_assign_source_61;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_15 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_62 = UNPACK_NEXT(tstate, tmp_unpack_15, 0, 2);
        if (tmp_assign_source_62 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 124;
            goto try_except_handler_15;
        }
        assert(tmp_tuple_unpack_7__element_1 == NULL);
        tmp_tuple_unpack_7__element_1 = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_16 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_63 = UNPACK_NEXT(tstate, tmp_unpack_16, 1, 2);
        if (tmp_assign_source_63 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 124;
            goto try_except_handler_15;
        }
        assert(tmp_tuple_unpack_7__element_2 == NULL);
        tmp_tuple_unpack_7__element_2 = tmp_assign_source_63;
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

                    type_description_1 = "oooooooooooooooooooooooooooooo";
                    exception_lineno = 124;
                    goto try_except_handler_15;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 124;
            goto try_except_handler_15;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_14;
    // End of try:
    try_end_13:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_assign_source_64 = tmp_tuple_unpack_7__element_1;
        assert(var_r_img == NULL);
        Py_INCREF(tmp_assign_source_64);
        var_r_img = tmp_assign_source_64;
    }
    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_65;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
        tmp_assign_source_65 = tmp_tuple_unpack_7__element_2;
        assert(var_k == NULL);
        Py_INCREF(tmp_assign_source_65);
        var_k = tmp_assign_source_65;
    }
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_args_element_value_57;
        CHECK_OBJECT(par_self);
        tmp_called_instance_12 = par_self;
        CHECK_OBJECT(var_g);
        tmp_args_element_value_51 = var_g;
        CHECK_OBJECT(par_sip);
        tmp_args_element_value_52 = par_sip;
        CHECK_OBJECT(par_SIZE);
        tmp_args_element_value_53 = par_SIZE;
        CHECK_OBJECT(par_K);
        tmp_args_element_value_54 = par_K;
        CHECK_OBJECT(par_copt);
        tmp_args_element_value_55 = par_copt;
        CHECK_OBJECT(par_PR);
        tmp_args_element_value_56 = par_PR;
        CHECK_OBJECT(par_PB);
        tmp_args_element_value_57 = par_PB;
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = {tmp_args_element_value_51, tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56, tmp_args_element_value_57};
            tmp_iter_arg_8 = CALL_METHOD_WITH_ARGS7(
                tstate,
                tmp_called_instance_12,
                mod_consts[47],
                call_args
            );
        }

        if (tmp_iter_arg_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_assign_source_66 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
        Py_DECREF(tmp_iter_arg_8);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        assert(tmp_tuple_unpack_8__source_iter == NULL);
        tmp_tuple_unpack_8__source_iter = tmp_assign_source_66;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_17 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_67 = UNPACK_NEXT(tstate, tmp_unpack_17, 0, 2);
        if (tmp_assign_source_67 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 125;
            goto try_except_handler_17;
        }
        assert(tmp_tuple_unpack_8__element_1 == NULL);
        tmp_tuple_unpack_8__element_1 = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_18 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_68 = UNPACK_NEXT(tstate, tmp_unpack_18, 1, 2);
        if (tmp_assign_source_68 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 125;
            goto try_except_handler_17;
        }
        assert(tmp_tuple_unpack_8__element_2 == NULL);
        tmp_tuple_unpack_8__element_2 = tmp_assign_source_68;
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

                    type_description_1 = "oooooooooooooooooooooooooooooo";
                    exception_lineno = 125;
                    goto try_except_handler_17;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 125;
            goto try_except_handler_17;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
    Py_DECREF(tmp_tuple_unpack_8__source_iter);
    tmp_tuple_unpack_8__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_16;
    // End of try:
    try_end_15:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_8__element_1);
    tmp_tuple_unpack_8__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_2);
    tmp_tuple_unpack_8__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
    Py_DECREF(tmp_tuple_unpack_8__source_iter);
    tmp_tuple_unpack_8__source_iter = NULL;
    {
        PyObject *tmp_assign_source_69;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_1);
        tmp_assign_source_69 = tmp_tuple_unpack_8__element_1;
        assert(var_g_img == NULL);
        Py_INCREF(tmp_assign_source_69);
        var_g_img = tmp_assign_source_69;
    }
    Py_XDECREF(tmp_tuple_unpack_8__element_1);
    tmp_tuple_unpack_8__element_1 = NULL;

    {
        PyObject *tmp_assign_source_70;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_2);
        tmp_assign_source_70 = tmp_tuple_unpack_8__element_2;
        {
            PyObject *old = var_k;
            assert(old != NULL);
            var_k = tmp_assign_source_70;
            Py_INCREF(var_k);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_2);
    tmp_tuple_unpack_8__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_args_element_value_64;
        CHECK_OBJECT(par_self);
        tmp_called_instance_13 = par_self;
        CHECK_OBJECT(var_b);
        tmp_args_element_value_58 = var_b;
        CHECK_OBJECT(par_sip);
        tmp_args_element_value_59 = par_sip;
        CHECK_OBJECT(par_SIZE);
        tmp_args_element_value_60 = par_SIZE;
        CHECK_OBJECT(par_K);
        tmp_args_element_value_61 = par_K;
        CHECK_OBJECT(par_copt);
        tmp_args_element_value_62 = par_copt;
        CHECK_OBJECT(par_PR);
        tmp_args_element_value_63 = par_PR;
        CHECK_OBJECT(par_PB);
        tmp_args_element_value_64 = par_PB;
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_64};
            tmp_iter_arg_9 = CALL_METHOD_WITH_ARGS7(
                tstate,
                tmp_called_instance_13,
                mod_consts[47],
                call_args
            );
        }

        if (tmp_iter_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_assign_source_71 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        assert(tmp_tuple_unpack_9__source_iter == NULL);
        tmp_tuple_unpack_9__source_iter = tmp_assign_source_71;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_19 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_72 = UNPACK_NEXT(tstate, tmp_unpack_19, 0, 2);
        if (tmp_assign_source_72 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 126;
            goto try_except_handler_19;
        }
        assert(tmp_tuple_unpack_9__element_1 == NULL);
        tmp_tuple_unpack_9__element_1 = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_20 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_73 = UNPACK_NEXT(tstate, tmp_unpack_20, 1, 2);
        if (tmp_assign_source_73 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 126;
            goto try_except_handler_19;
        }
        assert(tmp_tuple_unpack_9__element_2 == NULL);
        tmp_tuple_unpack_9__element_2 = tmp_assign_source_73;
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

                    type_description_1 = "oooooooooooooooooooooooooooooo";
                    exception_lineno = 126;
                    goto try_except_handler_19;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 126;
            goto try_except_handler_19;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
    Py_DECREF(tmp_tuple_unpack_9__source_iter);
    tmp_tuple_unpack_9__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_18;
    // End of try:
    try_end_17:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_9__element_1);
    tmp_tuple_unpack_9__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_9__element_2);
    tmp_tuple_unpack_9__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
    Py_DECREF(tmp_tuple_unpack_9__source_iter);
    tmp_tuple_unpack_9__source_iter = NULL;
    {
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_1);
        tmp_assign_source_74 = tmp_tuple_unpack_9__element_1;
        assert(var_b_img == NULL);
        Py_INCREF(tmp_assign_source_74);
        var_b_img = tmp_assign_source_74;
    }
    Py_XDECREF(tmp_tuple_unpack_9__element_1);
    tmp_tuple_unpack_9__element_1 = NULL;

    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_2);
        tmp_assign_source_75 = tmp_tuple_unpack_9__element_2;
        {
            PyObject *old = var_k;
            assert(old != NULL);
            var_k = tmp_assign_source_75;
            Py_INCREF(var_k);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_9__element_2);
    tmp_tuple_unpack_9__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_13;
        CHECK_OBJECT(var_r_img);
        tmp_expression_value_34 = var_r_img;
        tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[12]);
        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_12 = mod_consts[28];
        tmp_cmp_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_33, tmp_subscript_value_12, 0);
        Py_DECREF(tmp_expression_value_33);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_cmp_expr_right_5 = var_N;
        tmp_or_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_r_img);
        tmp_expression_value_36 = var_r_img;
        tmp_expression_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[12]);
        if (tmp_expression_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = mod_consts[31];
        tmp_cmp_expr_left_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_35, tmp_subscript_value_13, 1);
        Py_DECREF(tmp_expression_value_35);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_cmp_expr_right_6 = var_N;
        tmp_or_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_5 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_38;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[50]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_r_img);
        tmp_kw_call_arg_value_0_2 = var_r_img;
        CHECK_OBJECT(var_N);
        tmp_tuple_element_4 = var_N;
        tmp_kw_call_dict_value_0_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_2, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_N);
        tmp_tuple_element_4 = var_N;
        PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_2, 1, tmp_tuple_element_4);
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_kw_call_dict_value_0_2);

            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[60]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_kw_call_dict_value_0_2);

            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 128;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_19, args, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r_img;
            assert(old != NULL);
            var_r_img = tmp_assign_source_76;
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_15;
        CHECK_OBJECT(var_g_img);
        tmp_expression_value_40 = var_g_img;
        tmp_expression_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[12]);
        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = mod_consts[28];
        tmp_cmp_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_39, tmp_subscript_value_14, 0);
        Py_DECREF(tmp_expression_value_39);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_cmp_expr_right_7 = var_N;
        tmp_or_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(var_g_img);
        tmp_expression_value_42 = var_g_img;
        tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[12]);
        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = mod_consts[31];
        tmp_cmp_expr_left_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_41, tmp_subscript_value_15, 1);
        Py_DECREF(tmp_expression_value_41);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_cmp_expr_right_8 = var_N;
        tmp_or_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_6 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_expression_value_44;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[50]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_g_img);
        tmp_kw_call_arg_value_0_3 = var_g_img;
        CHECK_OBJECT(var_N);
        tmp_tuple_element_5 = var_N;
        tmp_kw_call_dict_value_0_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(var_N);
        tmp_tuple_element_5 = var_N;
        PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_3, 1, tmp_tuple_element_5);
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_kw_call_dict_value_0_3);

            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[60]);
        if (tmp_kw_call_dict_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_kw_call_dict_value_0_3);

            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 130;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_2};
            tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_20, args, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_1_2);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_g_img;
            assert(old != NULL);
            var_g_img = tmp_assign_source_77;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_subscript_value_17;
        CHECK_OBJECT(var_b_img);
        tmp_expression_value_46 = var_b_img;
        tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[12]);
        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_16 = mod_consts[28];
        tmp_cmp_expr_left_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_45, tmp_subscript_value_16, 0);
        Py_DECREF(tmp_expression_value_45);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_cmp_expr_right_9 = var_N;
        tmp_or_left_value_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        CHECK_OBJECT(var_b_img);
        tmp_expression_value_48 = var_b_img;
        tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[12]);
        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = mod_consts[31];
        tmp_cmp_expr_left_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_47, tmp_subscript_value_17, 1);
        Py_DECREF(tmp_expression_value_47);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_cmp_expr_right_10 = var_N;
        tmp_or_right_value_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_or_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_condition_result_7 = tmp_or_left_value_3;
        or_end_3:;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_expression_value_50;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[50]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_b_img);
        tmp_kw_call_arg_value_0_4 = var_b_img;
        CHECK_OBJECT(var_N);
        tmp_tuple_element_6 = var_N;
        tmp_kw_call_dict_value_0_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_4, 0, tmp_tuple_element_6);
        CHECK_OBJECT(var_N);
        tmp_tuple_element_6 = var_N;
        PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_4, 1, tmp_tuple_element_6);
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_dict_value_0_4);

            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[60]);
        if (tmp_kw_call_dict_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_dict_value_0_4);

            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 132;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_3};
            tmp_assign_source_78 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_21, args, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        Py_DECREF(tmp_kw_call_dict_value_1_3);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_b_img;
            assert(old != NULL);
            var_b_img = tmp_assign_source_78;
            Py_DECREF(old);
        }

    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_18;
        CHECK_OBJECT(var_s);
        tmp_expression_value_51 = var_s;
        tmp_subscript_value_18 = mod_consts[57];
        tmp_cmp_expr_left_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_51, tmp_subscript_value_18, 2);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_11 = mod_consts[58];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        if (var_r_img == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_1 = var_r_img;
        CHECK_OBJECT(var_im1);
        tmp_ass_subscribed_1 = var_im1;
        tmp_start_value_1 = mod_consts[28];
        CHECK_OBJECT(var_N);
        tmp_stop_value_1 = var_N;
        tmp_tuple_element_7 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        assert(!(tmp_tuple_element_7 == NULL));
        tmp_ass_subscript_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_start_value_2;
            PyObject *tmp_stop_value_2;
            PyObject *tmp_add_expr_left_4;
            PyObject *tmp_add_expr_right_4;
            PyTuple_SET_ITEM(tmp_ass_subscript_1, 0, tmp_tuple_element_7);
            CHECK_OBJECT(par_K);
            tmp_start_value_2 = par_K;
            CHECK_OBJECT(par_K);
            tmp_add_expr_left_4 = par_K;
            CHECK_OBJECT(var_N);
            tmp_add_expr_right_4 = var_N;
            tmp_stop_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
            if (tmp_stop_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_1 = "oooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_7 = MAKE_SLICE_OBJECT2(tmp_start_value_2, tmp_stop_value_2);
            Py_DECREF(tmp_stop_value_2);
            assert(!(tmp_tuple_element_7 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_1, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[28];
            PyTuple_SET_ITEM0(tmp_ass_subscript_1, 2, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_ass_subscript_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_start_value_3;
        PyObject *tmp_stop_value_3;
        if (var_g_img == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_2 = var_g_img;
        CHECK_OBJECT(var_im1);
        tmp_ass_subscribed_2 = var_im1;
        tmp_start_value_3 = mod_consts[28];
        CHECK_OBJECT(var_N);
        tmp_stop_value_3 = var_N;
        tmp_tuple_element_8 = MAKE_SLICE_OBJECT2(tmp_start_value_3, tmp_stop_value_3);
        assert(!(tmp_tuple_element_8 == NULL));
        tmp_ass_subscript_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_start_value_4;
            PyObject *tmp_stop_value_4;
            PyObject *tmp_add_expr_left_5;
            PyObject *tmp_add_expr_right_5;
            PyTuple_SET_ITEM(tmp_ass_subscript_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(par_K);
            tmp_start_value_4 = par_K;
            CHECK_OBJECT(par_K);
            tmp_add_expr_left_5 = par_K;
            CHECK_OBJECT(var_N);
            tmp_add_expr_right_5 = var_N;
            tmp_stop_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
            if (tmp_stop_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_1 = "oooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = MAKE_SLICE_OBJECT2(tmp_start_value_4, tmp_stop_value_4);
            Py_DECREF(tmp_stop_value_4);
            assert(!(tmp_tuple_element_8 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_2, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_ass_subscript_2, 2, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_ass_subscript_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_start_value_5;
        PyObject *tmp_stop_value_5;
        if (var_b_img == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_3 = var_b_img;
        CHECK_OBJECT(var_im1);
        tmp_ass_subscribed_3 = var_im1;
        tmp_start_value_5 = mod_consts[28];
        CHECK_OBJECT(var_N);
        tmp_stop_value_5 = var_N;
        tmp_tuple_element_9 = MAKE_SLICE_OBJECT2(tmp_start_value_5, tmp_stop_value_5);
        assert(!(tmp_tuple_element_9 == NULL));
        tmp_ass_subscript_3 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_start_value_6;
            PyObject *tmp_stop_value_6;
            PyObject *tmp_add_expr_left_6;
            PyObject *tmp_add_expr_right_6;
            PyTuple_SET_ITEM(tmp_ass_subscript_3, 0, tmp_tuple_element_9);
            CHECK_OBJECT(par_K);
            tmp_start_value_6 = par_K;
            CHECK_OBJECT(par_K);
            tmp_add_expr_left_6 = par_K;
            CHECK_OBJECT(var_N);
            tmp_add_expr_right_6 = var_N;
            tmp_stop_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
            if (tmp_stop_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_1 = "oooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_9 = MAKE_SLICE_OBJECT2(tmp_start_value_6, tmp_stop_value_6);
            Py_DECREF(tmp_stop_value_6);
            assert(!(tmp_tuple_element_9 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_3, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_ass_subscript_3, 2, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_ass_subscript_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscript_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        if (var_a == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_4 = var_a;
        CHECK_OBJECT(var_im1);
        tmp_ass_subscribed_4 = var_im1;
        tmp_ass_subscript_4 = mod_consts[59];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_start_value_7;
        PyObject *tmp_stop_value_7;
        if (var_r_img == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_5 = var_r_img;
        CHECK_OBJECT(var_im1);
        tmp_ass_subscribed_5 = var_im1;
        tmp_start_value_7 = mod_consts[28];
        CHECK_OBJECT(var_N);
        tmp_stop_value_7 = var_N;
        tmp_tuple_element_10 = MAKE_SLICE_OBJECT2(tmp_start_value_7, tmp_stop_value_7);
        assert(!(tmp_tuple_element_10 == NULL));
        tmp_ass_subscript_5 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_start_value_8;
            PyObject *tmp_stop_value_8;
            PyObject *tmp_add_expr_left_7;
            PyObject *tmp_add_expr_right_7;
            PyTuple_SET_ITEM(tmp_ass_subscript_5, 0, tmp_tuple_element_10);
            CHECK_OBJECT(par_K);
            tmp_start_value_8 = par_K;
            CHECK_OBJECT(par_K);
            tmp_add_expr_left_7 = par_K;
            CHECK_OBJECT(var_N);
            tmp_add_expr_right_7 = var_N;
            tmp_stop_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
            if (tmp_stop_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_tuple_element_10 = MAKE_SLICE_OBJECT2(tmp_start_value_8, tmp_stop_value_8);
            Py_DECREF(tmp_stop_value_8);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_5, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[28];
            PyTuple_SET_ITEM0(tmp_ass_subscript_5, 2, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_ass_subscript_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subscript_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_start_value_9;
        PyObject *tmp_stop_value_9;
        if (var_g_img == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_6 = var_g_img;
        CHECK_OBJECT(var_im1);
        tmp_ass_subscribed_6 = var_im1;
        tmp_start_value_9 = mod_consts[28];
        CHECK_OBJECT(var_N);
        tmp_stop_value_9 = var_N;
        tmp_tuple_element_11 = MAKE_SLICE_OBJECT2(tmp_start_value_9, tmp_stop_value_9);
        assert(!(tmp_tuple_element_11 == NULL));
        tmp_ass_subscript_6 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_start_value_10;
            PyObject *tmp_stop_value_10;
            PyObject *tmp_add_expr_left_8;
            PyObject *tmp_add_expr_right_8;
            PyTuple_SET_ITEM(tmp_ass_subscript_6, 0, tmp_tuple_element_11);
            CHECK_OBJECT(par_K);
            tmp_start_value_10 = par_K;
            CHECK_OBJECT(par_K);
            tmp_add_expr_left_8 = par_K;
            CHECK_OBJECT(var_N);
            tmp_add_expr_right_8 = var_N;
            tmp_stop_value_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
            if (tmp_stop_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_1 = "oooooooooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_tuple_element_11 = MAKE_SLICE_OBJECT2(tmp_start_value_10, tmp_stop_value_10);
            Py_DECREF(tmp_stop_value_10);
            assert(!(tmp_tuple_element_11 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_6, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_ass_subscript_6, 2, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_ass_subscript_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subscript_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_start_value_11;
        PyObject *tmp_stop_value_11;
        if (var_b_img == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_7 = var_b_img;
        CHECK_OBJECT(var_im1);
        tmp_ass_subscribed_7 = var_im1;
        tmp_start_value_11 = mod_consts[28];
        CHECK_OBJECT(var_N);
        tmp_stop_value_11 = var_N;
        tmp_tuple_element_12 = MAKE_SLICE_OBJECT2(tmp_start_value_11, tmp_stop_value_11);
        assert(!(tmp_tuple_element_12 == NULL));
        tmp_ass_subscript_7 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_start_value_12;
            PyObject *tmp_stop_value_12;
            PyObject *tmp_add_expr_left_9;
            PyObject *tmp_add_expr_right_9;
            PyTuple_SET_ITEM(tmp_ass_subscript_7, 0, tmp_tuple_element_12);
            CHECK_OBJECT(par_K);
            tmp_start_value_12 = par_K;
            CHECK_OBJECT(par_K);
            tmp_add_expr_left_9 = par_K;
            CHECK_OBJECT(var_N);
            tmp_add_expr_right_9 = var_N;
            tmp_stop_value_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
            if (tmp_stop_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_1 = "oooooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_tuple_element_12 = MAKE_SLICE_OBJECT2(tmp_start_value_12, tmp_stop_value_12);
            Py_DECREF(tmp_stop_value_12);
            assert(!(tmp_tuple_element_12 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_7, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_ass_subscript_7, 2, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_ass_subscript_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        Py_DECREF(tmp_ass_subscript_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_args_element_value_65;
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_im1);
        tmp_args_element_value_65 = var_im1;
        frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame.f_lineno = 145;
        tmp_assign_source_79 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_14, mod_consts[43], tmp_args_element_value_65);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rgb == NULL);
        var_rgb = tmp_assign_source_79;
    }
    {
        PyObject *tmp_tuple_element_13;
        CHECK_OBJECT(var_rgb);
        tmp_tuple_element_13 = var_rgb;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_19;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_13);
            CHECK_OBJECT(var_s);
            tmp_expression_value_52 = var_s;
            tmp_subscript_value_19 = mod_consts[57];
            tmp_tuple_element_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_52, tmp_subscript_value_19, 2);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_1 = "oooooooooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a987fa4d9997dcadadbb93bb2b384cb0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a987fa4d9997dcadadbb93bb2b384cb0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a987fa4d9997dcadadbb93bb2b384cb0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a987fa4d9997dcadadbb93bb2b384cb0,
        type_description_1,
        par_self,
        par_im,
        par_sip,
        par_SIZE,
        par_K,
        par_name,
        par_copt,
        par_PR,
        par_PB,
        par_im_format,
        var_im1,
        var_M,
        var_N,
        var_outim_w,
        var_outim_h,
        var_new_w,
        var_new_h,
        var_r,
        var_g,
        var_b,
        var_r_img,
        var_k,
        var_g_img,
        var_b_img,
        var_red,
        var_green,
        var_blue,
        var_rgb,
        var_s,
        var_a
    );


    // Release cached frame if used for exception.
    if (frame_a987fa4d9997dcadadbb93bb2b384cb0 == cache_frame_a987fa4d9997dcadadbb93bb2b384cb0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a987fa4d9997dcadadbb93bb2b384cb0);
        cache_frame_a987fa4d9997dcadadbb93bb2b384cb0 = NULL;
    }

    assertFrameObject(frame_a987fa4d9997dcadadbb93bb2b384cb0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_im1);
    var_im1 = NULL;
    Py_XDECREF(var_M);
    var_M = NULL;
    Py_XDECREF(var_N);
    var_N = NULL;
    Py_XDECREF(var_outim_w);
    var_outim_w = NULL;
    Py_XDECREF(var_outim_h);
    var_outim_h = NULL;
    CHECK_OBJECT(var_new_w);
    Py_DECREF(var_new_w);
    var_new_w = NULL;
    CHECK_OBJECT(var_new_h);
    Py_DECREF(var_new_h);
    var_new_h = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_r_img);
    var_r_img = NULL;
    CHECK_OBJECT(var_k);
    Py_DECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_g_img);
    var_g_img = NULL;
    Py_XDECREF(var_b_img);
    var_b_img = NULL;
    Py_XDECREF(var_red);
    var_red = NULL;
    Py_XDECREF(var_green);
    var_green = NULL;
    Py_XDECREF(var_blue);
    var_blue = NULL;
    Py_XDECREF(var_rgb);
    var_rgb = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
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
    Py_XDECREF(var_outim_w);
    var_outim_w = NULL;
    Py_XDECREF(var_outim_h);
    var_outim_h = NULL;
    Py_XDECREF(var_new_w);
    var_new_w = NULL;
    Py_XDECREF(var_new_h);
    var_new_h = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_r_img);
    var_r_img = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_g_img);
    var_g_img = NULL;
    Py_XDECREF(var_b_img);
    var_b_img = NULL;
    Py_XDECREF(var_red);
    var_red = NULL;
    Py_XDECREF(var_green);
    var_green = NULL;
    Py_XDECREF(var_blue);
    var_blue = NULL;
    Py_XDECREF(var_rgb);
    var_rgb = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_im);
    Py_DECREF(par_im);
    CHECK_OBJECT(par_sip);
    Py_DECREF(par_sip);
    CHECK_OBJECT(par_SIZE);
    Py_DECREF(par_SIZE);
    CHECK_OBJECT(par_K);
    Py_DECREF(par_K);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_copt);
    Py_DECREF(par_copt);
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
    CHECK_OBJECT(par_im);
    Py_DECREF(par_im);
    CHECK_OBJECT(par_sip);
    Py_DECREF(par_sip);
    CHECK_OBJECT(par_SIZE);
    Py_DECREF(par_SIZE);
    CHECK_OBJECT(par_K);
    Py_DECREF(par_K);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_copt);
    Py_DECREF(par_copt);
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


static PyObject *impl_algorithms$w_algorithms$embed_key$$$function__9_mergeCellsToImage(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_m = python_pars[1];
    PyObject *par_unm = python_pars[2];
    PyObject *par_w = python_pars[3];
    PyObject *par_h = python_pars[4];
    PyObject *par_sip_cells = python_pars[5];
    PyObject *var_sorted_cells = NULL;
    PyObject *var_N = NULL;
    PyObject *var_display = NULL;
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *var_arr = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_27e9bf25e8059d7b06b901237094bdd8;
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
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_27e9bf25e8059d7b06b901237094bdd8 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_27e9bf25e8059d7b06b901237094bdd8)) {
        Py_XDECREF(cache_frame_27e9bf25e8059d7b06b901237094bdd8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_27e9bf25e8059d7b06b901237094bdd8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_27e9bf25e8059d7b06b901237094bdd8 = MAKE_FUNCTION_FRAME(tstate, codeobj_27e9bf25e8059d7b06b901237094bdd8, module_algorithms$w_algorithms$embed_key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_27e9bf25e8059d7b06b901237094bdd8->m_type_description == NULL);
    frame_27e9bf25e8059d7b06b901237094bdd8 = cache_frame_27e9bf25e8059d7b06b901237094bdd8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_27e9bf25e8059d7b06b901237094bdd8);
    assert(Py_REFCNT(frame_27e9bf25e8059d7b06b901237094bdd8) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_m);
        tmp_args_element_value_1 = par_m;
        CHECK_OBJECT(par_unm);
        tmp_args_element_value_2 = par_unm;
        CHECK_OBJECT(par_sip_cells);
        tmp_args_element_value_3 = par_sip_cells;
        frame_27e9bf25e8059d7b06b901237094bdd8->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_1,
                mod_consts[66],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sorted_cells == NULL);
        var_sorted_cells = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_sip_cells);
        tmp_len_arg_1 = par_sip_cells;
        tmp_assign_source_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_N == NULL);
        var_N = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[67]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_w);
        tmp_mult_expr_left_1 = par_w;
        CHECK_OBJECT(var_N);
        tmp_mult_expr_right_1 = var_N;
        tmp_tuple_element_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 153;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_mult_expr_left_2;
            PyObject *tmp_mult_expr_right_2;
            PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_h);
            tmp_mult_expr_left_2 = par_h;
            CHECK_OBJECT(var_N);
            tmp_mult_expr_right_2 = var_N;
            tmp_tuple_element_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 153;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[68]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 153;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_27e9bf25e8059d7b06b901237094bdd8->m_frame.f_lineno = 153;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[69]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_display == NULL);
        var_display = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_xrange_low_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[71]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_xrange_low_1 = var_N;
        tmp_args_element_value_4 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_xrange_low_2 = var_N;
        tmp_args_element_value_5 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_27e9bf25e8059d7b06b901237094bdd8->m_frame.f_lineno = 155;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooo";
                exception_lineno = 155;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 155;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 155;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 155;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 155;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_9;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_10;
            Py_INCREF(var_j);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        CHECK_OBJECT(var_sorted_cells);
        tmp_expression_value_4 = var_sorted_cells;
        CHECK_OBJECT(var_i);
        tmp_mult_expr_left_3 = var_i;
        if (var_N == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 156;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_right_3 = var_N;
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_j);
        tmp_add_expr_right_1 = var_j;
        tmp_subscript_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_subscript_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_arr;
            var_arr = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        CHECK_OBJECT(var_i);
        tmp_mult_expr_left_4 = var_i;
        if (par_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 158;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_mult_expr_right_4 = par_w;
        tmp_tuple_element_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_iter_arg_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_mult_expr_left_5;
            PyObject *tmp_mult_expr_right_5;
            PyTuple_SET_ITEM(tmp_iter_arg_3, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_j);
            tmp_mult_expr_left_5 = var_j;
            if (par_h == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 158;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_mult_expr_right_5 = par_h;
            tmp_tuple_element_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_3, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_iter_arg_3);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_12 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        assert(!(tmp_assign_source_12 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 158;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_14 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 158;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 158;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 158;
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
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

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_15;
            Py_INCREF(var_x);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_16;
            Py_INCREF(var_y);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(var_arr);
        tmp_ass_subvalue_1 = var_arr;
        if (var_display == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 159;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_display;
        CHECK_OBJECT(var_x);
        tmp_start_value_1 = var_x;
        CHECK_OBJECT(var_x);
        tmp_add_expr_left_2 = var_x;
        if (par_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 159;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_right_2 = par_w;
        tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_stop_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_3 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_tuple_element_3 == NULL));
        tmp_ass_subscript_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_start_value_2;
            PyObject *tmp_stop_value_2;
            PyObject *tmp_add_expr_left_3;
            PyObject *tmp_add_expr_right_3;
            PyTuple_SET_ITEM(tmp_ass_subscript_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_y);
            tmp_start_value_2 = var_y;
            CHECK_OBJECT(var_y);
            tmp_add_expr_left_3 = var_y;
            if (par_h == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 159;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_add_expr_right_3 = par_h;
            tmp_stop_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
            if (tmp_stop_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = MAKE_SLICE_OBJECT2(tmp_start_value_2, tmp_stop_value_2);
            Py_DECREF(tmp_stop_value_2);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_ass_subscript_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 155;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_display == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 161;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_display;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_27e9bf25e8059d7b06b901237094bdd8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_27e9bf25e8059d7b06b901237094bdd8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_27e9bf25e8059d7b06b901237094bdd8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_27e9bf25e8059d7b06b901237094bdd8,
        type_description_1,
        par_self,
        par_m,
        par_unm,
        par_w,
        par_h,
        par_sip_cells,
        var_sorted_cells,
        var_N,
        var_display,
        var_i,
        var_j,
        var_arr,
        var_x,
        var_y
    );


    // Release cached frame if used for exception.
    if (frame_27e9bf25e8059d7b06b901237094bdd8 == cache_frame_27e9bf25e8059d7b06b901237094bdd8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_27e9bf25e8059d7b06b901237094bdd8);
        cache_frame_27e9bf25e8059d7b06b901237094bdd8 = NULL;
    }

    assertFrameObject(frame_27e9bf25e8059d7b06b901237094bdd8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_sorted_cells);
    Py_DECREF(var_sorted_cells);
    var_sorted_cells = NULL;
    Py_XDECREF(var_N);
    var_N = NULL;
    Py_XDECREF(var_display);
    var_display = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_arr);
    var_arr = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_sorted_cells);
    var_sorted_cells = NULL;
    Py_XDECREF(var_N);
    var_N = NULL;
    Py_XDECREF(var_display);
    var_display = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_arr);
    var_arr = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_unm);
    Py_DECREF(par_unm);
    CHECK_OBJECT(par_w);
    Py_DECREF(par_w);
    CHECK_OBJECT(par_h);
    Py_DECREF(par_h);
    CHECK_OBJECT(par_sip_cells);
    Py_DECREF(par_sip_cells);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    CHECK_OBJECT(par_unm);
    Py_DECREF(par_unm);
    CHECK_OBJECT(par_w);
    Py_DECREF(par_w);
    CHECK_OBJECT(par_h);
    Py_DECREF(par_h);
    CHECK_OBJECT(par_sip_cells);
    Py_DECREF(par_sip_cells);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_algorithms$w_algorithms$embed_key$$$function__10_modifyMagnitude(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_mag_marked = python_pars[1];
    PyObject *par_mag_rest = python_pars[2];
    PyObject *par_D_array = python_pars[3];
    PyObject *par_sip_cells = python_pars[4];
    PyObject *par_gw = python_pars[5];
    PyObject *par_gh = python_pars[6];
    PyObject *par_copt = python_pars[7];
    PyObject *var_modified_cells = NULL;
    PyObject *var_unmodified_cells = NULL;
    PyObject *var_i = NULL;
    PyObject *var_MAGNITUDE = NULL;
    PyObject *var_PHASE = NULL;
    PyObject *var_original_cell = NULL;
    PyObject *var_marked_cells = NULL;
    PyObject *var_RED_AN = NULL;
    PyObject *var_BLUE_AN = NULL;
    PyObject *var_AVG_R = NULL;
    PyObject *var_AVG_B = NULL;
    PyObject *var_COORD_R = NULL;
    PyObject *var_COORD_B = NULL;
    PyObject *var_a = NULL;
    PyObject *var_j = NULL;
    PyObject *var_k = NULL;
    PyObject *var_t = NULL;
    PyObject *var_val = NULL;
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
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__value = NULL;
    struct Nuitka_FrameObject *frame_bbe6640738de279ab330ba430a1933ee;
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
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bbe6640738de279ab330ba430a1933ee = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_modified_cells == NULL);
        var_modified_cells = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(var_unmodified_cells == NULL);
        var_unmodified_cells = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_bbe6640738de279ab330ba430a1933ee)) {
        Py_XDECREF(cache_frame_bbe6640738de279ab330ba430a1933ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bbe6640738de279ab330ba430a1933ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bbe6640738de279ab330ba430a1933ee = MAKE_FUNCTION_FRAME(tstate, codeobj_bbe6640738de279ab330ba430a1933ee, module_algorithms$w_algorithms$embed_key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bbe6640738de279ab330ba430a1933ee->m_type_description == NULL);
    frame_bbe6640738de279ab330ba430a1933ee = cache_frame_bbe6640738de279ab330ba430a1933ee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bbe6640738de279ab330ba430a1933ee);
    assert(Py_REFCNT(frame_bbe6640738de279ab330ba430a1933ee) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_mag_rest);
        tmp_len_arg_1 = par_mag_rest;
        tmp_xrange_low_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_xrange_low_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooNoooooooooooooooo";
                exception_lineno = 168;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_5;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_mag_rest);
        tmp_expression_value_2 = par_mag_rest;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_2 = mod_consts[28];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_MAGNITUDE;
            var_MAGNITUDE = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_mag_rest);
        tmp_expression_value_4 = par_mag_rest;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_4 = mod_consts[31];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_4, 1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_PHASE;
            var_PHASE = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 171;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_MAGNITUDE);
        tmp_args_element_value_1 = var_MAGNITUDE;
        CHECK_OBJECT(var_PHASE);
        tmp_args_element_value_2 = var_PHASE;
        frame_bbe6640738de279ab330ba430a1933ee->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[77],
                call_args
            );
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_original_cell;
            var_original_cell = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        if (var_unmodified_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 172;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = var_unmodified_cells;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_original_cell);
        tmp_args_element_value_3 = var_original_cell;
        frame_bbe6640738de279ab330ba430a1933ee->m_frame.f_lineno = 172;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 168;
        type_description_1 = "ooooooooooNoooooooooooooooo";
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(par_mag_marked);
        tmp_len_arg_2 = par_mag_marked;
        tmp_xrange_low_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_xrange_low_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_2 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_2);
        Py_DECREF(tmp_xrange_low_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooNoooooooooooooooo";
                exception_lineno = 174;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_11 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_11;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[28];
        {
            PyObject *old = var_marked_cells;
            var_marked_cells = tmp_assign_source_12;
            Py_INCREF(var_marked_cells);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(par_mag_marked);
        tmp_expression_value_7 = par_mag_marked;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_5 = var_i;
        tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_5);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_6 = mod_consts[28];
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_6, 0);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_MAGNITUDE;
            var_MAGNITUDE = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(par_mag_marked);
        tmp_expression_value_9 = par_mag_marked;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_7 = var_i;
        tmp_expression_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_7);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_8 = mod_consts[31];
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_8, 1);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_PHASE;
            var_PHASE = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(par_mag_marked);
        tmp_expression_value_11 = par_mag_marked;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_9 = var_i;
        tmp_expression_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_9);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_10 = mod_consts[57];
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_10, 2);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_RED_AN;
            var_RED_AN = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_subscript_value_12;
        CHECK_OBJECT(par_mag_marked);
        tmp_expression_value_13 = par_mag_marked;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_11 = var_i;
        tmp_expression_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_11);
        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_12 = mod_consts[79];
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_12, 3);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_BLUE_AN;
            var_BLUE_AN = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_subscript_value_14;
        CHECK_OBJECT(par_mag_marked);
        tmp_expression_value_15 = par_mag_marked;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_13 = var_i;
        tmp_expression_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_13);
        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_14 = mod_consts[58];
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_14, 4);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_AVG_R;
            var_AVG_R = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_subscript_value_16;
        CHECK_OBJECT(par_mag_marked);
        tmp_expression_value_17 = par_mag_marked;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_15 = var_i;
        tmp_expression_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_15);
        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_16 = mod_consts[80];
        tmp_assign_source_18 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_16, 5);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_AVG_B;
            var_AVG_B = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_subscript_value_18;
        CHECK_OBJECT(par_mag_marked);
        tmp_expression_value_19 = par_mag_marked;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_17 = var_i;
        tmp_expression_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_17);
        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_18 = mod_consts[81];
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_18, 6);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_COORD_R;
            var_COORD_R = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_subscript_value_20;
        CHECK_OBJECT(par_mag_marked);
        tmp_expression_value_21 = par_mag_marked;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_19 = var_i;
        tmp_expression_value_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_19);
        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_20 = mod_consts[82];
        tmp_assign_source_20 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_20, 7);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_COORD_B;
            var_COORD_B = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_MAGNITUDE);
        tmp_args_element_value_4 = var_MAGNITUDE;
        frame_bbe6640738de279ab330ba430a1933ee->m_frame.f_lineno = 184;
        tmp_assign_source_21 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[83], tmp_args_element_value_4);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_a;
            var_a = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_xrange_low_3;
        CHECK_OBJECT(par_gw);
        tmp_xrange_low_3 = par_gw;
        tmp_iter_arg_3 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_3);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_22 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_23 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_23 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooNoooooooooooooooo";
                exception_lineno = 185;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_24 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_24;
            Py_INCREF(var_j);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_xrange_low_4;
        CHECK_OBJECT(par_gh);
        tmp_xrange_low_4 = par_gh;
        tmp_iter_arg_4 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_4);
        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_25 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_26 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooNoooooooooooooooo";
                exception_lineno = 186;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_27 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_27;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_xrange_low_5;
        PyObject *tmp_len_arg_3;
        if (var_COORD_R == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 187;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_len_arg_3 = var_COORD_R;
        tmp_xrange_low_5 = BUILTIN_LEN(tstate, tmp_len_arg_3);
        if (tmp_xrange_low_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_iter_arg_5 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_5);
        Py_DECREF(tmp_xrange_low_5);
        if (tmp_iter_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_28 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_for_loop_5__for_iterator;
            tmp_for_loop_5__for_iterator = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_5 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_29 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_29 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooNoooooooooooooooo";
                exception_lineno = 187;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_assign_source_30 = tmp_for_loop_5__iter_value;
        {
            PyObject *old = var_t;
            var_t = tmp_assign_source_30;
            Py_INCREF(var_t);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_subscript_value_24;
        CHECK_OBJECT(var_j);
        tmp_cmp_expr_left_1 = var_j;
        if (var_COORD_R == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 188;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_23 = var_COORD_R;
        CHECK_OBJECT(var_t);
        tmp_subscript_value_21 = var_t;
        tmp_expression_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_21);
        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_22 = mod_consts[28];
        tmp_cmp_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_22, 0);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_k);
        tmp_cmp_expr_left_2 = var_k;
        if (var_COORD_R == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 188;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_25 = var_COORD_R;
        CHECK_OBJECT(var_t);
        tmp_subscript_value_23 = var_t;
        tmp_expression_value_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_23);
        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_24 = mod_consts[31];
        tmp_cmp_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_24, tmp_subscript_value_24, 1);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_25;
        if (var_AVG_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 190;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_sub_expr_left_1 = var_AVG_B;
        if (var_AVG_R == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 190;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_sub_expr_right_1 = var_AVG_R;
        tmp_add_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(par_D_array);
        tmp_expression_value_26 = par_D_array;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_25 = var_i;
        tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_25);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 190;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }
        if (par_copt == NULL) {
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_add_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 190;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_2 = par_copt;
        tmp_add_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 190;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_31 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_val;
            var_val = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        if (var_MAGNITUDE == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 191;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_assign_source_32 = var_MAGNITUDE;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__target;
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_32;
            Py_INCREF(tmp_inplace_assign_subscr_1__target);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_j);
        tmp_tuple_element_1 = var_j;
        tmp_assign_source_33 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_k);
        tmp_tuple_element_1 = var_k;
        PyTuple_SET_ITEM0(tmp_assign_source_33, 1, tmp_tuple_element_1);
        {
            PyObject *old = tmp_inplace_assign_subscr_1__subscript;
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_26;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_27 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_subscript_value_26 = tmp_inplace_assign_subscr_1__subscript;
        tmp_assign_source_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_26);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_inplace_assign_subscr_1__value;
            tmp_inplace_assign_subscr_1__value = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(var_val);
        tmp_iadd_expr_right_1 = var_val;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_35 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_35;

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_1 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_ass_subscript_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_6;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
    Py_DECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        if (var_marked_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_iadd_expr_left_2 = var_marked_cells;
        tmp_iadd_expr_right_2 = mod_consts[31];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_36 = tmp_iadd_expr_left_2;
        var_marked_cells = tmp_assign_source_36;

    }
    branch_no_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 187;
        type_description_1 = "ooooooooooNoooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 186;
        type_description_1 = "ooooooooooNoooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 185;
        type_description_1 = "ooooooooooNoooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_3;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 193;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_28 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[77]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_MAGNITUDE == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 193;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_5 = var_MAGNITUDE;
        CHECK_OBJECT(var_PHASE);
        tmp_args_element_value_6 = var_PHASE;
        frame_bbe6640738de279ab330ba430a1933ee->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_original_cell;
            var_original_cell = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_7;
        if (var_modified_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 195;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_29 = var_modified_cells;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[33]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_original_cell);
        tmp_args_element_value_7 = var_original_cell;
        frame_bbe6640738de279ab330ba430a1933ee->m_frame.f_lineno = 195;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 174;
        type_description_1 = "ooooooooooNoooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_tuple_element_2;
        if (var_modified_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 197;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_modified_cells;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        if (var_unmodified_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 197;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_2 = var_unmodified_cells;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        if (var_marked_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 197;
            type_description_1 = "ooooooooooNoooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_2 = var_marked_cells;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bbe6640738de279ab330ba430a1933ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bbe6640738de279ab330ba430a1933ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bbe6640738de279ab330ba430a1933ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bbe6640738de279ab330ba430a1933ee,
        type_description_1,
        par_self,
        par_mag_marked,
        par_mag_rest,
        par_D_array,
        par_sip_cells,
        par_gw,
        par_gh,
        par_copt,
        var_modified_cells,
        var_unmodified_cells,
        NULL,
        var_i,
        var_MAGNITUDE,
        var_PHASE,
        var_original_cell,
        var_marked_cells,
        var_RED_AN,
        var_BLUE_AN,
        var_AVG_R,
        var_AVG_B,
        var_COORD_R,
        var_COORD_B,
        var_a,
        var_j,
        var_k,
        var_t,
        var_val
    );


    // Release cached frame if used for exception.
    if (frame_bbe6640738de279ab330ba430a1933ee == cache_frame_bbe6640738de279ab330ba430a1933ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bbe6640738de279ab330ba430a1933ee);
        cache_frame_bbe6640738de279ab330ba430a1933ee = NULL;
    }

    assertFrameObject(frame_bbe6640738de279ab330ba430a1933ee);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_modified_cells);
    var_modified_cells = NULL;
    Py_XDECREF(var_unmodified_cells);
    var_unmodified_cells = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_MAGNITUDE);
    var_MAGNITUDE = NULL;
    Py_XDECREF(var_PHASE);
    var_PHASE = NULL;
    Py_XDECREF(var_original_cell);
    var_original_cell = NULL;
    Py_XDECREF(var_marked_cells);
    var_marked_cells = NULL;
    Py_XDECREF(var_RED_AN);
    var_RED_AN = NULL;
    Py_XDECREF(var_BLUE_AN);
    var_BLUE_AN = NULL;
    Py_XDECREF(var_AVG_R);
    var_AVG_R = NULL;
    Py_XDECREF(var_AVG_B);
    var_AVG_B = NULL;
    Py_XDECREF(var_COORD_R);
    var_COORD_R = NULL;
    Py_XDECREF(var_COORD_B);
    var_COORD_B = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
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

    Py_XDECREF(var_modified_cells);
    var_modified_cells = NULL;
    Py_XDECREF(var_unmodified_cells);
    var_unmodified_cells = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_MAGNITUDE);
    var_MAGNITUDE = NULL;
    Py_XDECREF(var_PHASE);
    var_PHASE = NULL;
    Py_XDECREF(var_original_cell);
    var_original_cell = NULL;
    Py_XDECREF(var_marked_cells);
    var_marked_cells = NULL;
    Py_XDECREF(var_RED_AN);
    var_RED_AN = NULL;
    Py_XDECREF(var_BLUE_AN);
    var_BLUE_AN = NULL;
    Py_XDECREF(var_AVG_R);
    var_AVG_R = NULL;
    Py_XDECREF(var_AVG_B);
    var_AVG_B = NULL;
    Py_XDECREF(var_COORD_R);
    var_COORD_R = NULL;
    Py_XDECREF(var_COORD_B);
    var_COORD_B = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
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
    CHECK_OBJECT(par_mag_marked);
    Py_DECREF(par_mag_marked);
    CHECK_OBJECT(par_mag_rest);
    Py_DECREF(par_mag_rest);
    CHECK_OBJECT(par_D_array);
    Py_DECREF(par_D_array);
    CHECK_OBJECT(par_sip_cells);
    Py_DECREF(par_sip_cells);
    CHECK_OBJECT(par_gw);
    Py_DECREF(par_gw);
    CHECK_OBJECT(par_gh);
    Py_DECREF(par_gh);
    CHECK_OBJECT(par_copt);
    Py_DECREF(par_copt);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_mag_marked);
    Py_DECREF(par_mag_marked);
    CHECK_OBJECT(par_mag_rest);
    Py_DECREF(par_mag_rest);
    CHECK_OBJECT(par_D_array);
    Py_DECREF(par_D_array);
    CHECK_OBJECT(par_sip_cells);
    Py_DECREF(par_sip_cells);
    CHECK_OBJECT(par_gw);
    Py_DECREF(par_gw);
    CHECK_OBJECT(par_gh);
    Py_DECREF(par_gh);
    CHECK_OBJECT(par_copt);
    Py_DECREF(par_copt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_algorithms$w_algorithms$embed_key$$$function__11_embedPermutationToChannel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_channel = python_pars[1];
    PyObject *par_sip = python_pars[2];
    PyObject *par_SIZE = python_pars[3];
    PyObject *par_K = python_pars[4];
    PyObject *par_copt = python_pars[5];
    PyObject *par_PR = python_pars[6];
    PyObject *par_PB = python_pars[7];
    PyObject *var_grid_cell_num = NULL;
    PyObject *var_sip_cells = NULL;
    PyObject *var_A_matrix = NULL;
    PyObject *var_i = NULL;
    PyObject *var_row = NULL;
    PyObject *var_j = NULL;
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
    PyObject *var_MaxDRows = NULL;
    PyObject *var_MaxD = NULL;
    PyObject *var_avg = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_d = NULL;
    PyObject *var_mag_red_blue = NULL;
    PyObject *var_mag_rest = NULL;
    PyObject *var_r = NULL;
    PyObject *var_c = NULL;
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
    PyObject *var_m = NULL;
    PyObject *var_unm = NULL;
    PyObject *var_m_cells = NULL;
    PyObject *var_img = NULL;
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
    PyObject *tmp_tuple_unpack_10__element_1 = NULL;
    PyObject *tmp_tuple_unpack_10__element_2 = NULL;
    PyObject *tmp_tuple_unpack_10__source_iter = NULL;
    PyObject *tmp_tuple_unpack_11__element_1 = NULL;
    PyObject *tmp_tuple_unpack_11__element_2 = NULL;
    PyObject *tmp_tuple_unpack_11__source_iter = NULL;
    PyObject *tmp_tuple_unpack_12__element_1 = NULL;
    PyObject *tmp_tuple_unpack_12__element_2 = NULL;
    PyObject *tmp_tuple_unpack_12__source_iter = NULL;
    PyObject *tmp_tuple_unpack_13__element_1 = NULL;
    PyObject *tmp_tuple_unpack_13__element_2 = NULL;
    PyObject *tmp_tuple_unpack_13__element_3 = NULL;
    PyObject *tmp_tuple_unpack_13__source_iter = NULL;
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
    PyObject *tmp_tuple_unpack_5__element_3 = NULL;
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
    PyObject *tmp_tuple_unpack_9__element_3 = NULL;
    PyObject *tmp_tuple_unpack_9__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a7308baea8a14741a1bb4621253117c6;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    static struct Nuitka_FrameObject *cache_frame_a7308baea8a14741a1bb4621253117c6 = NULL;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[28];
        assert(var_grid_cell_num == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_grid_cell_num = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(var_sip_cells == NULL);
        var_sip_cells = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
        assert(var_A_matrix == NULL);
        var_A_matrix = tmp_assign_source_3;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_a7308baea8a14741a1bb4621253117c6)) {
        Py_XDECREF(cache_frame_a7308baea8a14741a1bb4621253117c6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a7308baea8a14741a1bb4621253117c6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a7308baea8a14741a1bb4621253117c6 = MAKE_FUNCTION_FRAME(tstate, codeobj_a7308baea8a14741a1bb4621253117c6, module_algorithms$w_algorithms$embed_key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a7308baea8a14741a1bb4621253117c6->m_type_description == NULL);
    frame_a7308baea8a14741a1bb4621253117c6 = cache_frame_a7308baea8a14741a1bb4621253117c6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a7308baea8a14741a1bb4621253117c6);
    assert(Py_REFCNT(frame_a7308baea8a14741a1bb4621253117c6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_len_arg_1;
        tmp_xrange_low_1 = mod_consts[28];
        CHECK_OBJECT(par_sip);
        tmp_len_arg_1 = par_sip;
        tmp_xrange_high_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_xrange_high_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
        Py_DECREF(tmp_xrange_high_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                exception_lineno = 206;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = var_row;
            var_row = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_xrange_high_2;
        tmp_xrange_low_2 = mod_consts[28];
        CHECK_OBJECT(par_SIZE);
        tmp_xrange_high_2 = par_SIZE;
        tmp_iter_arg_2 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_2, tmp_xrange_high_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                exception_lineno = 208;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_10 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_10;
            Py_INCREF(var_j);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_j);
        tmp_cmp_expr_left_1 = var_j;
        CHECK_OBJECT(par_sip);
        tmp_expression_value_1 = par_sip;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_1 = var_i;
        tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_sub_expr_right_1 = mod_consts[31];
        tmp_cmp_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        if (var_row == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_2 = var_row;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 210;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[93]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_element_1;
        if (var_sip_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_3 = var_sip_cells;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[33]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_i == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = var_i;
        tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_j);
        tmp_tuple_element_1 = var_j;
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_1);
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 211;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        if (var_row == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 213;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_4 = var_row;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[33]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 213;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[94]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 208;
        type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_2;
        if (var_A_matrix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[95]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = var_A_matrix;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[33]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_row == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = var_row;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 214;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 206;
        type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_channel);
        tmp_expression_value_6 = par_channel;
        tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[36]);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 218;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 218;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_13;
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

                    type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                    exception_lineno = 218;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 218;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;
        assert(var_M == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_M = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_2;
        assert(var_N == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_N = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_channel);
        tmp_args_element_value_3 = par_channel;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 220;
        tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[35], tmp_args_element_value_3);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_channel_array == NULL);
        var_channel_array = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_N);
        tmp_cmp_expr_left_2 = var_N;
        CHECK_OBJECT(var_M);
        tmp_cmp_expr_right_2 = var_M;
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[39]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_truediv_expr_left_1 = var_N;
        CHECK_OBJECT(par_SIZE);
        tmp_truediv_expr_right_1 = par_SIZE;
        tmp_args_element_value_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 225;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_grid_size_w == NULL);
        var_grid_size_w = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[39]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_truediv_expr_left_2 = var_N;
        CHECK_OBJECT(par_SIZE);
        tmp_truediv_expr_right_2 = par_SIZE;
        tmp_args_element_value_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 226;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 226;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_grid_size_h == NULL);
        var_grid_size_h = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(par_PR);
        tmp_assign_source_19 = par_PR;
        assert(var_RED_WIDTH == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_RED_WIDTH = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(par_PB);
        tmp_assign_source_20 = par_PB;
        assert(var_BLUE_WIDTH == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_BLUE_WIDTH = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[39]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_truediv_expr_left_3 = var_N;
        tmp_mult_expr_left_1 = mod_consts[57];
        CHECK_OBJECT(par_SIZE);
        tmp_mult_expr_right_1 = par_SIZE;
        tmp_truediv_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_truediv_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_right_3);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 231;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_RED_RADIOUS_X == NULL);
        var_RED_RADIOUS_X = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[39]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_truediv_expr_left_4 = var_N;
        tmp_mult_expr_left_2 = mod_consts[57];
        CHECK_OBJECT(par_SIZE);
        tmp_mult_expr_right_2 = par_SIZE;
        tmp_truediv_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_truediv_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_right_4);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 232;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_RED_RADIOUS_Y == NULL);
        var_RED_RADIOUS_Y = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(var_RED_RADIOUS_X);
        tmp_sub_expr_left_2 = var_RED_RADIOUS_X;
        CHECK_OBJECT(var_RED_WIDTH);
        tmp_sub_expr_right_2 = var_RED_WIDTH;
        tmp_assign_source_23 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_BLUE_RADIOUS_X == NULL);
        var_BLUE_RADIOUS_X = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        CHECK_OBJECT(var_RED_RADIOUS_Y);
        tmp_sub_expr_left_3 = var_RED_RADIOUS_Y;
        CHECK_OBJECT(var_RED_WIDTH);
        tmp_sub_expr_right_3 = var_RED_WIDTH;
        tmp_assign_source_24 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_BLUE_RADIOUS_Y == NULL);
        var_BLUE_RADIOUS_Y = tmp_assign_source_24;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_N);
        tmp_cmp_expr_left_3 = var_N;
        CHECK_OBJECT(var_M);
        tmp_cmp_expr_right_3 = var_M;
        tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_truediv_expr_left_5;
        PyObject *tmp_truediv_expr_right_5;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[39]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_M);
        tmp_truediv_expr_left_5 = var_M;
        CHECK_OBJECT(par_SIZE);
        tmp_truediv_expr_right_5 = par_SIZE;
        tmp_args_element_value_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 237;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_grid_size_w == NULL);
        var_grid_size_w = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_truediv_expr_left_6;
        PyObject *tmp_truediv_expr_right_6;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[39]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_M);
        tmp_truediv_expr_left_6 = var_M;
        CHECK_OBJECT(par_SIZE);
        tmp_truediv_expr_right_6 = par_SIZE;
        tmp_args_element_value_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 238;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_grid_size_h == NULL);
        var_grid_size_h = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(par_PR);
        tmp_assign_source_27 = par_PR;
        assert(var_RED_WIDTH == NULL);
        Py_INCREF(tmp_assign_source_27);
        var_RED_WIDTH = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(par_PB);
        tmp_assign_source_28 = par_PB;
        assert(var_BLUE_WIDTH == NULL);
        Py_INCREF(tmp_assign_source_28);
        var_BLUE_WIDTH = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_truediv_expr_left_7;
        PyObject *tmp_truediv_expr_right_7;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[39]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_M);
        tmp_truediv_expr_left_7 = var_M;
        tmp_mult_expr_left_3 = mod_consts[57];
        CHECK_OBJECT(par_SIZE);
        tmp_mult_expr_right_3 = par_SIZE;
        tmp_truediv_expr_right_7 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_truediv_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_7, tmp_truediv_expr_right_7);
        Py_DECREF(tmp_truediv_expr_right_7);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 243;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_RED_RADIOUS_X == NULL);
        var_RED_RADIOUS_X = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_truediv_expr_left_8;
        PyObject *tmp_truediv_expr_right_8;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[39]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_M);
        tmp_truediv_expr_left_8 = var_M;
        tmp_mult_expr_left_4 = mod_consts[57];
        CHECK_OBJECT(par_SIZE);
        tmp_mult_expr_right_4 = par_SIZE;
        tmp_truediv_expr_right_8 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_truediv_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_8, tmp_truediv_expr_right_8);
        Py_DECREF(tmp_truediv_expr_right_8);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 244;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_RED_RADIOUS_Y == NULL);
        var_RED_RADIOUS_Y = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        CHECK_OBJECT(var_RED_RADIOUS_X);
        tmp_sub_expr_left_4 = var_RED_RADIOUS_X;
        CHECK_OBJECT(var_RED_WIDTH);
        tmp_sub_expr_right_4 = var_RED_WIDTH;
        tmp_assign_source_31 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_BLUE_RADIOUS_X == NULL);
        var_BLUE_RADIOUS_X = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        CHECK_OBJECT(var_RED_RADIOUS_Y);
        tmp_sub_expr_left_5 = var_RED_RADIOUS_Y;
        CHECK_OBJECT(var_RED_WIDTH);
        tmp_sub_expr_right_5 = var_RED_WIDTH;
        tmp_assign_source_32 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_BLUE_RADIOUS_Y == NULL);
        var_BLUE_RADIOUS_Y = tmp_assign_source_32;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_truediv_expr_left_9;
        PyObject *tmp_truediv_expr_right_9;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[39]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_M);
        tmp_truediv_expr_left_9 = var_M;
        CHECK_OBJECT(par_SIZE);
        tmp_truediv_expr_right_9 = par_SIZE;
        tmp_args_element_value_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_9, tmp_truediv_expr_right_9);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 249;
        tmp_assign_source_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_grid_size_w == NULL);
        var_grid_size_w = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_truediv_expr_left_10;
        PyObject *tmp_truediv_expr_right_10;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[39]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_truediv_expr_left_10 = var_N;
        CHECK_OBJECT(par_SIZE);
        tmp_truediv_expr_right_10 = par_SIZE;
        tmp_args_element_value_13 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_10, tmp_truediv_expr_right_10);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 250;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 250;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_grid_size_h == NULL);
        var_grid_size_h = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(par_PR);
        tmp_assign_source_35 = par_PR;
        assert(var_RED_WIDTH == NULL);
        Py_INCREF(tmp_assign_source_35);
        var_RED_WIDTH = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(par_PB);
        tmp_assign_source_36 = par_PB;
        assert(var_BLUE_WIDTH == NULL);
        Py_INCREF(tmp_assign_source_36);
        var_BLUE_WIDTH = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_truediv_expr_left_11;
        PyObject *tmp_truediv_expr_right_11;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[39]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_M);
        tmp_truediv_expr_left_11 = var_M;
        tmp_mult_expr_left_5 = mod_consts[57];
        CHECK_OBJECT(par_SIZE);
        tmp_mult_expr_right_5 = par_SIZE;
        tmp_truediv_expr_right_11 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        if (tmp_truediv_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_11, tmp_truediv_expr_right_11);
        Py_DECREF(tmp_truediv_expr_right_11);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 255;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_RED_RADIOUS_X == NULL);
        var_RED_RADIOUS_X = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_truediv_expr_left_12;
        PyObject *tmp_truediv_expr_right_12;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[39]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_truediv_expr_left_12 = var_N;
        tmp_mult_expr_left_6 = mod_consts[57];
        CHECK_OBJECT(par_SIZE);
        tmp_mult_expr_right_6 = par_SIZE;
        tmp_truediv_expr_right_12 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        if (tmp_truediv_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_12, tmp_truediv_expr_right_12);
        Py_DECREF(tmp_truediv_expr_right_12);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 256;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_RED_RADIOUS_Y == NULL);
        var_RED_RADIOUS_Y = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        CHECK_OBJECT(var_RED_RADIOUS_X);
        tmp_sub_expr_left_6 = var_RED_RADIOUS_X;
        CHECK_OBJECT(var_RED_WIDTH);
        tmp_sub_expr_right_6 = var_RED_WIDTH;
        tmp_assign_source_39 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_BLUE_RADIOUS_X == NULL);
        var_BLUE_RADIOUS_X = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_sub_expr_left_7;
        PyObject *tmp_sub_expr_right_7;
        CHECK_OBJECT(var_RED_RADIOUS_Y);
        tmp_sub_expr_left_7 = var_RED_RADIOUS_Y;
        CHECK_OBJECT(var_RED_WIDTH);
        tmp_sub_expr_right_7 = var_RED_WIDTH;
        tmp_assign_source_40 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_BLUE_RADIOUS_Y == NULL);
        var_BLUE_RADIOUS_Y = tmp_assign_source_40;
    }
    branch_end_3:;
    branch_end_2:;
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_LIST_EMPTY(0);
        assert(var_MaxDRows == NULL);
        var_MaxDRows = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_LIST_EMPTY(0);
        assert(var_MaxD == NULL);
        var_MaxD = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_LIST_EMPTY(0);
        assert(var_avg == NULL);
        var_avg = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[28];
        assert(var_x == NULL);
        Py_INCREF(tmp_assign_source_44);
        var_x = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[28];
        assert(var_y == NULL);
        Py_INCREF(tmp_assign_source_45);
        var_y = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[28];
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_46;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[28];
        assert(var_d == NULL);
        Py_INCREF(tmp_assign_source_47);
        var_d = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_LIST_EMPTY(0);
        assert(var_mag_red_blue == NULL);
        var_mag_red_blue = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_LIST_EMPTY(0);
        assert(var_mag_rest == NULL);
        var_mag_rest = tmp_assign_source_49;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        if (var_N == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 275;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_4 = var_N;
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 275;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_4 = var_M;
        tmp_condition_result_4 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_50;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_xrange_low_3;
        PyObject *tmp_xrange_high_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_sub_expr_left_8;
        PyObject *tmp_sub_expr_right_8;
        PyObject *tmp_xrange_step_1;
        tmp_xrange_low_3 = mod_consts[28];
        if (var_N == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 276;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_8 = var_N;
        CHECK_OBJECT(var_grid_size_h);
        tmp_sub_expr_right_8 = var_grid_size_h;
        tmp_add_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[31];
        tmp_xrange_high_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_xrange_high_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_grid_size_h);
        tmp_xrange_step_1 = var_grid_size_h;
        tmp_iter_arg_4 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_3, tmp_xrange_high_3, tmp_xrange_step_1);
        Py_DECREF(tmp_xrange_high_3);
        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_50 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_50;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_51 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_51 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                exception_lineno = 276;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_52 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_52;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_xrange_low_4;
        PyObject *tmp_xrange_high_4;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_sub_expr_left_9;
        PyObject *tmp_sub_expr_right_9;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_xrange_step_2;
        if (par_K == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_xrange_low_4 = par_K;
        if (par_K == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_left_3 = par_K;
        if (var_N == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_add_expr_right_3 = var_N;
        tmp_sub_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_sub_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_grid_size_h == NULL) {
            Py_DECREF(tmp_sub_expr_left_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_sub_expr_right_9 = var_grid_size_h;
        tmp_add_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
        Py_DECREF(tmp_sub_expr_left_9);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_add_expr_right_2 = mod_consts[31];
        tmp_xrange_high_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_xrange_high_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_grid_size_h == NULL) {
            Py_DECREF(tmp_xrange_high_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_xrange_step_2 = var_grid_size_h;
        tmp_iter_arg_5 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_4, tmp_xrange_high_4, tmp_xrange_step_2);
        Py_DECREF(tmp_xrange_high_4);
        if (tmp_iter_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_53 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_54 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_54 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                exception_lineno = 277;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_55 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_55;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_iadd_expr_left_1;
        nuitka_digit tmp_iadd_expr_right_1;
        if (var_grid_cell_num == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 278;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_iadd_expr_left_1 = var_grid_cell_num;
        tmp_iadd_expr_right_1 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        assert(!(tmp_result == false));
        tmp_assign_source_56 = tmp_iadd_expr_left_1;
        var_grid_cell_num = tmp_assign_source_56;

    }
    Py_XDECREF(var_AVG_RED);
    var_AVG_RED = NULL;

    Py_XDECREF(var_AVG_BLUE);
    var_AVG_BLUE = NULL;

    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[28];
        {
            PyObject *old = var_mag_sum_red;
            var_mag_sum_red = tmp_assign_source_57;
            Py_INCREF(var_mag_sum_red);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[28];
        {
            PyObject *old = var_mag_sum_blue;
            var_mag_sum_blue = tmp_assign_source_58;
            Py_INCREF(var_mag_sum_blue);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(var_D);
    var_D = NULL;

    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_iadd_expr_left_2;
        nuitka_digit tmp_iadd_expr_right_2;
        if (var_d == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 284;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_iadd_expr_left_2 = var_d;
        tmp_iadd_expr_right_2 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        assert(!(tmp_result == false));
        tmp_assign_source_59 = tmp_iadd_expr_left_2;
        var_d = tmp_assign_source_59;

    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        CHECK_OBJECT(var_channel_array);
        tmp_expression_value_19 = var_channel_array;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_start_value_1 = var_r;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_add_expr_left_4 = var_r;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_add_expr_right_4 = var_grid_size_w;
        tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_stop_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_tuple_element_2 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_tuple_element_2 == NULL));
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_start_value_2;
            PyObject *tmp_stop_value_2;
            PyObject *tmp_add_expr_left_5;
            PyObject *tmp_add_expr_right_5;
            PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_c);
            tmp_start_value_2 = var_c;
            CHECK_OBJECT(var_c);
            tmp_add_expr_left_5 = var_c;
            if (var_grid_size_h == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 286;
                type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_add_expr_right_5 = var_grid_size_h;
            tmp_stop_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
            if (tmp_stop_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = MAKE_SLICE_OBJECT2(tmp_start_value_2, tmp_stop_value_2);
            Py_DECREF(tmp_stop_value_2);
            assert(!(tmp_tuple_element_2 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_60 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_grid_cell;
            var_grid_cell = tmp_assign_source_60;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_16;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_grid_cell);
        tmp_args_element_value_16 = var_grid_cell;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 288;
        tmp_iter_arg_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[103], tmp_args_element_value_16);
        if (tmp_iter_arg_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_61 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_62 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_62 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 288;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_62;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_63 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_63 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 288;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_63;
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

                    type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                    exception_lineno = 288;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 288;
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_64 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_mag;
            var_mag = tmp_assign_source_64;
            Py_INCREF(var_mag);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_65;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_65 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_phase;
            var_phase = tmp_assign_source_65;
            Py_INCREF(var_phase);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_truediv_expr_left_13;
        PyObject *tmp_truediv_expr_right_13;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_grid_cell);
        tmp_expression_value_21 = var_grid_cell;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[12]);
        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_subscript_value_3 = mod_consts[28];
        tmp_truediv_expr_left_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_3, 0);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_truediv_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_truediv_expr_right_13 = mod_consts[57];
        tmp_int_arg_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_13, tmp_truediv_expr_right_13);
        Py_DECREF(tmp_truediv_expr_left_13);
        if (tmp_int_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_66 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_cx;
            var_cx = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_truediv_expr_left_14;
        PyObject *tmp_truediv_expr_right_14;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_grid_cell);
        tmp_expression_value_23 = var_grid_cell;
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[12]);
        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_subscript_value_4 = mod_consts[31];
        tmp_truediv_expr_left_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_4, 1);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_truediv_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_truediv_expr_right_14 = mod_consts[57];
        tmp_int_arg_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_14, tmp_truediv_expr_right_14);
        Py_DECREF(tmp_truediv_expr_left_14);
        if (tmp_int_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_67 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_cy;
            var_cy = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_mag);
        tmp_args_element_value_17 = var_mag;
        if (var_RED_RADIOUS_X == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_18 = var_RED_RADIOUS_X;
        if (var_RED_RADIOUS_Y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_19 = var_RED_RADIOUS_Y;
        if (var_RED_WIDTH == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_20 = var_RED_WIDTH;
        CHECK_OBJECT(var_cx);
        tmp_args_element_value_21 = var_cx;
        CHECK_OBJECT(var_cy);
        tmp_args_element_value_22 = var_cy;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 294;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_23 = var_grid_size_w;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 294;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_24 = var_grid_size_h;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 293;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_17, call_args);
        }

        if (tmp_iter_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_68 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_68;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_69 = UNPACK_NEXT(tstate, tmp_unpack_5, 0, 2);
        if (tmp_assign_source_69 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 293;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_69;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_70 = UNPACK_NEXT(tstate, tmp_unpack_6, 1, 2);
        if (tmp_assign_source_70 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 293;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_70;
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

                    type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                    exception_lineno = 293;
                    goto try_except_handler_11;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 293;
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

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_7;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_71;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_71 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_red;
            var_red = tmp_assign_source_71;
            Py_INCREF(var_red);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_72;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_72 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_coord_red;
            var_coord_red = tmp_assign_source_72;
            Py_INCREF(var_coord_red);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_mag);
        tmp_args_element_value_25 = var_mag;
        if (var_BLUE_RADIOUS_X == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 295;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_args_element_value_26 = var_BLUE_RADIOUS_X;
        if (var_BLUE_RADIOUS_Y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 295;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_args_element_value_27 = var_BLUE_RADIOUS_Y;
        if (var_BLUE_WIDTH == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 295;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_args_element_value_28 = var_BLUE_WIDTH;
        CHECK_OBJECT(var_cx);
        tmp_args_element_value_29 = var_cx;
        CHECK_OBJECT(var_cy);
        tmp_args_element_value_30 = var_cy;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 296;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_args_element_value_31 = var_grid_size_w;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 296;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_args_element_value_32 = var_grid_size_h;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 295;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_32};
            tmp_iter_arg_8 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_18, call_args);
        }

        if (tmp_iter_arg_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_73 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
        Py_DECREF(tmp_iter_arg_8);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_73;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_74 = UNPACK_NEXT(tstate, tmp_unpack_7, 0, 2);
        if (tmp_assign_source_74 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 295;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_75 = UNPACK_NEXT(tstate, tmp_unpack_8, 1, 2);
        if (tmp_assign_source_75 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 295;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_75;
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

                    type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                    exception_lineno = 295;
                    goto try_except_handler_13;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 295;
            goto try_except_handler_13;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_12;
    // End of try:
    try_end_9:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_7;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_76;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_76 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_blue;
            var_blue = tmp_assign_source_76;
            Py_INCREF(var_blue);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_77;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_77 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_coord_blue;
            var_coord_blue = tmp_assign_source_77;
            Py_INCREF(var_coord_blue);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_truediv_expr_left_15;
        PyObject *tmp_truediv_expr_right_15;
        PyObject *tmp_sum_sequence_1;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(var_red);
        tmp_sum_sequence_1 = var_red;
        tmp_truediv_expr_left_15 = BUILTIN_SUM1(tstate, tmp_sum_sequence_1);
        if (tmp_truediv_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_red);
        tmp_len_arg_2 = var_red;
        tmp_truediv_expr_right_15 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_truediv_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_15);

            exception_lineno = 298;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_78 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_15, tmp_truediv_expr_right_15);
        Py_DECREF(tmp_truediv_expr_left_15);
        Py_DECREF(tmp_truediv_expr_right_15);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        assert(var_AVG_RED == NULL);
        var_AVG_RED = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_truediv_expr_left_16;
        PyObject *tmp_truediv_expr_right_16;
        PyObject *tmp_sum_sequence_2;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT(var_blue);
        tmp_sum_sequence_2 = var_blue;
        tmp_truediv_expr_left_16 = BUILTIN_SUM1(tstate, tmp_sum_sequence_2);
        if (tmp_truediv_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_blue);
        tmp_len_arg_3 = var_blue;
        tmp_truediv_expr_right_16 = BUILTIN_LEN(tstate, tmp_len_arg_3);
        if (tmp_truediv_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_16);

            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_79 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_16, tmp_truediv_expr_right_16);
        Py_DECREF(tmp_truediv_expr_left_16);
        Py_DECREF(tmp_truediv_expr_right_16);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        assert(var_AVG_BLUE == NULL);
        var_AVG_BLUE = tmp_assign_source_79;
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_33;
        if (var_avg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_24 = var_avg;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[33]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_AVG_RED);
        tmp_args_element_value_33 = var_AVG_RED;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 300;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_AVG_BLUE);
        tmp_cmp_expr_left_5 = var_AVG_BLUE;
        CHECK_OBJECT(var_AVG_RED);
        tmp_cmp_expr_right_5 = var_AVG_RED;
        tmp_condition_result_5 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_abs_arg_1;
        PyObject *tmp_sub_expr_left_10;
        PyObject *tmp_sub_expr_right_10;
        CHECK_OBJECT(var_AVG_BLUE);
        tmp_sub_expr_left_10 = var_AVG_BLUE;
        CHECK_OBJECT(var_AVG_RED);
        tmp_sub_expr_right_10 = var_AVG_RED;
        tmp_abs_arg_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_10, tmp_sub_expr_right_10);
        if (tmp_abs_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_80 = BUILTIN_ABS(tmp_abs_arg_1);
        Py_DECREF(tmp_abs_arg_1);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        assert(var_D == NULL);
        var_D = tmp_assign_source_80;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[28];
        assert(var_D == NULL);
        Py_INCREF(tmp_assign_source_81);
        var_D = tmp_assign_source_81;
    }
    branch_end_5:;
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_34;
        if (var_MaxD == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 307;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_25 = var_MaxD;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[33]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_D);
        tmp_args_element_value_34 = var_D;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 307;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_34);
        Py_DECREF(tmp_called_value_20);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_len_arg_4;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_subscript_value_8;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_cmp_expr_left_6 = var_i;
        if (var_sip_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_len_arg_4 = var_sip_cells;
        tmp_cmp_expr_right_6 = BUILTIN_LEN(tstate, tmp_len_arg_4);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_and_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (var_sip_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_27 = var_sip_cells;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_subscript_value_5 = var_i;
        tmp_expression_value_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_5);
        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_subscript_value_6 = mod_consts[28];
        tmp_cmp_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_6, 0);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (var_x == NULL) {
            Py_DECREF(tmp_cmp_expr_left_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_cmp_expr_right_7 = var_x;
        tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        if (var_sip_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_29 = var_sip_cells;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_subscript_value_7 = var_i;
        tmp_expression_value_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_7);
        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_subscript_value_8 = mod_consts[31];
        tmp_cmp_expr_left_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_8, 1);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (var_y == NULL) {
            Py_DECREF(tmp_cmp_expr_left_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_cmp_expr_right_8 = var_y;
        tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_6 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_6 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_tuple_element_3;
        if (var_mag_red_blue == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 311;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_30 = var_mag_red_blue;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[33]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_mag);
        tmp_tuple_element_3 = var_mag;
        tmp_args_element_value_35 = MAKE_TUPLE_EMPTY(10);
        PyTuple_SET_ITEM0(tmp_args_element_value_35, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_phase);
        tmp_tuple_element_3 = var_phase;
        PyTuple_SET_ITEM0(tmp_args_element_value_35, 1, tmp_tuple_element_3);
        CHECK_OBJECT(var_red);
        tmp_tuple_element_3 = var_red;
        PyTuple_SET_ITEM0(tmp_args_element_value_35, 2, tmp_tuple_element_3);
        CHECK_OBJECT(var_blue);
        tmp_tuple_element_3 = var_blue;
        PyTuple_SET_ITEM0(tmp_args_element_value_35, 3, tmp_tuple_element_3);
        CHECK_OBJECT(var_AVG_RED);
        tmp_tuple_element_3 = var_AVG_RED;
        PyTuple_SET_ITEM0(tmp_args_element_value_35, 4, tmp_tuple_element_3);
        CHECK_OBJECT(var_AVG_BLUE);
        tmp_tuple_element_3 = var_AVG_BLUE;
        PyTuple_SET_ITEM0(tmp_args_element_value_35, 5, tmp_tuple_element_3);
        CHECK_OBJECT(var_coord_red);
        tmp_tuple_element_3 = var_coord_red;
        PyTuple_SET_ITEM0(tmp_args_element_value_35, 6, tmp_tuple_element_3);
        CHECK_OBJECT(var_coord_blue);
        tmp_tuple_element_3 = var_coord_blue;
        PyTuple_SET_ITEM0(tmp_args_element_value_35, 7, tmp_tuple_element_3);
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 311;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_3 = var_x;
        PyTuple_SET_ITEM0(tmp_args_element_value_35, 8, tmp_tuple_element_3);
        if (var_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 311;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_3 = var_y;
        PyTuple_SET_ITEM0(tmp_args_element_value_35, 9, tmp_tuple_element_3);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_35);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 311;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_35);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 313;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_iadd_expr_left_3 = var_i;
        tmp_iadd_expr_right_3 = mod_consts[31];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_82 = tmp_iadd_expr_left_3;
        var_i = tmp_assign_source_82;

    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_tuple_element_4;
        if (var_mag_rest == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 315;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_31 = var_mag_rest;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[33]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_mag);
        tmp_tuple_element_4 = var_mag;
        tmp_args_element_value_36 = MAKE_TUPLE_EMPTY(8);
        PyTuple_SET_ITEM0(tmp_args_element_value_36, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_phase);
        tmp_tuple_element_4 = var_phase;
        PyTuple_SET_ITEM0(tmp_args_element_value_36, 1, tmp_tuple_element_4);
        CHECK_OBJECT(var_red);
        tmp_tuple_element_4 = var_red;
        PyTuple_SET_ITEM0(tmp_args_element_value_36, 2, tmp_tuple_element_4);
        CHECK_OBJECT(var_blue);
        tmp_tuple_element_4 = var_blue;
        PyTuple_SET_ITEM0(tmp_args_element_value_36, 3, tmp_tuple_element_4);
        CHECK_OBJECT(var_AVG_RED);
        tmp_tuple_element_4 = var_AVG_RED;
        PyTuple_SET_ITEM0(tmp_args_element_value_36, 4, tmp_tuple_element_4);
        CHECK_OBJECT(var_AVG_BLUE);
        tmp_tuple_element_4 = var_AVG_BLUE;
        PyTuple_SET_ITEM0(tmp_args_element_value_36, 5, tmp_tuple_element_4);
        CHECK_OBJECT(var_coord_red);
        tmp_tuple_element_4 = var_coord_red;
        PyTuple_SET_ITEM0(tmp_args_element_value_36, 6, tmp_tuple_element_4);
        CHECK_OBJECT(var_coord_blue);
        tmp_tuple_element_4 = var_coord_blue;
        PyTuple_SET_ITEM0(tmp_args_element_value_36, 7, tmp_tuple_element_4);
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 315;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        if (var_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 317;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_iadd_expr_left_4 = var_y;
        tmp_iadd_expr_right_4 = mod_consts[31];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_83 = tmp_iadd_expr_left_4;
        var_y = tmp_assign_source_83;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 277;
        type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_6;
    // End of try:
    try_end_11:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_38;
        if (var_MaxDRows == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 318;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_32 = var_MaxDRows;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[33]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_24 = LOOKUP_BUILTIN(mod_consts[118]);
        assert(tmp_called_value_24 != NULL);
        if (var_MaxD == NULL) {
            Py_DECREF(tmp_called_value_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 318;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_38 = var_MaxD;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 318;
        tmp_args_element_value_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_38);
        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 318;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 318;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_37);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_delsubscr_subscript_1;
        if (var_MaxD == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 319;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_delsubscr_target_1 = var_MaxD;
        tmp_delsubscr_subscript_1 = mod_consts[119];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_iadd_expr_left_5;
        PyObject *tmp_iadd_expr_right_5;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 320;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_iadd_expr_left_5 = var_x;
        tmp_iadd_expr_right_5 = mod_consts[31];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_84 = tmp_iadd_expr_left_5;
        var_x = tmp_assign_source_84;

    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[28];
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_85;
            Py_INCREF(var_y);
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 276;
        type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_expression_value_33 = par_self;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[120]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        if (var_mag_red_blue == NULL) {
            Py_DECREF(tmp_called_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_args_element_value_39 = var_mag_red_blue;
        if (var_mag_rest == NULL) {
            Py_DECREF(tmp_called_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_args_element_value_40 = var_mag_rest;
        if (var_MaxDRows == NULL) {
            Py_DECREF(tmp_called_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_args_element_value_41 = var_MaxDRows;
        if (var_sip_cells == NULL) {
            Py_DECREF(tmp_called_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_args_element_value_42 = var_sip_cells;
        if (var_grid_size_w == NULL) {
            Py_DECREF(tmp_called_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_args_element_value_43 = var_grid_size_w;
        if (var_grid_size_h == NULL) {
            Py_DECREF(tmp_called_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 324;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_args_element_value_44 = var_grid_size_h;
        CHECK_OBJECT(par_copt);
        tmp_args_element_value_45 = par_copt;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 323;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45};
            tmp_iter_arg_9 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_called_value_25);
        if (tmp_iter_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_86 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        assert(tmp_tuple_unpack_5__source_iter == NULL);
        tmp_tuple_unpack_5__source_iter = tmp_assign_source_86;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_87 = UNPACK_NEXT(tstate, tmp_unpack_9, 0, 3);
        if (tmp_assign_source_87 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 323;
            goto try_except_handler_15;
        }
        assert(tmp_tuple_unpack_5__element_1 == NULL);
        tmp_tuple_unpack_5__element_1 = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_88 = UNPACK_NEXT(tstate, tmp_unpack_10, 1, 3);
        if (tmp_assign_source_88 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 323;
            goto try_except_handler_15;
        }
        assert(tmp_tuple_unpack_5__element_2 == NULL);
        tmp_tuple_unpack_5__element_2 = tmp_assign_source_88;
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_89 = UNPACK_NEXT(tstate, tmp_unpack_11, 2, 3);
        if (tmp_assign_source_89 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 323;
            goto try_except_handler_15;
        }
        assert(tmp_tuple_unpack_5__element_3 == NULL);
        tmp_tuple_unpack_5__element_3 = tmp_assign_source_89;
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

                    type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                    exception_lineno = 323;
                    goto try_except_handler_15;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[42];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 323;
            goto try_except_handler_15;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_14;
    // End of try:
    try_end_13:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_3);
    tmp_tuple_unpack_5__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_90;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_90 = tmp_tuple_unpack_5__element_1;
        assert(var_m == NULL);
        Py_INCREF(tmp_assign_source_90);
        var_m = tmp_assign_source_90;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_91;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_91 = tmp_tuple_unpack_5__element_2;
        assert(var_unm == NULL);
        Py_INCREF(tmp_assign_source_91);
        var_unm = tmp_assign_source_91;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_92;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_3);
        tmp_assign_source_92 = tmp_tuple_unpack_5__element_3;
        assert(var_m_cells == NULL);
        Py_INCREF(tmp_assign_source_92);
        var_m_cells = tmp_assign_source_92;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_3);
    tmp_tuple_unpack_5__element_3 = NULL;

    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_args_element_value_50;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 325;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_34 = par_self;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[121]);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_m);
        tmp_args_element_value_46 = var_m;
        CHECK_OBJECT(var_unm);
        tmp_args_element_value_47 = var_unm;
        if (var_grid_size_w == NULL) {
            Py_DECREF(tmp_called_value_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 325;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_48 = var_grid_size_w;
        if (var_grid_size_h == NULL) {
            Py_DECREF(tmp_called_value_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 325;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_49 = var_grid_size_h;
        if (var_sip_cells == NULL) {
            Py_DECREF(tmp_called_value_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 325;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_50 = var_sip_cells;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 325;
        {
            PyObject *call_args[] = {tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49, tmp_args_element_value_50};
            tmp_assign_source_93 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_called_value_26);
        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_img == NULL);
        var_img = tmp_assign_source_93;
    }
    {
        PyObject *tmp_tuple_element_5;
        CHECK_OBJECT(var_img);
        tmp_tuple_element_5 = var_img;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_5);
        if (par_K == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 327;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_5 = par_K;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_5);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        goto frame_return_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        if (var_N == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 329;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_9 = var_N;
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 329;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_9 = var_M;
        tmp_condition_result_7 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_xrange_low_5;
        PyObject *tmp_xrange_high_5;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_sub_expr_left_11;
        PyObject *tmp_sub_expr_right_11;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_xrange_step_3;
        CHECK_OBJECT(par_K);
        tmp_xrange_low_5 = par_K;
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 331;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_7 = var_M;
        CHECK_OBJECT(par_K);
        tmp_add_expr_right_7 = par_K;
        tmp_sub_expr_left_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
        if (tmp_sub_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_grid_size_h);
        tmp_sub_expr_right_11 = var_grid_size_h;
        tmp_add_expr_left_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_11, tmp_sub_expr_right_11);
        Py_DECREF(tmp_sub_expr_left_11);
        if (tmp_add_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_6 = mod_consts[31];
        tmp_xrange_high_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_left_6);
        if (tmp_xrange_high_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_grid_size_h);
        tmp_xrange_step_3 = var_grid_size_h;
        tmp_iter_arg_10 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_5, tmp_xrange_high_5, tmp_xrange_step_3);
        Py_DECREF(tmp_xrange_high_5);
        if (tmp_iter_arg_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_94 = MAKE_ITERATOR(tstate, tmp_iter_arg_10);
        Py_DECREF(tmp_iter_arg_10);
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_5__for_iterator == NULL);
        tmp_for_loop_5__for_iterator = tmp_assign_source_94;
    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_95;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_5 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_95 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_95 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                exception_lineno = 331;
                goto try_except_handler_16;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_95;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_96;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_assign_source_96 = tmp_for_loop_5__iter_value;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_96;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_iter_arg_11;
        PyObject *tmp_xrange_low_6;
        PyObject *tmp_xrange_high_6;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        PyObject *tmp_sub_expr_left_12;
        PyObject *tmp_sub_expr_right_12;
        PyObject *tmp_xrange_step_4;
        tmp_xrange_low_6 = mod_consts[28];
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 332;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_sub_expr_left_12 = var_M;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 332;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_sub_expr_right_12 = var_grid_size_h;
        tmp_add_expr_left_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_12, tmp_sub_expr_right_12);
        if (tmp_add_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_add_expr_right_8 = mod_consts[31];
        tmp_xrange_high_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_8, tmp_add_expr_right_8);
        Py_DECREF(tmp_add_expr_left_8);
        if (tmp_xrange_high_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        if (var_grid_size_h == NULL) {
            Py_DECREF(tmp_xrange_high_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 332;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_xrange_step_4 = var_grid_size_h;
        tmp_iter_arg_11 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_6, tmp_xrange_high_6, tmp_xrange_step_4);
        Py_DECREF(tmp_xrange_high_6);
        if (tmp_iter_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_assign_source_97 = MAKE_ITERATOR(tstate, tmp_iter_arg_11);
        Py_DECREF(tmp_iter_arg_11);
        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_for_loop_6__for_iterator;
            tmp_for_loop_6__for_iterator = tmp_assign_source_97;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_98;
        CHECK_OBJECT(tmp_for_loop_6__for_iterator);
        tmp_next_source_6 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_98 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_98 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                exception_lineno = 332;
                goto try_except_handler_17;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_98;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_99;
        CHECK_OBJECT(tmp_for_loop_6__iter_value);
        tmp_assign_source_99 = tmp_for_loop_6__iter_value;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_99;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_iadd_expr_left_6;
        nuitka_digit tmp_iadd_expr_right_6;
        if (var_grid_cell_num == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 333;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_iadd_expr_left_6 = var_grid_cell_num;
        tmp_iadd_expr_right_6 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
        assert(!(tmp_result == false));
        tmp_assign_source_100 = tmp_iadd_expr_left_6;
        var_grid_cell_num = tmp_assign_source_100;

    }
    Py_XDECREF(var_AVG_RED);
    var_AVG_RED = NULL;

    Py_XDECREF(var_AVG_BLUE);
    var_AVG_BLUE = NULL;

    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[28];
        {
            PyObject *old = var_mag_sum_red;
            var_mag_sum_red = tmp_assign_source_101;
            Py_INCREF(var_mag_sum_red);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[28];
        {
            PyObject *old = var_mag_sum_blue;
            var_mag_sum_blue = tmp_assign_source_102;
            Py_INCREF(var_mag_sum_blue);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(var_D);
    var_D = NULL;

    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_iadd_expr_left_7;
        nuitka_digit tmp_iadd_expr_right_7;
        if (var_d == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 339;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_iadd_expr_left_7 = var_d;
        tmp_iadd_expr_right_7 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
        assert(!(tmp_result == false));
        tmp_assign_source_103 = tmp_iadd_expr_left_7;
        var_d = tmp_assign_source_103;

    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_start_value_3;
        PyObject *tmp_stop_value_3;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        CHECK_OBJECT(var_channel_array);
        tmp_expression_value_35 = var_channel_array;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 341;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_start_value_3 = var_r;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 341;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_add_expr_left_9 = var_r;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 341;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_add_expr_right_9 = var_grid_size_w;
        tmp_stop_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        if (tmp_stop_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_tuple_element_6 = MAKE_SLICE_OBJECT2(tmp_start_value_3, tmp_stop_value_3);
        Py_DECREF(tmp_stop_value_3);
        assert(!(tmp_tuple_element_6 == NULL));
        tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_start_value_4;
            PyObject *tmp_stop_value_4;
            PyObject *tmp_add_expr_left_10;
            PyObject *tmp_add_expr_right_10;
            PyTuple_SET_ITEM(tmp_subscript_value_9, 0, tmp_tuple_element_6);
            CHECK_OBJECT(var_c);
            tmp_start_value_4 = var_c;
            CHECK_OBJECT(var_c);
            tmp_add_expr_left_10 = var_c;
            if (var_grid_size_h == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 341;
                type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }

            tmp_add_expr_right_10 = var_grid_size_h;
            tmp_stop_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
            if (tmp_stop_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_tuple_element_6 = MAKE_SLICE_OBJECT2(tmp_start_value_4, tmp_stop_value_4);
            Py_DECREF(tmp_stop_value_4);
            assert(!(tmp_tuple_element_6 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_9, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_subscript_value_9);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assign_source_104 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_assign_source_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = var_grid_cell;
            var_grid_cell = tmp_assign_source_104;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_iter_arg_12;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_51;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 343;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_grid_cell);
        tmp_args_element_value_51 = var_grid_cell;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 343;
        tmp_iter_arg_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[103], tmp_args_element_value_51);
        if (tmp_iter_arg_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_assign_source_105 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_12);
        Py_DECREF(tmp_iter_arg_12);
        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__source_iter;
            tmp_tuple_unpack_6__source_iter = tmp_assign_source_105;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_106 = UNPACK_NEXT(tstate, tmp_unpack_12, 0, 2);
        if (tmp_assign_source_106 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 343;
            goto try_except_handler_19;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_1;
            tmp_tuple_unpack_6__element_1 = tmp_assign_source_106;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_107 = UNPACK_NEXT(tstate, tmp_unpack_13, 1, 2);
        if (tmp_assign_source_107 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 343;
            goto try_except_handler_19;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_2;
            tmp_tuple_unpack_6__element_2 = tmp_assign_source_107;
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

                    type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                    exception_lineno = 343;
                    goto try_except_handler_19;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 343;
            goto try_except_handler_19;
        }
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_18;
    // End of try:
    try_end_15:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_17;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    {
        PyObject *tmp_assign_source_108;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
        tmp_assign_source_108 = tmp_tuple_unpack_6__element_1;
        {
            PyObject *old = var_mag;
            var_mag = tmp_assign_source_108;
            Py_INCREF(var_mag);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_109;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
        tmp_assign_source_109 = tmp_tuple_unpack_6__element_2;
        {
            PyObject *old = var_phase;
            var_phase = tmp_assign_source_109;
            Py_INCREF(var_phase);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;

    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_truediv_expr_left_17;
        PyObject *tmp_truediv_expr_right_17;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(var_grid_cell);
        tmp_expression_value_37 = var_grid_cell;
        tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[12]);
        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_subscript_value_10 = mod_consts[28];
        tmp_truediv_expr_left_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_36, tmp_subscript_value_10, 0);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_truediv_expr_left_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_truediv_expr_right_17 = mod_consts[57];
        tmp_int_arg_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_17, tmp_truediv_expr_right_17);
        Py_DECREF(tmp_truediv_expr_left_17);
        if (tmp_int_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_110 = PyNumber_Int(tmp_int_arg_3);
        Py_DECREF(tmp_int_arg_3);
        if (tmp_assign_source_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = var_cx;
            var_cx = tmp_assign_source_110;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_int_arg_4;
        PyObject *tmp_truediv_expr_left_18;
        PyObject *tmp_truediv_expr_right_18;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_11;
        CHECK_OBJECT(var_grid_cell);
        tmp_expression_value_39 = var_grid_cell;
        tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[12]);
        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_subscript_value_11 = mod_consts[31];
        tmp_truediv_expr_left_18 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_38, tmp_subscript_value_11, 1);
        Py_DECREF(tmp_expression_value_38);
        if (tmp_truediv_expr_left_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_truediv_expr_right_18 = mod_consts[57];
        tmp_int_arg_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_18, tmp_truediv_expr_right_18);
        Py_DECREF(tmp_truediv_expr_left_18);
        if (tmp_int_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_111 = PyNumber_Int(tmp_int_arg_4);
        Py_DECREF(tmp_int_arg_4);
        if (tmp_assign_source_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = var_cy;
            var_cy = tmp_assign_source_111;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_iter_arg_13;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        CHECK_OBJECT(var_mag);
        tmp_args_element_value_52 = var_mag;
        if (var_RED_RADIOUS_X == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 348;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_args_element_value_53 = var_RED_RADIOUS_X;
        if (var_RED_RADIOUS_Y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 348;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_args_element_value_54 = var_RED_RADIOUS_Y;
        if (var_RED_WIDTH == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 348;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_args_element_value_55 = var_RED_WIDTH;
        CHECK_OBJECT(var_cx);
        tmp_args_element_value_56 = var_cx;
        CHECK_OBJECT(var_cy);
        tmp_args_element_value_57 = var_cy;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 349;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_args_element_value_58 = var_grid_size_w;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 349;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_args_element_value_59 = var_grid_size_h;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 348;
        {
            PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56, tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_59};
            tmp_iter_arg_13 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_27, call_args);
        }

        if (tmp_iter_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_assign_source_112 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_13);
        Py_DECREF(tmp_iter_arg_13);
        if (tmp_assign_source_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__source_iter;
            tmp_tuple_unpack_7__source_iter = tmp_assign_source_112;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_113 = UNPACK_NEXT(tstate, tmp_unpack_14, 0, 2);
        if (tmp_assign_source_113 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 348;
            goto try_except_handler_21;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_1;
            tmp_tuple_unpack_7__element_1 = tmp_assign_source_113;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_15 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_114 = UNPACK_NEXT(tstate, tmp_unpack_15, 1, 2);
        if (tmp_assign_source_114 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 348;
            goto try_except_handler_21;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_2;
            tmp_tuple_unpack_7__element_2 = tmp_assign_source_114;
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

                    type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                    exception_lineno = 348;
                    goto try_except_handler_21;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 348;
            goto try_except_handler_21;
        }
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_20;
    // End of try:
    try_end_17:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_17;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    {
        PyObject *tmp_assign_source_115;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_assign_source_115 = tmp_tuple_unpack_7__element_1;
        {
            PyObject *old = var_red;
            var_red = tmp_assign_source_115;
            Py_INCREF(var_red);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_116;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
        tmp_assign_source_116 = tmp_tuple_unpack_7__element_2;
        {
            PyObject *old = var_coord_red;
            var_coord_red = tmp_assign_source_116;
            Py_INCREF(var_coord_red);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_iter_arg_14;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_args_element_value_67;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(var_mag);
        tmp_args_element_value_60 = var_mag;
        if (var_BLUE_RADIOUS_X == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_args_element_value_61 = var_BLUE_RADIOUS_X;
        if (var_BLUE_RADIOUS_Y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_args_element_value_62 = var_BLUE_RADIOUS_Y;
        if (var_BLUE_WIDTH == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_args_element_value_63 = var_BLUE_WIDTH;
        CHECK_OBJECT(var_cx);
        tmp_args_element_value_64 = var_cx;
        CHECK_OBJECT(var_cy);
        tmp_args_element_value_65 = var_cy;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 351;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_args_element_value_66 = var_grid_size_w;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 351;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_args_element_value_67 = var_grid_size_h;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 350;
        {
            PyObject *call_args[] = {tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67};
            tmp_iter_arg_14 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_28, call_args);
        }

        if (tmp_iter_arg_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_assign_source_117 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_14);
        Py_DECREF(tmp_iter_arg_14);
        if (tmp_assign_source_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__source_iter;
            tmp_tuple_unpack_8__source_iter = tmp_assign_source_117;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_16 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_118 = UNPACK_NEXT(tstate, tmp_unpack_16, 0, 2);
        if (tmp_assign_source_118 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 350;
            goto try_except_handler_23;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_1;
            tmp_tuple_unpack_8__element_1 = tmp_assign_source_118;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_17 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_119 = UNPACK_NEXT(tstate, tmp_unpack_17, 1, 2);
        if (tmp_assign_source_119 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 350;
            goto try_except_handler_23;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_2;
            tmp_tuple_unpack_8__element_2 = tmp_assign_source_119;
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

                    type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                    exception_lineno = 350;
                    goto try_except_handler_23;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 350;
            goto try_except_handler_23;
        }
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
    Py_DECREF(tmp_tuple_unpack_8__source_iter);
    tmp_tuple_unpack_8__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_22;
    // End of try:
    try_end_19:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_8__element_1);
    tmp_tuple_unpack_8__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_2);
    tmp_tuple_unpack_8__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_17;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
    Py_DECREF(tmp_tuple_unpack_8__source_iter);
    tmp_tuple_unpack_8__source_iter = NULL;
    {
        PyObject *tmp_assign_source_120;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_1);
        tmp_assign_source_120 = tmp_tuple_unpack_8__element_1;
        {
            PyObject *old = var_blue;
            var_blue = tmp_assign_source_120;
            Py_INCREF(var_blue);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_1);
    tmp_tuple_unpack_8__element_1 = NULL;

    {
        PyObject *tmp_assign_source_121;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_2);
        tmp_assign_source_121 = tmp_tuple_unpack_8__element_2;
        {
            PyObject *old = var_coord_blue;
            var_coord_blue = tmp_assign_source_121;
            Py_INCREF(var_coord_blue);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_2);
    tmp_tuple_unpack_8__element_2 = NULL;

    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_truediv_expr_left_19;
        PyObject *tmp_truediv_expr_right_19;
        PyObject *tmp_sum_sequence_3;
        PyObject *tmp_len_arg_5;
        CHECK_OBJECT(var_red);
        tmp_sum_sequence_3 = var_red;
        tmp_truediv_expr_left_19 = BUILTIN_SUM1(tstate, tmp_sum_sequence_3);
        if (tmp_truediv_expr_left_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        CHECK_OBJECT(var_red);
        tmp_len_arg_5 = var_red;
        tmp_truediv_expr_right_19 = BUILTIN_LEN(tstate, tmp_len_arg_5);
        if (tmp_truediv_expr_right_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_19);

            exception_lineno = 353;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_122 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_19, tmp_truediv_expr_right_19);
        Py_DECREF(tmp_truediv_expr_left_19);
        Py_DECREF(tmp_truediv_expr_right_19);
        if (tmp_assign_source_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        assert(var_AVG_RED == NULL);
        var_AVG_RED = tmp_assign_source_122;
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_truediv_expr_left_20;
        PyObject *tmp_truediv_expr_right_20;
        PyObject *tmp_sum_sequence_4;
        PyObject *tmp_len_arg_6;
        CHECK_OBJECT(var_blue);
        tmp_sum_sequence_4 = var_blue;
        tmp_truediv_expr_left_20 = BUILTIN_SUM1(tstate, tmp_sum_sequence_4);
        if (tmp_truediv_expr_left_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        CHECK_OBJECT(var_blue);
        tmp_len_arg_6 = var_blue;
        tmp_truediv_expr_right_20 = BUILTIN_LEN(tstate, tmp_len_arg_6);
        if (tmp_truediv_expr_right_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_20);

            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_123 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_20, tmp_truediv_expr_right_20);
        Py_DECREF(tmp_truediv_expr_left_20);
        Py_DECREF(tmp_truediv_expr_right_20);
        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        assert(var_AVG_BLUE == NULL);
        var_AVG_BLUE = tmp_assign_source_123;
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_68;
        if (var_avg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 355;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_expression_value_40 = var_avg;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[33]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        CHECK_OBJECT(var_AVG_RED);
        tmp_args_element_value_68 = var_AVG_RED;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 355;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_68);
        Py_DECREF(tmp_called_value_29);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_AVG_BLUE);
        tmp_cmp_expr_left_10 = var_AVG_BLUE;
        CHECK_OBJECT(var_AVG_RED);
        tmp_cmp_expr_right_10 = var_AVG_RED;
        tmp_condition_result_8 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_abs_arg_2;
        PyObject *tmp_sub_expr_left_13;
        PyObject *tmp_sub_expr_right_13;
        CHECK_OBJECT(var_AVG_BLUE);
        tmp_sub_expr_left_13 = var_AVG_BLUE;
        CHECK_OBJECT(var_AVG_RED);
        tmp_sub_expr_right_13 = var_AVG_RED;
        tmp_abs_arg_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_13, tmp_sub_expr_right_13);
        if (tmp_abs_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_124 = BUILTIN_ABS(tmp_abs_arg_2);
        Py_DECREF(tmp_abs_arg_2);
        if (tmp_assign_source_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        assert(var_D == NULL);
        var_D = tmp_assign_source_124;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[28];
        assert(var_D == NULL);
        Py_INCREF(tmp_assign_source_125);
        var_D = tmp_assign_source_125;
    }
    branch_end_8:;
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_69;
        if (var_MaxD == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_expression_value_41 = var_MaxD;
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[33]);
        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        CHECK_OBJECT(var_D);
        tmp_args_element_value_69 = var_D;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 362;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_69);
        Py_DECREF(tmp_called_value_30);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_len_arg_7;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_subscript_value_15;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_cmp_expr_left_11 = var_i;
        if (var_sip_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_len_arg_7 = var_sip_cells;
        tmp_cmp_expr_right_11 = BUILTIN_LEN(tstate, tmp_len_arg_7);
        if (tmp_cmp_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_and_left_value_3 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_right_11);
        if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        if (var_sip_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_expression_value_43 = var_sip_cells;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_subscript_value_12 = var_i;
        tmp_expression_value_42 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_12);
        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_subscript_value_13 = mod_consts[28];
        tmp_cmp_expr_left_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_42, tmp_subscript_value_13, 0);
        Py_DECREF(tmp_expression_value_42);
        if (tmp_cmp_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        if (var_x == NULL) {
            Py_DECREF(tmp_cmp_expr_left_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_cmp_expr_right_12 = var_x;
        tmp_and_left_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        Py_DECREF(tmp_cmp_expr_left_12);
        if (tmp_and_left_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        if (var_sip_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_expression_value_45 = var_sip_cells;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_subscript_value_14 = var_i;
        tmp_expression_value_44 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_14);
        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_subscript_value_15 = mod_consts[31];
        tmp_cmp_expr_left_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_44, tmp_subscript_value_15, 1);
        Py_DECREF(tmp_expression_value_44);
        if (tmp_cmp_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        if (var_y == NULL) {
            Py_DECREF(tmp_cmp_expr_left_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 365;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_cmp_expr_right_13 = var_y;
        tmp_and_right_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        Py_DECREF(tmp_cmp_expr_left_13);
        if (tmp_and_right_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_and_right_value_3 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_and_right_value_3 = tmp_and_left_value_4;
        and_end_4:;
        tmp_condition_result_9 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_9 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_tuple_element_7;
        if (var_mag_red_blue == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_expression_value_46 = var_mag_red_blue;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[33]);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        CHECK_OBJECT(var_mag);
        tmp_tuple_element_7 = var_mag;
        tmp_args_element_value_70 = MAKE_TUPLE_EMPTY(10);
        PyTuple_SET_ITEM0(tmp_args_element_value_70, 0, tmp_tuple_element_7);
        CHECK_OBJECT(var_phase);
        tmp_tuple_element_7 = var_phase;
        PyTuple_SET_ITEM0(tmp_args_element_value_70, 1, tmp_tuple_element_7);
        CHECK_OBJECT(var_red);
        tmp_tuple_element_7 = var_red;
        PyTuple_SET_ITEM0(tmp_args_element_value_70, 2, tmp_tuple_element_7);
        CHECK_OBJECT(var_blue);
        tmp_tuple_element_7 = var_blue;
        PyTuple_SET_ITEM0(tmp_args_element_value_70, 3, tmp_tuple_element_7);
        CHECK_OBJECT(var_AVG_RED);
        tmp_tuple_element_7 = var_AVG_RED;
        PyTuple_SET_ITEM0(tmp_args_element_value_70, 4, tmp_tuple_element_7);
        CHECK_OBJECT(var_AVG_BLUE);
        tmp_tuple_element_7 = var_AVG_BLUE;
        PyTuple_SET_ITEM0(tmp_args_element_value_70, 5, tmp_tuple_element_7);
        CHECK_OBJECT(var_coord_red);
        tmp_tuple_element_7 = var_coord_red;
        PyTuple_SET_ITEM0(tmp_args_element_value_70, 6, tmp_tuple_element_7);
        CHECK_OBJECT(var_coord_blue);
        tmp_tuple_element_7 = var_coord_blue;
        PyTuple_SET_ITEM0(tmp_args_element_value_70, 7, tmp_tuple_element_7);
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto tuple_build_exception_5;
        }

        tmp_tuple_element_7 = var_x;
        PyTuple_SET_ITEM0(tmp_args_element_value_70, 8, tmp_tuple_element_7);
        if (var_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto tuple_build_exception_5;
        }

        tmp_tuple_element_7 = var_y;
        PyTuple_SET_ITEM0(tmp_args_element_value_70, 9, tmp_tuple_element_7);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_70);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 366;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_70);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_70);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_iadd_expr_left_8;
        PyObject *tmp_iadd_expr_right_8;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 368;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_iadd_expr_left_8 = var_i;
        tmp_iadd_expr_right_8 = mod_consts[31];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_8, tmp_iadd_expr_right_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_126 = tmp_iadd_expr_left_8;
        var_i = tmp_assign_source_126;

    }
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_tuple_element_8;
        if (var_mag_rest == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 370;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_expression_value_47 = var_mag_rest;
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[33]);
        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        CHECK_OBJECT(var_mag);
        tmp_tuple_element_8 = var_mag;
        tmp_args_element_value_71 = MAKE_TUPLE_EMPTY(8);
        PyTuple_SET_ITEM0(tmp_args_element_value_71, 0, tmp_tuple_element_8);
        CHECK_OBJECT(var_phase);
        tmp_tuple_element_8 = var_phase;
        PyTuple_SET_ITEM0(tmp_args_element_value_71, 1, tmp_tuple_element_8);
        CHECK_OBJECT(var_red);
        tmp_tuple_element_8 = var_red;
        PyTuple_SET_ITEM0(tmp_args_element_value_71, 2, tmp_tuple_element_8);
        CHECK_OBJECT(var_blue);
        tmp_tuple_element_8 = var_blue;
        PyTuple_SET_ITEM0(tmp_args_element_value_71, 3, tmp_tuple_element_8);
        CHECK_OBJECT(var_AVG_RED);
        tmp_tuple_element_8 = var_AVG_RED;
        PyTuple_SET_ITEM0(tmp_args_element_value_71, 4, tmp_tuple_element_8);
        CHECK_OBJECT(var_AVG_BLUE);
        tmp_tuple_element_8 = var_AVG_BLUE;
        PyTuple_SET_ITEM0(tmp_args_element_value_71, 5, tmp_tuple_element_8);
        CHECK_OBJECT(var_coord_red);
        tmp_tuple_element_8 = var_coord_red;
        PyTuple_SET_ITEM0(tmp_args_element_value_71, 6, tmp_tuple_element_8);
        CHECK_OBJECT(var_coord_blue);
        tmp_tuple_element_8 = var_coord_blue;
        PyTuple_SET_ITEM0(tmp_args_element_value_71, 7, tmp_tuple_element_8);
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 370;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_71);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_71);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        Py_DECREF(tmp_call_result_13);
    }
    branch_end_9:;
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_iadd_expr_left_9;
        PyObject *tmp_iadd_expr_right_9;
        if (var_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 372;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_iadd_expr_left_9 = var_y;
        tmp_iadd_expr_right_9 = mod_consts[31];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_9, tmp_iadd_expr_right_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_127 = tmp_iadd_expr_left_9;
        var_y = tmp_assign_source_127;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 332;
        type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
        goto try_except_handler_17;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
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
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto try_except_handler_16;
    // End of try:
    try_end_21:;
    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_73;
        if (var_MaxDRows == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_expression_value_48 = var_MaxDRows;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[33]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_called_value_34 = LOOKUP_BUILTIN(mod_consts[118]);
        assert(tmp_called_value_34 != NULL);
        if (var_MaxD == NULL) {
            Py_DECREF(tmp_called_value_33);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_args_element_value_73 = var_MaxD;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 373;
        tmp_args_element_value_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_73);
        if (tmp_args_element_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 373;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_72);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_element_value_72);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_delsubscr_target_2;
        PyObject *tmp_delsubscr_subscript_2;
        if (var_MaxD == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 374;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_delsubscr_target_2 = var_MaxD;
        tmp_delsubscr_subscript_2 = mod_consts[119];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_2, tmp_delsubscr_subscript_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_iadd_expr_left_10;
        PyObject *tmp_iadd_expr_right_10;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_iadd_expr_left_10 = var_x;
        tmp_iadd_expr_right_10 = mod_consts[31];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_10, tmp_iadd_expr_right_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_assign_source_128 = tmp_iadd_expr_left_10;
        var_x = tmp_assign_source_128;

    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[28];
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_129;
            Py_INCREF(var_y);
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 331;
        type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_22;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
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
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_iter_arg_15;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_args_element_value_80;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_expression_value_49 = par_self;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[120]);
        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        if (var_mag_red_blue == NULL) {
            Py_DECREF(tmp_called_value_35);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_args_element_value_74 = var_mag_red_blue;
        if (var_mag_rest == NULL) {
            Py_DECREF(tmp_called_value_35);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_args_element_value_75 = var_mag_rest;
        if (var_MaxDRows == NULL) {
            Py_DECREF(tmp_called_value_35);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_args_element_value_76 = var_MaxDRows;
        if (var_sip_cells == NULL) {
            Py_DECREF(tmp_called_value_35);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_args_element_value_77 = var_sip_cells;
        if (var_grid_size_w == NULL) {
            Py_DECREF(tmp_called_value_35);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_args_element_value_78 = var_grid_size_w;
        if (var_grid_size_h == NULL) {
            Py_DECREF(tmp_called_value_35);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }

        tmp_args_element_value_79 = var_grid_size_h;
        CHECK_OBJECT(par_copt);
        tmp_args_element_value_80 = par_copt;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 378;
        {
            PyObject *call_args[] = {tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76, tmp_args_element_value_77, tmp_args_element_value_78, tmp_args_element_value_79, tmp_args_element_value_80};
            tmp_iter_arg_15 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_35, call_args);
        }

        Py_DECREF(tmp_called_value_35);
        if (tmp_iter_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        tmp_assign_source_130 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_15);
        Py_DECREF(tmp_iter_arg_15);
        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        assert(tmp_tuple_unpack_9__source_iter == NULL);
        tmp_tuple_unpack_9__source_iter = tmp_assign_source_130;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_18 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_131 = UNPACK_NEXT(tstate, tmp_unpack_18, 0, 3);
        if (tmp_assign_source_131 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 378;
            goto try_except_handler_25;
        }
        assert(tmp_tuple_unpack_9__element_1 == NULL);
        tmp_tuple_unpack_9__element_1 = tmp_assign_source_131;
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_19 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_132 = UNPACK_NEXT(tstate, tmp_unpack_19, 1, 3);
        if (tmp_assign_source_132 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 378;
            goto try_except_handler_25;
        }
        assert(tmp_tuple_unpack_9__element_2 == NULL);
        tmp_tuple_unpack_9__element_2 = tmp_assign_source_132;
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_20 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_133 = UNPACK_NEXT(tstate, tmp_unpack_20, 2, 3);
        if (tmp_assign_source_133 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 378;
            goto try_except_handler_25;
        }
        assert(tmp_tuple_unpack_9__element_3 == NULL);
        tmp_tuple_unpack_9__element_3 = tmp_assign_source_133;
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

                    type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                    exception_lineno = 378;
                    goto try_except_handler_25;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[42];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 378;
            goto try_except_handler_25;
        }
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_25:;
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

    goto try_except_handler_24;
    // End of try:
    try_end_23:;
    goto try_end_24;
    // Exception handler code:
    try_except_handler_24:;
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
    Py_XDECREF(tmp_tuple_unpack_9__element_3);
    tmp_tuple_unpack_9__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
    Py_DECREF(tmp_tuple_unpack_9__source_iter);
    tmp_tuple_unpack_9__source_iter = NULL;
    {
        PyObject *tmp_assign_source_134;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_1);
        tmp_assign_source_134 = tmp_tuple_unpack_9__element_1;
        assert(var_m == NULL);
        Py_INCREF(tmp_assign_source_134);
        var_m = tmp_assign_source_134;
    }
    Py_XDECREF(tmp_tuple_unpack_9__element_1);
    tmp_tuple_unpack_9__element_1 = NULL;

    {
        PyObject *tmp_assign_source_135;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_2);
        tmp_assign_source_135 = tmp_tuple_unpack_9__element_2;
        assert(var_unm == NULL);
        Py_INCREF(tmp_assign_source_135);
        var_unm = tmp_assign_source_135;
    }
    Py_XDECREF(tmp_tuple_unpack_9__element_2);
    tmp_tuple_unpack_9__element_2 = NULL;

    {
        PyObject *tmp_assign_source_136;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_3);
        tmp_assign_source_136 = tmp_tuple_unpack_9__element_3;
        assert(var_m_cells == NULL);
        Py_INCREF(tmp_assign_source_136);
        var_m_cells = tmp_assign_source_136;
    }
    Py_XDECREF(tmp_tuple_unpack_9__element_3);
    tmp_tuple_unpack_9__element_3 = NULL;

    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_args_element_value_85;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_50 = par_self;
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[121]);
        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_m);
        tmp_args_element_value_81 = var_m;
        CHECK_OBJECT(var_unm);
        tmp_args_element_value_82 = var_unm;
        if (var_grid_size_w == NULL) {
            Py_DECREF(tmp_called_value_36);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_83 = var_grid_size_w;
        if (var_grid_size_h == NULL) {
            Py_DECREF(tmp_called_value_36);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_84 = var_grid_size_h;
        if (var_sip_cells == NULL) {
            Py_DECREF(tmp_called_value_36);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_85 = var_sip_cells;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 380;
        {
            PyObject *call_args[] = {tmp_args_element_value_81, tmp_args_element_value_82, tmp_args_element_value_83, tmp_args_element_value_84, tmp_args_element_value_85};
            tmp_assign_source_137 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_36, call_args);
        }

        Py_DECREF(tmp_called_value_36);
        if (tmp_assign_source_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_img == NULL);
        var_img = tmp_assign_source_137;
    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_truediv_expr_left_21;
        PyObject *tmp_truediv_expr_right_21;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        tmp_called_value_37 = LOOKUP_BUILTIN(mod_consts[122]);
        assert(tmp_called_value_37 != NULL);
        tmp_args_element_value_86 = mod_consts[123];
        CHECK_OBJECT(var_m_cells);
        tmp_truediv_expr_left_21 = var_m_cells;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 381;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_7 = var_grid_size_w;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 381;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_7 = var_grid_size_h;
        tmp_truediv_expr_right_21 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        if (tmp_truediv_expr_right_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_87 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_21, tmp_truediv_expr_right_21);
        Py_DECREF(tmp_truediv_expr_right_21);
        if (tmp_args_element_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 381;
        {
            PyObject *call_args[] = {tmp_args_element_value_86, tmp_args_element_value_87};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_37, call_args);
        }

        Py_DECREF(tmp_args_element_value_87);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_tuple_element_9;
        CHECK_OBJECT(var_img);
        tmp_tuple_element_9 = var_img;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_9);
        CHECK_OBJECT(par_K);
        tmp_tuple_element_9 = par_K;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_9);
        goto frame_return_exit_1;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_iter_arg_16;
        PyObject *tmp_xrange_low_7;
        PyObject *tmp_xrange_high_7;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_sub_expr_left_14;
        PyObject *tmp_sub_expr_right_14;
        PyObject *tmp_xrange_step_5;
        tmp_xrange_low_7 = mod_consts[28];
        if (var_N == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 384;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_14 = var_N;
        CHECK_OBJECT(var_grid_size_w);
        tmp_sub_expr_right_14 = var_grid_size_w;
        tmp_add_expr_left_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_14, tmp_sub_expr_right_14);
        if (tmp_add_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_11 = mod_consts[31];
        tmp_xrange_high_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_11, tmp_add_expr_right_11);
        Py_DECREF(tmp_add_expr_left_11);
        if (tmp_xrange_high_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_grid_size_w);
        tmp_xrange_step_5 = var_grid_size_w;
        tmp_iter_arg_16 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_7, tmp_xrange_high_7, tmp_xrange_step_5);
        Py_DECREF(tmp_xrange_high_7);
        if (tmp_iter_arg_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_138 = MAKE_ITERATOR(tstate, tmp_iter_arg_16);
        Py_DECREF(tmp_iter_arg_16);
        if (tmp_assign_source_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_7__for_iterator == NULL);
        tmp_for_loop_7__for_iterator = tmp_assign_source_138;
    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_139;
        CHECK_OBJECT(tmp_for_loop_7__for_iterator);
        tmp_next_source_7 = tmp_for_loop_7__for_iterator;
        tmp_assign_source_139 = ITERATOR_NEXT(tmp_next_source_7);
        if (tmp_assign_source_139 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_7;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                exception_lineno = 384;
                goto try_except_handler_26;
            }
        }

        {
            PyObject *old = tmp_for_loop_7__iter_value;
            tmp_for_loop_7__iter_value = tmp_assign_source_139;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_140;
        CHECK_OBJECT(tmp_for_loop_7__iter_value);
        tmp_assign_source_140 = tmp_for_loop_7__iter_value;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_140;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_iter_arg_17;
        PyObject *tmp_xrange_low_8;
        PyObject *tmp_xrange_high_8;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_sub_expr_left_15;
        PyObject *tmp_sub_expr_right_15;
        PyObject *tmp_xrange_step_6;
        tmp_xrange_low_8 = mod_consts[28];
        if (var_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_sub_expr_left_15 = var_M;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_sub_expr_right_15 = var_grid_size_h;
        tmp_add_expr_left_12 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_15, tmp_sub_expr_right_15);
        if (tmp_add_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_add_expr_right_12 = mod_consts[31];
        tmp_xrange_high_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_12, tmp_add_expr_right_12);
        Py_DECREF(tmp_add_expr_left_12);
        if (tmp_xrange_high_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        if (var_grid_size_h == NULL) {
            Py_DECREF(tmp_xrange_high_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_xrange_step_6 = var_grid_size_h;
        tmp_iter_arg_17 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_8, tmp_xrange_high_8, tmp_xrange_step_6);
        Py_DECREF(tmp_xrange_high_8);
        if (tmp_iter_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_assign_source_141 = MAKE_ITERATOR(tstate, tmp_iter_arg_17);
        Py_DECREF(tmp_iter_arg_17);
        if (tmp_assign_source_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        {
            PyObject *old = tmp_for_loop_8__for_iterator;
            tmp_for_loop_8__for_iterator = tmp_assign_source_141;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_8;
        PyObject *tmp_assign_source_142;
        CHECK_OBJECT(tmp_for_loop_8__for_iterator);
        tmp_next_source_8 = tmp_for_loop_8__for_iterator;
        tmp_assign_source_142 = ITERATOR_NEXT(tmp_next_source_8);
        if (tmp_assign_source_142 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_8;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                exception_lineno = 385;
                goto try_except_handler_27;
            }
        }

        {
            PyObject *old = tmp_for_loop_8__iter_value;
            tmp_for_loop_8__iter_value = tmp_assign_source_142;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_143;
        CHECK_OBJECT(tmp_for_loop_8__iter_value);
        tmp_assign_source_143 = tmp_for_loop_8__iter_value;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_143;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_iadd_expr_left_11;
        nuitka_digit tmp_iadd_expr_right_11;
        if (var_grid_cell_num == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_iadd_expr_left_11 = var_grid_cell_num;
        tmp_iadd_expr_right_11 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_11, tmp_iadd_expr_right_11);
        assert(!(tmp_result == false));
        tmp_assign_source_144 = tmp_iadd_expr_left_11;
        var_grid_cell_num = tmp_assign_source_144;

    }
    Py_XDECREF(var_AVG_RED);
    var_AVG_RED = NULL;

    Py_XDECREF(var_AVG_BLUE);
    var_AVG_BLUE = NULL;

    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[28];
        {
            PyObject *old = var_mag_sum_red;
            var_mag_sum_red = tmp_assign_source_145;
            Py_INCREF(var_mag_sum_red);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[28];
        {
            PyObject *old = var_mag_sum_blue;
            var_mag_sum_blue = tmp_assign_source_146;
            Py_INCREF(var_mag_sum_blue);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(var_D);
    var_D = NULL;

    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_iadd_expr_left_12;
        PyObject *tmp_iadd_expr_right_12;
        CHECK_OBJECT(var_c);
        tmp_iadd_expr_left_12 = var_c;
        tmp_iadd_expr_right_12 = mod_consts[31];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_12, tmp_iadd_expr_right_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_assign_source_147 = tmp_iadd_expr_left_12;
        var_c = tmp_assign_source_147;

    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_start_value_5;
        PyObject *tmp_stop_value_5;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        CHECK_OBJECT(var_channel_array);
        tmp_expression_value_51 = var_channel_array;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_start_value_5 = var_r;
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_add_expr_left_13 = var_r;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_add_expr_right_13 = var_grid_size_w;
        tmp_stop_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_13, tmp_add_expr_right_13);
        if (tmp_stop_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_tuple_element_10 = MAKE_SLICE_OBJECT2(tmp_start_value_5, tmp_stop_value_5);
        Py_DECREF(tmp_stop_value_5);
        assert(!(tmp_tuple_element_10 == NULL));
        tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_start_value_6;
            PyObject *tmp_stop_value_6;
            PyObject *tmp_add_expr_left_14;
            PyObject *tmp_add_expr_right_14;
            PyTuple_SET_ITEM(tmp_subscript_value_16, 0, tmp_tuple_element_10);
            CHECK_OBJECT(var_c);
            tmp_start_value_6 = var_c;
            CHECK_OBJECT(var_c);
            tmp_add_expr_left_14 = var_c;
            if (var_grid_size_h == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 394;
                type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }

            tmp_add_expr_right_14 = var_grid_size_h;
            tmp_stop_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
            if (tmp_stop_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;
                type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_tuple_element_10 = MAKE_SLICE_OBJECT2(tmp_start_value_6, tmp_stop_value_6);
            Py_DECREF(tmp_stop_value_6);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_16, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_subscript_value_16);
        goto try_except_handler_27;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_assign_source_148 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_16);
        Py_DECREF(tmp_subscript_value_16);
        if (tmp_assign_source_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        {
            PyObject *old = var_grid_cell;
            var_grid_cell = tmp_assign_source_148;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_iter_arg_18;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_88;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 395;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }

        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_grid_cell);
        tmp_args_element_value_88 = var_grid_cell;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 395;
        tmp_iter_arg_18 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[103], tmp_args_element_value_88);
        if (tmp_iter_arg_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }
        tmp_assign_source_149 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_18);
        Py_DECREF(tmp_iter_arg_18);
        if (tmp_assign_source_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__source_iter;
            tmp_tuple_unpack_10__source_iter = tmp_assign_source_149;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_21 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_150 = UNPACK_NEXT(tstate, tmp_unpack_21, 0, 2);
        if (tmp_assign_source_150 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 395;
            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__element_1;
            tmp_tuple_unpack_10__element_1 = tmp_assign_source_150;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_unpack_22;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_22 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_151 = UNPACK_NEXT(tstate, tmp_unpack_22, 1, 2);
        if (tmp_assign_source_151 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 395;
            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__element_2;
            tmp_tuple_unpack_10__element_2 = tmp_assign_source_151;
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

                    type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                    exception_lineno = 395;
                    goto try_except_handler_29;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 395;
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

    goto try_except_handler_27;
    // End of try:
    try_end_26:;
    CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
    Py_DECREF(tmp_tuple_unpack_10__source_iter);
    tmp_tuple_unpack_10__source_iter = NULL;
    {
        PyObject *tmp_assign_source_152;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_1);
        tmp_assign_source_152 = tmp_tuple_unpack_10__element_1;
        {
            PyObject *old = var_mag;
            var_mag = tmp_assign_source_152;
            Py_INCREF(var_mag);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_10__element_1);
    tmp_tuple_unpack_10__element_1 = NULL;

    {
        PyObject *tmp_assign_source_153;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_2);
        tmp_assign_source_153 = tmp_tuple_unpack_10__element_2;
        {
            PyObject *old = var_phase;
            var_phase = tmp_assign_source_153;
            Py_INCREF(var_phase);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_10__element_2);
    tmp_tuple_unpack_10__element_2 = NULL;

    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_int_arg_5;
        PyObject *tmp_truediv_expr_left_22;
        PyObject *tmp_truediv_expr_right_22;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_subscript_value_17;
        CHECK_OBJECT(var_grid_cell);
        tmp_expression_value_53 = var_grid_cell;
        tmp_expression_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[12]);
        if (tmp_expression_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_subscript_value_17 = mod_consts[28];
        tmp_truediv_expr_left_22 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_52, tmp_subscript_value_17, 0);
        Py_DECREF(tmp_expression_value_52);
        if (tmp_truediv_expr_left_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_truediv_expr_right_22 = mod_consts[57];
        tmp_int_arg_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_22, tmp_truediv_expr_right_22);
        Py_DECREF(tmp_truediv_expr_left_22);
        if (tmp_int_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_assign_source_154 = PyNumber_Int(tmp_int_arg_5);
        Py_DECREF(tmp_int_arg_5);
        if (tmp_assign_source_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        {
            PyObject *old = var_cx;
            var_cx = tmp_assign_source_154;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_int_arg_6;
        PyObject *tmp_truediv_expr_left_23;
        PyObject *tmp_truediv_expr_right_23;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_18;
        CHECK_OBJECT(var_grid_cell);
        tmp_expression_value_55 = var_grid_cell;
        tmp_expression_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[12]);
        if (tmp_expression_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_subscript_value_18 = mod_consts[31];
        tmp_truediv_expr_left_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_54, tmp_subscript_value_18, 1);
        Py_DECREF(tmp_expression_value_54);
        if (tmp_truediv_expr_left_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_truediv_expr_right_23 = mod_consts[57];
        tmp_int_arg_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_23, tmp_truediv_expr_right_23);
        Py_DECREF(tmp_truediv_expr_left_23);
        if (tmp_int_arg_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_assign_source_155 = PyNumber_Int(tmp_int_arg_6);
        Py_DECREF(tmp_int_arg_6);
        if (tmp_assign_source_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        {
            PyObject *old = var_cy;
            var_cy = tmp_assign_source_155;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_iter_arg_19;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_args_element_value_96;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        CHECK_OBJECT(var_mag);
        tmp_args_element_value_89 = var_mag;
        if (var_RED_RADIOUS_X == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 400;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }

        tmp_args_element_value_90 = var_RED_RADIOUS_X;
        if (var_RED_RADIOUS_Y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 400;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }

        tmp_args_element_value_91 = var_RED_RADIOUS_Y;
        if (var_RED_WIDTH == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 400;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }

        tmp_args_element_value_92 = var_RED_WIDTH;
        CHECK_OBJECT(var_cx);
        tmp_args_element_value_93 = var_cx;
        CHECK_OBJECT(var_cy);
        tmp_args_element_value_94 = var_cy;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 401;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }

        tmp_args_element_value_95 = var_grid_size_w;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 401;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }

        tmp_args_element_value_96 = var_grid_size_h;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = {tmp_args_element_value_89, tmp_args_element_value_90, tmp_args_element_value_91, tmp_args_element_value_92, tmp_args_element_value_93, tmp_args_element_value_94, tmp_args_element_value_95, tmp_args_element_value_96};
            tmp_iter_arg_19 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_38, call_args);
        }

        if (tmp_iter_arg_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        tmp_assign_source_156 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_19);
        Py_DECREF(tmp_iter_arg_19);
        if (tmp_assign_source_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_tuple_unpack_11__source_iter;
            tmp_tuple_unpack_11__source_iter = tmp_assign_source_156;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_unpack_23;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_unpack_23 = tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_157 = UNPACK_NEXT(tstate, tmp_unpack_23, 0, 2);
        if (tmp_assign_source_157 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 400;
            goto try_except_handler_31;
        }
        {
            PyObject *old = tmp_tuple_unpack_11__element_1;
            tmp_tuple_unpack_11__element_1 = tmp_assign_source_157;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_unpack_24;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_unpack_24 = tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_158 = UNPACK_NEXT(tstate, tmp_unpack_24, 1, 2);
        if (tmp_assign_source_158 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 400;
            goto try_except_handler_31;
        }
        {
            PyObject *old = tmp_tuple_unpack_11__element_2;
            tmp_tuple_unpack_11__element_2 = tmp_assign_source_158;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_11;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_iterator_name_11 = tmp_tuple_unpack_11__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_11); assert(HAS_ITERNEXT(tmp_iterator_name_11));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_11)->tp_iternext)(tmp_iterator_name_11);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                    exception_lineno = 400;
                    goto try_except_handler_31;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 400;
            goto try_except_handler_31;
        }
    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
    Py_DECREF(tmp_tuple_unpack_11__source_iter);
    tmp_tuple_unpack_11__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto try_except_handler_30;
    // End of try:
    try_end_27:;
    goto try_end_28;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_11__element_1);
    tmp_tuple_unpack_11__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_11__element_2);
    tmp_tuple_unpack_11__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto try_except_handler_27;
    // End of try:
    try_end_28:;
    CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
    Py_DECREF(tmp_tuple_unpack_11__source_iter);
    tmp_tuple_unpack_11__source_iter = NULL;
    {
        PyObject *tmp_assign_source_159;
        CHECK_OBJECT(tmp_tuple_unpack_11__element_1);
        tmp_assign_source_159 = tmp_tuple_unpack_11__element_1;
        {
            PyObject *old = var_red;
            var_red = tmp_assign_source_159;
            Py_INCREF(var_red);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_11__element_1);
    tmp_tuple_unpack_11__element_1 = NULL;

    {
        PyObject *tmp_assign_source_160;
        CHECK_OBJECT(tmp_tuple_unpack_11__element_2);
        tmp_assign_source_160 = tmp_tuple_unpack_11__element_2;
        {
            PyObject *old = var_coord_red;
            var_coord_red = tmp_assign_source_160;
            Py_INCREF(var_coord_red);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_11__element_2);
    tmp_tuple_unpack_11__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_iter_arg_20;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_args_element_value_104;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        CHECK_OBJECT(var_mag);
        tmp_args_element_value_97 = var_mag;
        if (var_BLUE_RADIOUS_X == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 402;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }

        tmp_args_element_value_98 = var_BLUE_RADIOUS_X;
        if (var_BLUE_RADIOUS_Y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 402;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }

        tmp_args_element_value_99 = var_BLUE_RADIOUS_Y;
        if (var_BLUE_WIDTH == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 402;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }

        tmp_args_element_value_100 = var_BLUE_WIDTH;
        CHECK_OBJECT(var_cx);
        tmp_args_element_value_101 = var_cx;
        CHECK_OBJECT(var_cy);
        tmp_args_element_value_102 = var_cy;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 403;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }

        tmp_args_element_value_103 = var_grid_size_w;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 403;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }

        tmp_args_element_value_104 = var_grid_size_h;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 402;
        {
            PyObject *call_args[] = {tmp_args_element_value_97, tmp_args_element_value_98, tmp_args_element_value_99, tmp_args_element_value_100, tmp_args_element_value_101, tmp_args_element_value_102, tmp_args_element_value_103, tmp_args_element_value_104};
            tmp_iter_arg_20 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_39, call_args);
        }

        if (tmp_iter_arg_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        tmp_assign_source_161 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_20);
        Py_DECREF(tmp_iter_arg_20);
        if (tmp_assign_source_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        {
            PyObject *old = tmp_tuple_unpack_12__source_iter;
            tmp_tuple_unpack_12__source_iter = tmp_assign_source_161;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_unpack_25;
        CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
        tmp_unpack_25 = tmp_tuple_unpack_12__source_iter;
        tmp_assign_source_162 = UNPACK_NEXT(tstate, tmp_unpack_25, 0, 2);
        if (tmp_assign_source_162 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 402;
            goto try_except_handler_33;
        }
        {
            PyObject *old = tmp_tuple_unpack_12__element_1;
            tmp_tuple_unpack_12__element_1 = tmp_assign_source_162;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_unpack_26;
        CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
        tmp_unpack_26 = tmp_tuple_unpack_12__source_iter;
        tmp_assign_source_163 = UNPACK_NEXT(tstate, tmp_unpack_26, 1, 2);
        if (tmp_assign_source_163 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 402;
            goto try_except_handler_33;
        }
        {
            PyObject *old = tmp_tuple_unpack_12__element_2;
            tmp_tuple_unpack_12__element_2 = tmp_assign_source_163;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_12;
        CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
        tmp_iterator_name_12 = tmp_tuple_unpack_12__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_12); assert(HAS_ITERNEXT(tmp_iterator_name_12));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_12)->tp_iternext)(tmp_iterator_name_12);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                    exception_lineno = 402;
                    goto try_except_handler_33;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 402;
            goto try_except_handler_33;
        }
    }
    goto try_end_29;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
    Py_DECREF(tmp_tuple_unpack_12__source_iter);
    tmp_tuple_unpack_12__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto try_except_handler_32;
    // End of try:
    try_end_29:;
    goto try_end_30;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_12__element_1);
    tmp_tuple_unpack_12__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_12__element_2);
    tmp_tuple_unpack_12__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto try_except_handler_27;
    // End of try:
    try_end_30:;
    CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
    Py_DECREF(tmp_tuple_unpack_12__source_iter);
    tmp_tuple_unpack_12__source_iter = NULL;
    {
        PyObject *tmp_assign_source_164;
        CHECK_OBJECT(tmp_tuple_unpack_12__element_1);
        tmp_assign_source_164 = tmp_tuple_unpack_12__element_1;
        {
            PyObject *old = var_blue;
            var_blue = tmp_assign_source_164;
            Py_INCREF(var_blue);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_12__element_1);
    tmp_tuple_unpack_12__element_1 = NULL;

    {
        PyObject *tmp_assign_source_165;
        CHECK_OBJECT(tmp_tuple_unpack_12__element_2);
        tmp_assign_source_165 = tmp_tuple_unpack_12__element_2;
        {
            PyObject *old = var_coord_blue;
            var_coord_blue = tmp_assign_source_165;
            Py_INCREF(var_coord_blue);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_12__element_2);
    tmp_tuple_unpack_12__element_2 = NULL;

    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_truediv_expr_left_24;
        PyObject *tmp_truediv_expr_right_24;
        PyObject *tmp_sum_sequence_5;
        PyObject *tmp_len_arg_8;
        CHECK_OBJECT(var_red);
        tmp_sum_sequence_5 = var_red;
        tmp_truediv_expr_left_24 = BUILTIN_SUM1(tstate, tmp_sum_sequence_5);
        if (tmp_truediv_expr_left_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        CHECK_OBJECT(var_red);
        tmp_len_arg_8 = var_red;
        tmp_truediv_expr_right_24 = BUILTIN_LEN(tstate, tmp_len_arg_8);
        if (tmp_truediv_expr_right_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_24);

            exception_lineno = 405;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_assign_source_166 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_24, tmp_truediv_expr_right_24);
        Py_DECREF(tmp_truediv_expr_left_24);
        Py_DECREF(tmp_truediv_expr_right_24);
        if (tmp_assign_source_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        assert(var_AVG_RED == NULL);
        var_AVG_RED = tmp_assign_source_166;
    }
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_truediv_expr_left_25;
        PyObject *tmp_truediv_expr_right_25;
        PyObject *tmp_sum_sequence_6;
        PyObject *tmp_len_arg_9;
        CHECK_OBJECT(var_blue);
        tmp_sum_sequence_6 = var_blue;
        tmp_truediv_expr_left_25 = BUILTIN_SUM1(tstate, tmp_sum_sequence_6);
        if (tmp_truediv_expr_left_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        CHECK_OBJECT(var_blue);
        tmp_len_arg_9 = var_blue;
        tmp_truediv_expr_right_25 = BUILTIN_LEN(tstate, tmp_len_arg_9);
        if (tmp_truediv_expr_right_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_25);

            exception_lineno = 406;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_assign_source_167 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_25, tmp_truediv_expr_right_25);
        Py_DECREF(tmp_truediv_expr_left_25);
        Py_DECREF(tmp_truediv_expr_right_25);
        if (tmp_assign_source_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        assert(var_AVG_BLUE == NULL);
        var_AVG_BLUE = tmp_assign_source_167;
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_105;
        if (var_avg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 407;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_expression_value_56 = var_avg;
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[33]);
        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        CHECK_OBJECT(var_AVG_RED);
        tmp_args_element_value_105 = var_AVG_RED;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 407;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_105);
        Py_DECREF(tmp_called_value_40);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        CHECK_OBJECT(var_AVG_BLUE);
        tmp_cmp_expr_left_14 = var_AVG_BLUE;
        CHECK_OBJECT(var_AVG_RED);
        tmp_cmp_expr_right_14 = var_AVG_RED;
        tmp_condition_result_10 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_abs_arg_3;
        PyObject *tmp_sub_expr_left_16;
        PyObject *tmp_sub_expr_right_16;
        CHECK_OBJECT(var_AVG_BLUE);
        tmp_sub_expr_left_16 = var_AVG_BLUE;
        CHECK_OBJECT(var_AVG_RED);
        tmp_sub_expr_right_16 = var_AVG_RED;
        tmp_abs_arg_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_16, tmp_sub_expr_right_16);
        if (tmp_abs_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_assign_source_168 = BUILTIN_ABS(tmp_abs_arg_3);
        Py_DECREF(tmp_abs_arg_3);
        if (tmp_assign_source_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        assert(var_D == NULL);
        var_D = tmp_assign_source_168;
    }
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[28];
        assert(var_D == NULL);
        Py_INCREF(tmp_assign_source_169);
        var_D = tmp_assign_source_169;
    }
    branch_end_10:;
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_106;
        if (var_MaxD == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 414;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_expression_value_57 = var_MaxD;
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[33]);
        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        CHECK_OBJECT(var_D);
        tmp_args_element_value_106 = var_D;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 414;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_106);
        Py_DECREF(tmp_called_value_41);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_and_left_truth_5;
        nuitka_bool tmp_and_left_value_5;
        nuitka_bool tmp_and_right_value_5;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        PyObject *tmp_len_arg_10;
        int tmp_and_left_truth_6;
        nuitka_bool tmp_and_left_value_6;
        nuitka_bool tmp_and_right_value_6;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_subscript_value_22;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_cmp_expr_left_15 = var_i;
        if (var_sip_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_len_arg_10 = var_sip_cells;
        tmp_cmp_expr_right_15 = BUILTIN_LEN(tstate, tmp_len_arg_10);
        if (tmp_cmp_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_and_left_value_5 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        Py_DECREF(tmp_cmp_expr_right_15);
        if (tmp_and_left_value_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        if (tmp_and_left_truth_5 == 1) {
            goto and_right_5;
        } else {
            goto and_left_5;
        }
        and_right_5:;
        if (var_sip_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_expression_value_59 = var_sip_cells;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_subscript_value_19 = var_i;
        tmp_expression_value_58 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_19);
        if (tmp_expression_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_subscript_value_20 = mod_consts[28];
        tmp_cmp_expr_left_16 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_58, tmp_subscript_value_20, 0);
        Py_DECREF(tmp_expression_value_58);
        if (tmp_cmp_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        if (var_x == NULL) {
            Py_DECREF(tmp_cmp_expr_left_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_cmp_expr_right_16 = var_x;
        tmp_and_left_value_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        Py_DECREF(tmp_cmp_expr_left_16);
        if (tmp_and_left_value_6 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        if (tmp_and_left_truth_6 == 1) {
            goto and_right_6;
        } else {
            goto and_left_6;
        }
        and_right_6:;
        if (var_sip_cells == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_expression_value_61 = var_sip_cells;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_subscript_value_21 = var_i;
        tmp_expression_value_60 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_21);
        if (tmp_expression_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_subscript_value_22 = mod_consts[31];
        tmp_cmp_expr_left_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_60, tmp_subscript_value_22, 1);
        Py_DECREF(tmp_expression_value_60);
        if (tmp_cmp_expr_left_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        if (var_y == NULL) {
            Py_DECREF(tmp_cmp_expr_left_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 417;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_cmp_expr_right_17 = var_y;
        tmp_and_right_value_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        Py_DECREF(tmp_cmp_expr_left_17);
        if (tmp_and_right_value_6 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_and_right_value_5 = tmp_and_right_value_6;
        goto and_end_6;
        and_left_6:;
        tmp_and_right_value_5 = tmp_and_left_value_6;
        and_end_6:;
        tmp_condition_result_11 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_condition_result_11 = tmp_and_left_value_5;
        and_end_5:;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_tuple_element_11;
        if (var_mag_red_blue == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 418;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_expression_value_62 = var_mag_red_blue;
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[33]);
        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        CHECK_OBJECT(var_mag);
        tmp_tuple_element_11 = var_mag;
        tmp_args_element_value_107 = MAKE_TUPLE_EMPTY(10);
        PyTuple_SET_ITEM0(tmp_args_element_value_107, 0, tmp_tuple_element_11);
        CHECK_OBJECT(var_phase);
        tmp_tuple_element_11 = var_phase;
        PyTuple_SET_ITEM0(tmp_args_element_value_107, 1, tmp_tuple_element_11);
        CHECK_OBJECT(var_red);
        tmp_tuple_element_11 = var_red;
        PyTuple_SET_ITEM0(tmp_args_element_value_107, 2, tmp_tuple_element_11);
        CHECK_OBJECT(var_blue);
        tmp_tuple_element_11 = var_blue;
        PyTuple_SET_ITEM0(tmp_args_element_value_107, 3, tmp_tuple_element_11);
        CHECK_OBJECT(var_AVG_RED);
        tmp_tuple_element_11 = var_AVG_RED;
        PyTuple_SET_ITEM0(tmp_args_element_value_107, 4, tmp_tuple_element_11);
        CHECK_OBJECT(var_AVG_BLUE);
        tmp_tuple_element_11 = var_AVG_BLUE;
        PyTuple_SET_ITEM0(tmp_args_element_value_107, 5, tmp_tuple_element_11);
        CHECK_OBJECT(var_coord_red);
        tmp_tuple_element_11 = var_coord_red;
        PyTuple_SET_ITEM0(tmp_args_element_value_107, 6, tmp_tuple_element_11);
        CHECK_OBJECT(var_coord_blue);
        tmp_tuple_element_11 = var_coord_blue;
        PyTuple_SET_ITEM0(tmp_args_element_value_107, 7, tmp_tuple_element_11);
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 418;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto tuple_build_exception_7;
        }

        tmp_tuple_element_11 = var_x;
        PyTuple_SET_ITEM0(tmp_args_element_value_107, 8, tmp_tuple_element_11);
        if (var_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 418;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto tuple_build_exception_7;
        }

        tmp_tuple_element_11 = var_y;
        PyTuple_SET_ITEM0(tmp_args_element_value_107, 9, tmp_tuple_element_11);
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_107);
        goto try_except_handler_27;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 418;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_107);
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_107);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_iadd_expr_left_13;
        PyObject *tmp_iadd_expr_right_13;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 419;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_iadd_expr_left_13 = var_i;
        tmp_iadd_expr_right_13 = mod_consts[31];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_13, tmp_iadd_expr_right_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_assign_source_170 = tmp_iadd_expr_left_13;
        var_i = tmp_assign_source_170;

    }
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_tuple_element_12;
        if (var_mag_rest == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 421;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_expression_value_63 = var_mag_rest;
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[33]);
        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        CHECK_OBJECT(var_mag);
        tmp_tuple_element_12 = var_mag;
        tmp_args_element_value_108 = MAKE_TUPLE_EMPTY(8);
        PyTuple_SET_ITEM0(tmp_args_element_value_108, 0, tmp_tuple_element_12);
        CHECK_OBJECT(var_phase);
        tmp_tuple_element_12 = var_phase;
        PyTuple_SET_ITEM0(tmp_args_element_value_108, 1, tmp_tuple_element_12);
        CHECK_OBJECT(var_red);
        tmp_tuple_element_12 = var_red;
        PyTuple_SET_ITEM0(tmp_args_element_value_108, 2, tmp_tuple_element_12);
        CHECK_OBJECT(var_blue);
        tmp_tuple_element_12 = var_blue;
        PyTuple_SET_ITEM0(tmp_args_element_value_108, 3, tmp_tuple_element_12);
        CHECK_OBJECT(var_AVG_RED);
        tmp_tuple_element_12 = var_AVG_RED;
        PyTuple_SET_ITEM0(tmp_args_element_value_108, 4, tmp_tuple_element_12);
        CHECK_OBJECT(var_AVG_BLUE);
        tmp_tuple_element_12 = var_AVG_BLUE;
        PyTuple_SET_ITEM0(tmp_args_element_value_108, 5, tmp_tuple_element_12);
        CHECK_OBJECT(var_coord_red);
        tmp_tuple_element_12 = var_coord_red;
        PyTuple_SET_ITEM0(tmp_args_element_value_108, 6, tmp_tuple_element_12);
        CHECK_OBJECT(var_coord_blue);
        tmp_tuple_element_12 = var_coord_blue;
        PyTuple_SET_ITEM0(tmp_args_element_value_108, 7, tmp_tuple_element_12);
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 421;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_108);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_element_value_108);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        Py_DECREF(tmp_call_result_19);
    }
    branch_end_11:;
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_iadd_expr_left_14;
        PyObject *tmp_iadd_expr_right_14;
        if (var_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 423;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_iadd_expr_left_14 = var_y;
        tmp_iadd_expr_right_14 = mod_consts[31];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_14, tmp_iadd_expr_right_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_assign_source_171 = tmp_iadd_expr_left_14;
        var_y = tmp_assign_source_171;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 385;
        type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
        goto try_except_handler_27;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_31;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
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
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto try_except_handler_26;
    // End of try:
    try_end_31:;
    Py_XDECREF(tmp_for_loop_8__iter_value);
    tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_8__for_iterator);
    Py_DECREF(tmp_for_loop_8__for_iterator);
    tmp_for_loop_8__for_iterator = NULL;
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_110;
        if (var_MaxDRows == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 424;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_expression_value_64 = var_MaxDRows;
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[33]);
        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_called_value_45 = LOOKUP_BUILTIN(mod_consts[118]);
        assert(tmp_called_value_45 != NULL);
        if (var_MaxD == NULL) {
            Py_DECREF(tmp_called_value_44);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 424;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_args_element_value_110 = var_MaxD;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 424;
        tmp_args_element_value_109 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_110);
        if (tmp_args_element_value_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 424;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 424;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_109);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_109);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_delsubscr_target_3;
        PyObject *tmp_delsubscr_subscript_3;
        if (var_MaxD == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 425;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_delsubscr_target_3 = var_MaxD;
        tmp_delsubscr_subscript_3 = mod_consts[119];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_3, tmp_delsubscr_subscript_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_iadd_expr_left_15;
        PyObject *tmp_iadd_expr_right_15;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 426;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_iadd_expr_left_15 = var_x;
        tmp_iadd_expr_right_15 = mod_consts[31];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_15, tmp_iadd_expr_right_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_assign_source_172 = tmp_iadd_expr_left_15;
        var_x = tmp_assign_source_172;

    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = mod_consts[28];
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_173;
            Py_INCREF(var_y);
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 384;
        type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
        goto try_except_handler_26;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_32;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
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
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_32:;
    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_iter_arg_21;
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_args_element_value_117;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }

        tmp_expression_value_65 = par_self;
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[120]);
        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        if (var_mag_red_blue == NULL) {
            Py_DECREF(tmp_called_value_46);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }

        tmp_args_element_value_111 = var_mag_red_blue;
        if (var_mag_rest == NULL) {
            Py_DECREF(tmp_called_value_46);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }

        tmp_args_element_value_112 = var_mag_rest;
        if (var_MaxDRows == NULL) {
            Py_DECREF(tmp_called_value_46);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }

        tmp_args_element_value_113 = var_MaxDRows;
        if (var_sip_cells == NULL) {
            Py_DECREF(tmp_called_value_46);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }

        tmp_args_element_value_114 = var_sip_cells;
        if (var_grid_size_w == NULL) {
            Py_DECREF(tmp_called_value_46);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }

        tmp_args_element_value_115 = var_grid_size_w;
        if (var_grid_size_h == NULL) {
            Py_DECREF(tmp_called_value_46);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 430;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }

        tmp_args_element_value_116 = var_grid_size_h;
        CHECK_OBJECT(par_copt);
        tmp_args_element_value_117 = par_copt;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 429;
        {
            PyObject *call_args[] = {tmp_args_element_value_111, tmp_args_element_value_112, tmp_args_element_value_113, tmp_args_element_value_114, tmp_args_element_value_115, tmp_args_element_value_116, tmp_args_element_value_117};
            tmp_iter_arg_21 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_46, call_args);
        }

        Py_DECREF(tmp_called_value_46);
        if (tmp_iter_arg_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        tmp_assign_source_174 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_21);
        Py_DECREF(tmp_iter_arg_21);
        if (tmp_assign_source_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        assert(tmp_tuple_unpack_13__source_iter == NULL);
        tmp_tuple_unpack_13__source_iter = tmp_assign_source_174;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_unpack_27;
        CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
        tmp_unpack_27 = tmp_tuple_unpack_13__source_iter;
        tmp_assign_source_175 = UNPACK_NEXT(tstate, tmp_unpack_27, 0, 3);
        if (tmp_assign_source_175 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 429;
            goto try_except_handler_35;
        }
        assert(tmp_tuple_unpack_13__element_1 == NULL);
        tmp_tuple_unpack_13__element_1 = tmp_assign_source_175;
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_unpack_28;
        CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
        tmp_unpack_28 = tmp_tuple_unpack_13__source_iter;
        tmp_assign_source_176 = UNPACK_NEXT(tstate, tmp_unpack_28, 1, 3);
        if (tmp_assign_source_176 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 429;
            goto try_except_handler_35;
        }
        assert(tmp_tuple_unpack_13__element_2 == NULL);
        tmp_tuple_unpack_13__element_2 = tmp_assign_source_176;
    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_unpack_29;
        CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
        tmp_unpack_29 = tmp_tuple_unpack_13__source_iter;
        tmp_assign_source_177 = UNPACK_NEXT(tstate, tmp_unpack_29, 2, 3);
        if (tmp_assign_source_177 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 429;
            goto try_except_handler_35;
        }
        assert(tmp_tuple_unpack_13__element_3 == NULL);
        tmp_tuple_unpack_13__element_3 = tmp_assign_source_177;
    }
    {
        PyObject *tmp_iterator_name_13;
        CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
        tmp_iterator_name_13 = tmp_tuple_unpack_13__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_13); assert(HAS_ITERNEXT(tmp_iterator_name_13));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_13)->tp_iternext)(tmp_iterator_name_13);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
                    exception_lineno = 429;
                    goto try_except_handler_35;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[42];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            exception_lineno = 429;
            goto try_except_handler_35;
        }
    }
    goto try_end_33;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
    Py_DECREF(tmp_tuple_unpack_13__source_iter);
    tmp_tuple_unpack_13__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto try_except_handler_34;
    // End of try:
    try_end_33:;
    goto try_end_34;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_13__element_1);
    tmp_tuple_unpack_13__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_13__element_2);
    tmp_tuple_unpack_13__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_13__element_3);
    tmp_tuple_unpack_13__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto frame_exception_exit_1;
    // End of try:
    try_end_34:;
    CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
    Py_DECREF(tmp_tuple_unpack_13__source_iter);
    tmp_tuple_unpack_13__source_iter = NULL;
    {
        PyObject *tmp_assign_source_178;
        CHECK_OBJECT(tmp_tuple_unpack_13__element_1);
        tmp_assign_source_178 = tmp_tuple_unpack_13__element_1;
        assert(var_m == NULL);
        Py_INCREF(tmp_assign_source_178);
        var_m = tmp_assign_source_178;
    }
    Py_XDECREF(tmp_tuple_unpack_13__element_1);
    tmp_tuple_unpack_13__element_1 = NULL;

    {
        PyObject *tmp_assign_source_179;
        CHECK_OBJECT(tmp_tuple_unpack_13__element_2);
        tmp_assign_source_179 = tmp_tuple_unpack_13__element_2;
        assert(var_unm == NULL);
        Py_INCREF(tmp_assign_source_179);
        var_unm = tmp_assign_source_179;
    }
    Py_XDECREF(tmp_tuple_unpack_13__element_2);
    tmp_tuple_unpack_13__element_2 = NULL;

    {
        PyObject *tmp_assign_source_180;
        CHECK_OBJECT(tmp_tuple_unpack_13__element_3);
        tmp_assign_source_180 = tmp_tuple_unpack_13__element_3;
        assert(var_m_cells == NULL);
        Py_INCREF(tmp_assign_source_180);
        var_m_cells = tmp_assign_source_180;
    }
    Py_XDECREF(tmp_tuple_unpack_13__element_3);
    tmp_tuple_unpack_13__element_3 = NULL;

    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_args_element_value_120;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_args_element_value_122;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 431;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_66 = par_self;
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[121]);
        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_m);
        tmp_args_element_value_118 = var_m;
        CHECK_OBJECT(var_unm);
        tmp_args_element_value_119 = var_unm;
        if (var_grid_size_w == NULL) {
            Py_DECREF(tmp_called_value_47);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 431;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_120 = var_grid_size_w;
        if (var_grid_size_h == NULL) {
            Py_DECREF(tmp_called_value_47);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 431;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_121 = var_grid_size_h;
        if (var_sip_cells == NULL) {
            Py_DECREF(tmp_called_value_47);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 431;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_122 = var_sip_cells;
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 431;
        {
            PyObject *call_args[] = {tmp_args_element_value_118, tmp_args_element_value_119, tmp_args_element_value_120, tmp_args_element_value_121, tmp_args_element_value_122};
            tmp_assign_source_181 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_47, call_args);
        }

        Py_DECREF(tmp_called_value_47);
        if (tmp_assign_source_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_img == NULL);
        var_img = tmp_assign_source_181;
    }
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_123;
        PyObject *tmp_args_element_value_124;
        PyObject *tmp_truediv_expr_left_26;
        PyObject *tmp_truediv_expr_right_26;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        tmp_called_value_48 = LOOKUP_BUILTIN(mod_consts[122]);
        assert(tmp_called_value_48 != NULL);
        tmp_args_element_value_123 = mod_consts[123];
        CHECK_OBJECT(var_m_cells);
        tmp_truediv_expr_left_26 = var_m_cells;
        if (var_grid_size_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 432;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_8 = var_grid_size_w;
        if (var_grid_size_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 432;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_8 = var_grid_size_h;
        tmp_truediv_expr_right_26 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        if (tmp_truediv_expr_right_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_124 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_26, tmp_truediv_expr_right_26);
        Py_DECREF(tmp_truediv_expr_right_26);
        if (tmp_args_element_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a7308baea8a14741a1bb4621253117c6->m_frame.f_lineno = 432;
        {
            PyObject *call_args[] = {tmp_args_element_value_123, tmp_args_element_value_124};
            tmp_call_result_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_48, call_args);
        }

        Py_DECREF(tmp_args_element_value_124);
        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooooooooooooooooooooooooNNoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    branch_end_7:;
    branch_end_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a7308baea8a14741a1bb4621253117c6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a7308baea8a14741a1bb4621253117c6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7308baea8a14741a1bb4621253117c6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a7308baea8a14741a1bb4621253117c6,
        type_description_1,
        par_self,
        par_channel,
        par_sip,
        par_SIZE,
        par_K,
        par_copt,
        par_PR,
        par_PB,
        var_grid_cell_num,
        var_sip_cells,
        var_A_matrix,
        var_i,
        var_row,
        var_j,
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
        var_MaxDRows,
        var_MaxD,
        NULL,
        NULL,
        var_avg,
        var_x,
        var_y,
        var_d,
        var_mag_red_blue,
        var_mag_rest,
        var_r,
        var_c,
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
        var_m,
        var_unm,
        var_m_cells,
        var_img
    );


    // Release cached frame if used for exception.
    if (frame_a7308baea8a14741a1bb4621253117c6 == cache_frame_a7308baea8a14741a1bb4621253117c6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a7308baea8a14741a1bb4621253117c6);
        cache_frame_a7308baea8a14741a1bb4621253117c6 = NULL;
    }

    assertFrameObject(frame_a7308baea8a14741a1bb4621253117c6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_13;
        CHECK_OBJECT(var_img);
        tmp_tuple_element_13 = var_img;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_13);
        tmp_tuple_element_13 = mod_consts[28];
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_13);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_grid_cell_num);
    var_grid_cell_num = NULL;
    Py_XDECREF(var_sip_cells);
    var_sip_cells = NULL;
    Py_XDECREF(var_A_matrix);
    var_A_matrix = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
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
    Py_XDECREF(var_MaxDRows);
    var_MaxDRows = NULL;
    Py_XDECREF(var_MaxD);
    var_MaxD = NULL;
    Py_XDECREF(var_avg);
    var_avg = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    Py_XDECREF(var_mag_red_blue);
    var_mag_red_blue = NULL;
    Py_XDECREF(var_mag_rest);
    var_mag_rest = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
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
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_unm);
    var_unm = NULL;
    Py_XDECREF(var_m_cells);
    var_m_cells = NULL;
    CHECK_OBJECT(var_img);
    Py_DECREF(var_img);
    var_img = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_grid_cell_num);
    var_grid_cell_num = NULL;
    Py_XDECREF(var_sip_cells);
    var_sip_cells = NULL;
    Py_XDECREF(var_A_matrix);
    var_A_matrix = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
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
    Py_XDECREF(var_MaxDRows);
    var_MaxDRows = NULL;
    Py_XDECREF(var_MaxD);
    var_MaxD = NULL;
    Py_XDECREF(var_avg);
    var_avg = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    Py_XDECREF(var_mag_red_blue);
    var_mag_red_blue = NULL;
    Py_XDECREF(var_mag_rest);
    var_mag_rest = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
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
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_unm);
    var_unm = NULL;
    Py_XDECREF(var_m_cells);
    var_m_cells = NULL;
    Py_XDECREF(var_img);
    var_img = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_channel);
    Py_DECREF(par_channel);
    CHECK_OBJECT(par_sip);
    Py_DECREF(par_sip);
    CHECK_OBJECT(par_SIZE);
    Py_DECREF(par_SIZE);
    CHECK_OBJECT(par_K);
    Py_DECREF(par_K);
    CHECK_OBJECT(par_copt);
    Py_DECREF(par_copt);
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
    CHECK_OBJECT(par_sip);
    Py_DECREF(par_sip);
    CHECK_OBJECT(par_SIZE);
    Py_DECREF(par_SIZE);
    CHECK_OBJECT(par_K);
    Py_DECREF(par_K);
    CHECK_OBJECT(par_copt);
    Py_DECREF(par_copt);
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



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__10_modifyMagnitude() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_algorithms$w_algorithms$embed_key$$$function__10_modifyMagnitude,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_bbe6640738de279ab330ba430a1933ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$embed_key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__11_embedPermutationToChannel() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_algorithms$w_algorithms$embed_key$$$function__11_embedPermutationToChannel,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_a7308baea8a14741a1bb4621253117c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$embed_key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_7fdaebf25ffb28f57e44172ac0174745,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$embed_key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__2_openImage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_algorithms$w_algorithms$embed_key$$$function__2_openImage,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_4309d1b0025efbe044730d17ba4523d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$embed_key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__3_getFFTTransform() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_algorithms$w_algorithms$embed_key$$$function__3_getFFTTransform,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_87f2fcfdcdc493ad4f17a34c52f8f312,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$embed_key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__4_getIFFTTransform() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_algorithms$w_algorithms$embed_key$$$function__4_getIFFTTransform,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_94898da15be0f509e454e036b91ab6bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$embed_key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__5_hash_block() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_algorithms$w_algorithms$embed_key$$$function__5_hash_block,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_8389cd781ee11ddef8f3a6b30fd911bf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$embed_key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__6_showImage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_algorithms$w_algorithms$embed_key$$$function__6_showImage,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_1914b1984249da02046105134a7676a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$embed_key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__7_sortCells() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_algorithms$w_algorithms$embed_key$$$function__7_sortCells,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_e0bd65c1df4b623782cef1b706ce0464,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$embed_key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__8_getWatermarkedImage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_algorithms$w_algorithms$embed_key$$$function__8_getWatermarkedImage,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_a987fa4d9997dcadadbb93bb2b384cb0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$embed_key,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__9_mergeCellsToImage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_algorithms$w_algorithms$embed_key$$$function__9_mergeCellsToImage,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_27e9bf25e8059d7b06b901237094bdd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_algorithms$w_algorithms$embed_key,
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

function_impl_code functable_algorithms$w_algorithms$embed_key[] = {
    NULL,
    impl_algorithms$w_algorithms$embed_key$$$function__2_openImage,
    impl_algorithms$w_algorithms$embed_key$$$function__3_getFFTTransform,
    impl_algorithms$w_algorithms$embed_key$$$function__4_getIFFTTransform,
    impl_algorithms$w_algorithms$embed_key$$$function__5_hash_block,
    impl_algorithms$w_algorithms$embed_key$$$function__6_showImage,
    impl_algorithms$w_algorithms$embed_key$$$function__7_sortCells,
    impl_algorithms$w_algorithms$embed_key$$$function__8_getWatermarkedImage,
    impl_algorithms$w_algorithms$embed_key$$$function__9_mergeCellsToImage,
    impl_algorithms$w_algorithms$embed_key$$$function__10_modifyMagnitude,
    impl_algorithms$w_algorithms$embed_key$$$function__11_embedPermutationToChannel,
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

    function_impl_code *current = functable_algorithms$w_algorithms$embed_key;
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

    if (offset > sizeof(functable_algorithms$w_algorithms$embed_key) || offset < 0) {
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
        functable_algorithms$w_algorithms$embed_key[offset],
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
        module_algorithms$w_algorithms$embed_key,
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
PyObject *modulecode_algorithms$w_algorithms$embed_key(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("algorithms.w_algorithms.embed_key");

    // Store the module for future use.
    module_algorithms$w_algorithms$embed_key = module;

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
        PRINT_STRING("algorithms.w_algorithms.embed_key: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("algorithms.w_algorithms.embed_key: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initalgorithms$w_algorithms$embed_key\n");

    moduledict_algorithms$w_algorithms$embed_key = MODULE_DICT(module_algorithms$w_algorithms$embed_key);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_algorithms$w_algorithms$embed_key,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_algorithms$w_algorithms$embed_key,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[170]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_algorithms$w_algorithms$embed_key,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_algorithms$w_algorithms$embed_key,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_algorithms$w_algorithms$embed_key,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_algorithms$w_algorithms$embed_key);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_algorithms$w_algorithms$embed_key);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_555608920d52ed39c1c2494f96808acf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_2);
    }
    frame_555608920d52ed39c1c2494f96808acf = MAKE_MODULE_FRAME(codeobj_555608920d52ed39c1c2494f96808acf, module_algorithms$w_algorithms$embed_key);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_555608920d52ed39c1c2494f96808acf);
    assert(Py_REFCNT(frame_555608920d52ed39c1c2494f96808acf) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[126]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[127], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[126]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[128], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[17];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_algorithms$w_algorithms$embed_key;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[28];
        frame_555608920d52ed39c1c2494f96808acf->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[130];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_algorithms$w_algorithms$embed_key;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[28];
        frame_555608920d52ed39c1c2494f96808acf->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[38];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_algorithms$w_algorithms$embed_key;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[28];
        frame_555608920d52ed39c1c2494f96808acf->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[23];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_algorithms$w_algorithms$embed_key;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[28];
        frame_555608920d52ed39c1c2494f96808acf->m_frame.f_lineno = 5;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[131];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_algorithms$w_algorithms$embed_key;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[28];
        frame_555608920d52ed39c1c2494f96808acf->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[132];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_algorithms$w_algorithms$embed_key;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[133];
        tmp_level_value_6 = mod_consts[28];
        frame_555608920d52ed39c1c2494f96808acf->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_algorithms$w_algorithms$embed_key,
                mod_consts[0],
                mod_consts[28]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[134];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_algorithms$w_algorithms$embed_key;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[135];
        tmp_level_value_7 = mod_consts[28];
        frame_555608920d52ed39c1c2494f96808acf->m_frame.f_lineno = 9;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_algorithms$w_algorithms$embed_key,
                mod_consts[104],
                mod_consts[28]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[104]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[136];
        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12, mod_consts[137], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[138];
        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12, mod_consts[139], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__1___init__();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12, mod_consts[140], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__2_openImage();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12, mod_consts[142], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__3_getFFTTransform();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12, mod_consts[103], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__4_getIFFTTransform();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12, mod_consts[77], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__5_hash_block();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12, mod_consts[146], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__6_showImage();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12, mod_consts[148], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__7_sortCells();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__8_getWatermarkedImage();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12, mod_consts[151], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__9_mergeCellsToImage();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12, mod_consts[121], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__10_modifyMagnitude();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12, mod_consts[120], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_algorithms$w_algorithms$embed_key$$$function__11_embedPermutationToChannel();

        tmp_res = PyDict_SetItem(locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[138];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[156];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_555608920d52ed39c1c2494f96808acf->m_frame.f_lineno = 12;
            tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_13 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12);
        locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12 = NULL;
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

        Py_DECREF(locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12);
        locals_algorithms$w_algorithms$embed_key$$$class__1_EmbedPermutation_12 = NULL;
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
        UPDATE_STRING_DICT1(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_13);
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
        exception_tb = MAKE_TRACEBACK(frame_555608920d52ed39c1c2494f96808acf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_555608920d52ed39c1c2494f96808acf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_555608920d52ed39c1c2494f96808acf, exception_lineno);
    }



    assertFrameObject(frame_555608920d52ed39c1c2494f96808acf);

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
    PGO_onModuleExit("algorithms.w_algorithms.embed_key", false);

    Py_INCREF(module_algorithms$w_algorithms$embed_key);
    return module_algorithms$w_algorithms$embed_key;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_algorithms$w_algorithms$embed_key, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("algorithms$w_algorithms$embed_key", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
