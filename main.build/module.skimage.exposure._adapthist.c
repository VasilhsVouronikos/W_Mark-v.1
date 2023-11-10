/* Generated code for Python module 'skimage.exposure._adapthist'
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

/* The "module_skimage$exposure$_adapthist" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_skimage$exposure$_adapthist;
PyDictObject *moduledict_skimage$exposure$_adapthist;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[104];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[104];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("skimage.exposure._adapthist"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 104; i++) {
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
void checkModuleConstants_skimage$exposure$_adapthist(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 104; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_20e2f9aa1b2652f5473c061b8c01f291;
static PyCodeObject *codeobj_256f38e14ee45c48159fd03df70d90f1;
static PyCodeObject *codeobj_d7b4f7d8167870051c9a07781b1aec8b;
static PyCodeObject *codeobj_a58a563761033311a0d09406f3f06c0d;
static PyCodeObject *codeobj_27e513fc8a659650d2314b2d93248cd3;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[98]); CHECK_OBJECT(module_filename_obj);
    codeobj_20e2f9aa1b2652f5473c061b8c01f291 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[99], mod_consts[99], NULL, NULL, 0, 0, 0);
    codeobj_256f38e14ee45c48159fd03df70d90f1 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[100], NULL, 4, 0, 0);
    codeobj_d7b4f7d8167870051c9a07781b1aec8b = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[101], NULL, 2, 0, 0);
    codeobj_a58a563761033311a0d09406f3f06c0d = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[102], NULL, 4, 0, 0);
    codeobj_27e513fc8a659650d2314b2d93248cd3 = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[103], NULL, 4, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__12_complex_call_helper_keywords_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_skimage$exposure$_adapthist$$$function__1_equalize_adapthist(PyObject *defaults);


static PyObject *MAKE_FUNCTION_skimage$exposure$_adapthist$$$function__2__clahe();


static PyObject *MAKE_FUNCTION_skimage$exposure$_adapthist$$$function__3_clip_histogram();


static PyObject *MAKE_FUNCTION_skimage$exposure$_adapthist$$$function__4_map_histogram();


// The module function definitions.
static PyObject *impl_skimage$exposure$_adapthist$$$function__1_equalize_adapthist(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_image = python_pars[0];
    PyObject *par_kernel_size = python_pars[1];
    PyObject *par_clip_limit = python_pars[2];
    PyObject *par_nbins = python_pars[3];
    PyObject *var_float_dtype = NULL;
    PyObject *outline_0_var_s = NULL;
    PyObject *outline_1_var_k = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_a58a563761033311a0d09406f3f06c0d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a58a563761033311a0d09406f3f06c0d = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a58a563761033311a0d09406f3f06c0d)) {
        Py_XDECREF(cache_frame_a58a563761033311a0d09406f3f06c0d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a58a563761033311a0d09406f3f06c0d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a58a563761033311a0d09406f3f06c0d = MAKE_FUNCTION_FRAME(tstate, codeobj_a58a563761033311a0d09406f3f06c0d, module_skimage$exposure$_adapthist, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a58a563761033311a0d09406f3f06c0d->m_type_description == NULL);
    frame_a58a563761033311a0d09406f3f06c0d = cache_frame_a58a563761033311a0d09406f3f06c0d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a58a563761033311a0d09406f3f06c0d);
    assert(Py_REFCNT(frame_a58a563761033311a0d09406f3f06c0d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_image);
        tmp_expression_value_1 = par_image;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a58a563761033311a0d09406f3f06c0d->m_frame.f_lineno = 80;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_float_dtype == NULL);
        var_float_dtype = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_image);
        tmp_args_element_value_2 = par_image;
        frame_a58a563761033311a0d09406f3f06c0d->m_frame.f_lineno = 81;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_image;
            assert(old != NULL);
            par_image = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[4]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 83;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_image);
        tmp_kw_call_arg_value_0_1 = par_image;
        tmp_tuple_element_1 = mod_consts[6];
        tmp_kw_call_dict_value_0_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_1, 0, tmp_tuple_element_1);
            tmp_sub_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_sub_expr_left_1 == NULL)) {
                tmp_sub_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_sub_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            tmp_sub_expr_right_1 = mod_consts[8];
            tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_kw_call_dict_value_0_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_a58a563761033311a0d09406f3f06c0d->m_frame.f_lineno = 83;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 83;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a58a563761033311a0d09406f3f06c0d->m_frame.f_lineno = 82;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 84;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[11]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 84;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 84;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a58a563761033311a0d09406f3f06c0d->m_frame.f_lineno = 84;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_6);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 84;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a58a563761033311a0d09406f3f06c0d->m_frame.f_lineno = 82;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_image;
            assert(old != NULL);
            par_image = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_kernel_size);
        tmp_cmp_expr_left_1 = par_kernel_size;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_tuple_arg_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_5;
            CHECK_OBJECT(par_image);
            tmp_expression_value_5 = par_image;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[12]);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_6;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_7 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooo";
                    exception_lineno = 87;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_8 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_s;
                outline_0_var_s = tmp_assign_source_8;
                Py_INCREF(outline_0_var_s);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_floordiv_expr_left_1;
            PyObject *tmp_floordiv_expr_right_1;
            PyObject *tmp_args_element_value_7;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_value_7 = LOOKUP_BUILTIN(mod_consts[13]);
            assert(tmp_called_value_7 != NULL);
            CHECK_OBJECT(outline_0_var_s);
            tmp_floordiv_expr_left_1 = outline_0_var_s;
            tmp_floordiv_expr_right_1 = mod_consts[14];
            tmp_args_element_value_6 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
            if (tmp_args_element_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            tmp_args_element_value_7 = mod_consts[8];
            frame_a58a563761033311a0d09406f3f06c0d->m_frame.f_lineno = 87;
            {
                PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
            }

            Py_DECREF(tmp_args_element_value_6);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_tuple_arg_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_tuple_arg_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
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
        Py_XDECREF(outline_0_var_s);
        outline_0_var_s = NULL;
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

        Py_XDECREF(outline_0_var_s);
        outline_0_var_s = NULL;
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
        exception_lineno = 87;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_assign_source_4 = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_kernel_size;
            assert(old != NULL);
            par_kernel_size = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_kernel_size);
        tmp_isinstance_inst_1 = par_kernel_size;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[16]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_kernel_size);
        tmp_tuple_element_2 = par_kernel_size;
        tmp_mult_expr_left_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_mult_expr_left_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_image);
        tmp_expression_value_7 = par_image;
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[17]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 89;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = BINARY_OPERATION_MULT_OBJECT_TUPLE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_kernel_size;
            assert(old != NULL);
            par_kernel_size = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_kernel_size);
        tmp_len_arg_1 = par_kernel_size;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_image);
        tmp_expression_value_8 = par_image;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[17]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 90;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooo";
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
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_exception_made_1;
        tmp_tuple_element_3 = mod_consts[18];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_kernel_size);
            tmp_format_value_1 = par_kernel_size;
            tmp_format_spec_1 = mod_consts[19];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a58a563761033311a0d09406f3f06c0d->m_frame.f_lineno = 91;
        tmp_exception_made_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_exception_made_1 == NULL));
        Py_DECREF(tmp_exception_made_1);
    }
    branch_no_3:;
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_10;
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_2;
            if (par_kernel_size == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 93;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }

            tmp_iter_arg_2 = par_kernel_size;
            tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            if (tmp_assign_source_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_12;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_13 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooo";
                    exception_lineno = 93;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_14 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_k;
                outline_1_var_k = tmp_assign_source_14;
                Py_INCREF(outline_1_var_k);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_int_arg_1;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_k);
            tmp_int_arg_1 = outline_1_var_k;
            tmp_append_value_2 = PyNumber_Int(tmp_int_arg_1);
            if (tmp_append_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_10 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto try_return_handler_4;
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

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_k);
        outline_1_var_k = NULL;
        goto outline_result_2;
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

        Py_XDECREF(outline_1_var_k);
        outline_1_var_k = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 93;
        goto frame_exception_exit_1;
        outline_result_2:;
        {
            PyObject *old = par_kernel_size;
            par_kernel_size = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (par_image == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 95;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = par_image;
        CHECK_OBJECT(par_kernel_size);
        tmp_args_element_value_9 = par_kernel_size;
        CHECK_OBJECT(par_clip_limit);
        tmp_args_element_value_10 = par_clip_limit;
        CHECK_OBJECT(par_nbins);
        tmp_args_element_value_11 = par_nbins;
        frame_a58a563761033311a0d09406f3f06c0d->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_8, call_args);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_image;
            par_image = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_image);
        tmp_expression_value_9 = par_image;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[10]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_float_dtype);
        tmp_tuple_element_4 = var_float_dtype;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[23]);
        frame_a58a563761033311a0d09406f3f06c0d->m_frame.f_lineno = 96;
        tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_image;
            assert(old != NULL);
            par_image = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_image);
        tmp_args_element_value_12 = par_image;
        frame_a58a563761033311a0d09406f3f06c0d->m_frame.f_lineno = 97;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_12);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_a58a563761033311a0d09406f3f06c0d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a58a563761033311a0d09406f3f06c0d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a58a563761033311a0d09406f3f06c0d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a58a563761033311a0d09406f3f06c0d,
        type_description_1,
        par_image,
        par_kernel_size,
        par_clip_limit,
        par_nbins,
        var_float_dtype
    );


    // Release cached frame if used for exception.
    if (frame_a58a563761033311a0d09406f3f06c0d == cache_frame_a58a563761033311a0d09406f3f06c0d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a58a563761033311a0d09406f3f06c0d);
        cache_frame_a58a563761033311a0d09406f3f06c0d = NULL;
    }

    assertFrameObject(frame_a58a563761033311a0d09406f3f06c0d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_image);
    Py_DECREF(par_image);
    par_image = NULL;
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    par_kernel_size = NULL;
    CHECK_OBJECT(var_float_dtype);
    Py_DECREF(var_float_dtype);
    var_float_dtype = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_image);
    par_image = NULL;
    Py_XDECREF(par_kernel_size);
    par_kernel_size = NULL;
    Py_XDECREF(var_float_dtype);
    var_float_dtype = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_clip_limit);
    Py_DECREF(par_clip_limit);
    CHECK_OBJECT(par_nbins);
    Py_DECREF(par_nbins);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_clip_limit);
    Py_DECREF(par_clip_limit);
    CHECK_OBJECT(par_nbins);
    Py_DECREF(par_nbins);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_skimage$exposure$_adapthist$$$function__2__clahe(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_image = python_pars[0];
    PyObject *par_kernel_size = python_pars[1];
    PyObject *par_clip_limit = python_pars[2];
    PyObject *par_nbins = python_pars[3];
    PyObject *var_ndim = NULL;
    PyObject *var_dtype = NULL;
    PyObject *var_pad_start_per_dim = NULL;
    PyObject *var_pad_end_per_dim = NULL;
    PyObject *var_bin_size = NULL;
    PyObject *var_lut = NULL;
    PyObject *var_ns_hist = NULL;
    PyObject *var_hist_blocks_shape = NULL;
    PyObject *var_hist_blocks_axis_order = NULL;
    PyObject *var_hist_slices = NULL;
    PyObject *var_hist_blocks = NULL;
    PyObject *var_hist_block_assembled_shape = NULL;
    PyObject *var_clim = NULL;
    PyObject *var_hist = NULL;
    PyObject *var_map_array = NULL;
    PyObject *var_ns_proc = NULL;
    PyObject *var_blocks_shape = NULL;
    PyObject *var_blocks_axis_order = NULL;
    PyObject *var_blocks = NULL;
    PyObject *var_blocks_flattened_shape = NULL;
    PyObject *var_coeffs = NULL;
    PyObject *var_inv_coeffs = NULL;
    PyObject *var_result = NULL;
    PyObject *var_iedge = NULL;
    PyObject *var_edge = NULL;
    PyObject *var_edge_maps = NULL;
    PyObject *var_edge_mapped = NULL;
    PyObject *var_edge_coeffs = NULL;
    PyObject *var_blocks_axis_rebuild_order = NULL;
    PyObject *var_unpad_slices = NULL;
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_1_var_k = NULL;
    PyObject *outline_1_var_s = NULL;
    PyObject *outline_2_var_p_i = NULL;
    PyObject *outline_2_var_p_f = NULL;
    PyObject *outline_3_var_s = NULL;
    PyObject *outline_3_var_k = NULL;
    PyObject *outline_4_var_k = NULL;
    PyObject *outline_4_var_n = NULL;
    PyObject *outline_5_var__ = NULL;
    PyObject *outline_6_var_s = NULL;
    PyObject *outline_6_var_k = NULL;
    PyObject *outline_7_var_k = NULL;
    PyObject *outline_8_var_c = NULL;
    PyObject *outline_9_var_dim = NULL;
    PyObject *outline_9_var_c = NULL;
    PyObject *outline_10_var_e = NULL;
    PyObject *outline_10_var_n = NULL;
    PyObject *outline_11_var_d = NULL;
    PyObject *outline_11_var_e = NULL;
    PyObject *outline_12_var_p_i = NULL;
    PyObject *outline_12_var_p_f = NULL;
    PyObject *outline_12_var_s = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_8__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_9__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_9__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_9__element_3 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_9__source_iter = NULL;
    PyObject *tmp_listcomp_10__$0 = NULL;
    PyObject *tmp_listcomp_10__contraction = NULL;
    PyObject *tmp_listcomp_10__iter_value_0 = NULL;
    PyObject *tmp_listcomp_11__$0 = NULL;
    PyObject *tmp_listcomp_11__contraction = NULL;
    PyObject *tmp_listcomp_11__iter_value_0 = NULL;
    PyObject *tmp_listcomp_12__$0 = NULL;
    PyObject *tmp_listcomp_12__contraction = NULL;
    PyObject *tmp_listcomp_12__iter_value_0 = NULL;
    PyObject *tmp_listcomp_13__$0 = NULL;
    PyObject *tmp_listcomp_13__contraction = NULL;
    PyObject *tmp_listcomp_13__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_listcomp_4__$0 = NULL;
    PyObject *tmp_listcomp_4__contraction = NULL;
    PyObject *tmp_listcomp_4__iter_value_0 = NULL;
    PyObject *tmp_listcomp_5__$0 = NULL;
    PyObject *tmp_listcomp_5__contraction = NULL;
    PyObject *tmp_listcomp_5__iter_value_0 = NULL;
    PyObject *tmp_listcomp_6__$0 = NULL;
    PyObject *tmp_listcomp_6__contraction = NULL;
    PyObject *tmp_listcomp_6__iter_value_0 = NULL;
    PyObject *tmp_listcomp_7__$0 = NULL;
    PyObject *tmp_listcomp_7__contraction = NULL;
    PyObject *tmp_listcomp_7__iter_value_0 = NULL;
    PyObject *tmp_listcomp_8__$0 = NULL;
    PyObject *tmp_listcomp_8__contraction = NULL;
    PyObject *tmp_listcomp_8__iter_value_0 = NULL;
    PyObject *tmp_listcomp_9__$0 = NULL;
    PyObject *tmp_listcomp_9__contraction = NULL;
    PyObject *tmp_listcomp_9__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_256f38e14ee45c48159fd03df70d90f1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    static struct Nuitka_FrameObject *cache_frame_256f38e14ee45c48159fd03df70d90f1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_256f38e14ee45c48159fd03df70d90f1)) {
        Py_XDECREF(cache_frame_256f38e14ee45c48159fd03df70d90f1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_256f38e14ee45c48159fd03df70d90f1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_256f38e14ee45c48159fd03df70d90f1 = MAKE_FUNCTION_FRAME(tstate, codeobj_256f38e14ee45c48159fd03df70d90f1, module_skimage$exposure$_adapthist, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_256f38e14ee45c48159fd03df70d90f1->m_type_description == NULL);
    frame_256f38e14ee45c48159fd03df70d90f1 = cache_frame_256f38e14ee45c48159fd03df70d90f1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_256f38e14ee45c48159fd03df70d90f1);
    assert(Py_REFCNT(frame_256f38e14ee45c48159fd03df70d90f1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_image);
        tmp_expression_value_1 = par_image;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[17]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ndim == NULL);
        var_ndim = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_image);
        tmp_expression_value_2 = par_image;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dtype == NULL);
        var_dtype = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_kernel_size);
            tmp_iter_arg_1 = par_kernel_size;
            tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_5;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_6 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 131;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_k;
                outline_0_var_k = tmp_assign_source_7;
                Py_INCREF(outline_0_var_k);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_floordiv_expr_left_1;
            PyObject *tmp_floordiv_expr_right_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_k);
            tmp_floordiv_expr_left_1 = outline_0_var_k;
            tmp_floordiv_expr_right_1 = mod_consts[25];
            tmp_append_value_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_3 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_3);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
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
        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
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

        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
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
        exception_lineno = 131;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_pad_start_per_dim == NULL);
        var_pad_start_per_dim = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_8;
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_expression_value_3;
            tmp_called_value_1 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT(par_kernel_size);
            tmp_args_element_value_1 = par_kernel_size;
            CHECK_OBJECT(par_image);
            tmp_expression_value_3 = par_image;
            tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[12]);
            if (tmp_args_element_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 134;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
            }

            Py_DECREF(tmp_args_element_value_2);
            if (tmp_iter_arg_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_10;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_11 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 133;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_iter_arg_3 = tmp_listcomp_2__iter_value_0;
            tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_13 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
            if (tmp_assign_source_13 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 133;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_14 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
            if (tmp_assign_source_14 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 133;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        exception_lineno = 133;
                        goto try_except_handler_7;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[26];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 133;
                goto try_except_handler_7;
            }
        }
        goto try_end_1;
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

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_6;
        // End of try:
        try_end_1:;
        goto try_end_2;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_15 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_1_var_k;
                outline_1_var_k = tmp_assign_source_15;
                Py_INCREF(outline_1_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_16 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_1_var_s;
                outline_1_var_s = tmp_assign_source_16;
                Py_INCREF(outline_1_var_s);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_mod_expr_left_1;
            PyObject *tmp_mod_expr_right_1;
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_mod_expr_left_2;
            PyObject *tmp_mod_expr_right_2;
            PyObject *tmp_int_arg_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_truediv_expr_left_1;
            PyObject *tmp_truediv_expr_right_1;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_k);
            tmp_sub_expr_left_1 = outline_1_var_k;
            CHECK_OBJECT(outline_1_var_s);
            tmp_mod_expr_left_2 = outline_1_var_s;
            CHECK_OBJECT(outline_1_var_k);
            tmp_mod_expr_right_2 = outline_1_var_k;
            tmp_sub_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
            if (tmp_sub_expr_right_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_mod_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_right_1);
            if (tmp_mod_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT(outline_1_var_k);
            tmp_mod_expr_right_1 = outline_1_var_k;
            tmp_add_expr_left_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
            Py_DECREF(tmp_mod_expr_left_1);
            if (tmp_add_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[27]);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT(outline_1_var_k);
            tmp_truediv_expr_left_1 = outline_1_var_k;
            tmp_truediv_expr_right_1 = mod_consts[28];
            tmp_args_element_value_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
            if (tmp_args_element_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 133;
            tmp_int_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_int_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_add_expr_right_1 = PyNumber_Int(tmp_int_arg_1);
            Py_DECREF(tmp_int_arg_1);
            if (tmp_add_expr_right_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_append_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_add_expr_right_1);
            if (tmp_append_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_8 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_8);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_k);
        outline_1_var_k = NULL;
        Py_XDECREF(outline_1_var_s);
        outline_1_var_s = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_k);
        outline_1_var_k = NULL;
        Py_XDECREF(outline_1_var_s);
        outline_1_var_s = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 133;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(var_pad_end_per_dim == NULL);
        var_pad_end_per_dim = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[29]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_image);
        tmp_tuple_element_1 = par_image;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_args_element_value_5;
            tmp_called_value_4 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT(var_pad_start_per_dim);
            tmp_args_element_value_4 = var_pad_start_per_dim;
            CHECK_OBJECT(var_pad_end_per_dim);
            tmp_args_element_value_5 = var_pad_end_per_dim;
            frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 137;
            {
                PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
                tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
            }

            if (tmp_iter_arg_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_assign_source_18 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
            Py_DECREF(tmp_iter_arg_4);
            if (tmp_assign_source_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_18;
        }
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_19;
        }
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_3 = tmp_listcomp_3__$0;
            tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_20 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 136;
                    goto try_except_handler_9;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_20;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_iter_arg_5 = tmp_listcomp_3__iter_value_0;
            tmp_assign_source_21 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__source_iter;
                tmp_listcomp$tuple_unpack_2__source_iter = tmp_assign_source_21;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_3 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_22 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
            if (tmp_assign_source_22 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 136;
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_1;
                tmp_listcomp$tuple_unpack_2__element_1 = tmp_assign_source_22;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_4 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_23 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
            if (tmp_assign_source_23 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 136;
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_2;
                tmp_listcomp$tuple_unpack_2__element_2 = tmp_assign_source_23;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_2__source_iter;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        exception_lineno = 136;
                        goto try_except_handler_11;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[26];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 136;
                goto try_except_handler_11;
            }
        }
        goto try_end_3;
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

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_10;
        // End of try:
        try_end_3:;
        goto try_end_4;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        {
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_1);
            tmp_assign_source_24 = tmp_listcomp$tuple_unpack_2__element_1;
            {
                PyObject *old = outline_2_var_p_i;
                outline_2_var_p_i = tmp_assign_source_24;
                Py_INCREF(outline_2_var_p_i);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_2);
            tmp_assign_source_25 = tmp_listcomp$tuple_unpack_2__element_2;
            {
                PyObject *old = outline_2_var_p_f;
                outline_2_var_p_f = tmp_assign_source_25;
                Py_INCREF(outline_2_var_p_f);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_list_element_1;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            CHECK_OBJECT(outline_2_var_p_i);
            tmp_list_element_1 = outline_2_var_p_i;
            tmp_append_value_3 = MAKE_LIST_EMPTY(2);
            PyList_SET_ITEM0(tmp_append_value_3, 0, tmp_list_element_1);
            CHECK_OBJECT(outline_2_var_p_f);
            tmp_list_element_1 = outline_2_var_p_f;
            PyList_SET_ITEM0(tmp_append_value_3, 1, tmp_list_element_1);
            tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_tuple_element_1 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_tuple_element_1);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_XDECREF(outline_2_var_p_i);
        outline_2_var_p_i = NULL;
        Py_XDECREF(outline_2_var_p_f);
        outline_2_var_p_f = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_2_var_p_i);
        outline_2_var_p_i = NULL;
        Py_XDECREF(outline_2_var_p_f);
        outline_2_var_p_f = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 136;
        goto tuple_build_exception_1;
        outline_result_3:;
        PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[30]);
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 136;
        tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_image;
            assert(old != NULL);
            par_image = tmp_assign_source_17;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_floordiv_expr_left_2;
        PyObject *tmp_floordiv_expr_right_2;
        tmp_add_expr_left_2 = mod_consts[8];
        tmp_floordiv_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_floordiv_expr_left_2 == NULL)) {
            tmp_floordiv_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_floordiv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nbins);
        tmp_floordiv_expr_right_2 = par_nbins;
        tmp_add_expr_right_2 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_26 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bin_size == NULL);
        var_bin_size = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[31]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[11]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 142;
        tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 142;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[32]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lut == NULL);
        var_lut = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_ifloordiv_expr_left_1;
        PyObject *tmp_ifloordiv_expr_right_1;
        CHECK_OBJECT(var_lut);
        tmp_ifloordiv_expr_left_1 = var_lut;
        CHECK_OBJECT(var_bin_size);
        tmp_ifloordiv_expr_right_1 = var_bin_size;
        tmp_result = INPLACE_OPERATION_FLOORDIV_OBJECT_OBJECT(&tmp_ifloordiv_expr_left_1, tmp_ifloordiv_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = tmp_ifloordiv_expr_left_1;
        var_lut = tmp_assign_source_28;

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_lut);
        tmp_expression_value_8 = var_lut;
        CHECK_OBJECT(par_image);
        tmp_subscript_value_1 = par_image;
        tmp_assign_source_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_1);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_image;
            assert(old != NULL);
            par_image = tmp_assign_source_29;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        // Tried code:
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_args_element_value_8;
            tmp_called_value_7 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT(par_image);
            tmp_expression_value_9 = par_image;
            tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[12]);
            if (tmp_args_element_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            CHECK_OBJECT(par_kernel_size);
            tmp_args_element_value_8 = par_kernel_size;
            frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 149;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
                tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
            }

            Py_DECREF(tmp_args_element_value_7);
            if (tmp_iter_arg_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            tmp_assign_source_31 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
            Py_DECREF(tmp_iter_arg_6);
            if (tmp_assign_source_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            assert(tmp_listcomp_4__$0 == NULL);
            tmp_listcomp_4__$0 = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;
            tmp_assign_source_32 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_4__contraction == NULL);
            tmp_listcomp_4__contraction = tmp_assign_source_32;
        }
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_33;
            CHECK_OBJECT(tmp_listcomp_4__$0);
            tmp_next_source_4 = tmp_listcomp_4__$0;
            tmp_assign_source_33 = ITERATOR_NEXT(tmp_next_source_4);
            if (tmp_assign_source_33 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 149;
                    goto try_except_handler_13;
                }
            }

            {
                PyObject *old = tmp_listcomp_4__iter_value_0;
                tmp_listcomp_4__iter_value_0 = tmp_assign_source_33;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_iter_arg_7;
            CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
            tmp_iter_arg_7 = tmp_listcomp_4__iter_value_0;
            tmp_assign_source_34 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
            if (tmp_assign_source_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_3__source_iter;
                tmp_listcomp$tuple_unpack_3__source_iter = tmp_assign_source_34;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
            tmp_unpack_5 = tmp_listcomp$tuple_unpack_3__source_iter;
            tmp_assign_source_35 = UNPACK_NEXT(tstate, tmp_unpack_5, 0, 2);
            if (tmp_assign_source_35 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 149;
                goto try_except_handler_15;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_3__element_1;
                tmp_listcomp$tuple_unpack_3__element_1 = tmp_assign_source_35;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
            tmp_unpack_6 = tmp_listcomp$tuple_unpack_3__source_iter;
            tmp_assign_source_36 = UNPACK_NEXT(tstate, tmp_unpack_6, 1, 2);
            if (tmp_assign_source_36 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 149;
                goto try_except_handler_15;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_3__element_2;
                tmp_listcomp$tuple_unpack_3__element_2 = tmp_assign_source_36;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
            tmp_iterator_name_3 = tmp_listcomp$tuple_unpack_3__source_iter;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        exception_lineno = 149;
                        goto try_except_handler_15;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[26];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 149;
                goto try_except_handler_15;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_3__source_iter);
        tmp_listcomp$tuple_unpack_3__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_14;
        // End of try:
        try_end_5:;
        goto try_end_6;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_1);
        tmp_listcomp$tuple_unpack_3__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_2);
        tmp_listcomp$tuple_unpack_3__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        try_end_6:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_3__source_iter);
        tmp_listcomp$tuple_unpack_3__source_iter = NULL;
        {
            PyObject *tmp_assign_source_37;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__element_1);
            tmp_assign_source_37 = tmp_listcomp$tuple_unpack_3__element_1;
            {
                PyObject *old = outline_3_var_s;
                outline_3_var_s = tmp_assign_source_37;
                Py_INCREF(outline_3_var_s);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_1);
        tmp_listcomp$tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_38;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__element_2);
            tmp_assign_source_38 = tmp_listcomp$tuple_unpack_3__element_2;
            {
                PyObject *old = outline_3_var_k;
                outline_3_var_k = tmp_assign_source_38;
                Py_INCREF(outline_3_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_2);
        tmp_listcomp$tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_append_list_4;
            PyObject *tmp_append_value_4;
            PyObject *tmp_sub_expr_left_2;
            PyObject *tmp_sub_expr_right_2;
            PyObject *tmp_int_arg_2;
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            CHECK_OBJECT(tmp_listcomp_4__contraction);
            tmp_append_list_4 = tmp_listcomp_4__contraction;
            CHECK_OBJECT(outline_3_var_s);
            tmp_truediv_expr_left_2 = outline_3_var_s;
            CHECK_OBJECT(outline_3_var_k);
            tmp_truediv_expr_right_2 = outline_3_var_k;
            tmp_int_arg_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            if (tmp_int_arg_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            tmp_sub_expr_left_2 = PyNumber_Int(tmp_int_arg_2);
            Py_DECREF(tmp_int_arg_2);
            if (tmp_sub_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            tmp_sub_expr_right_2 = mod_consts[8];
            tmp_append_value_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            Py_DECREF(tmp_sub_expr_left_2);
            if (tmp_append_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_13;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        tmp_assign_source_30 = tmp_listcomp_4__contraction;
        Py_INCREF(tmp_assign_source_30);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_XDECREF(outline_3_var_s);
        outline_3_var_s = NULL;
        Py_XDECREF(outline_3_var_k);
        outline_3_var_k = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_3_var_s);
        outline_3_var_s = NULL;
        Py_XDECREF(outline_3_var_k);
        outline_3_var_k = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 149;
        goto frame_exception_exit_1;
        outline_result_4:;
        assert(var_ns_hist == NULL);
        var_ns_hist = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_list_element_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ns_hist);
        tmp_list_element_2 = var_ns_hist;
        tmp_args_element_value_9 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_args_element_value_9, 0, tmp_list_element_2);
        CHECK_OBJECT(par_kernel_size);
        tmp_list_element_2 = par_kernel_size;
        PyList_SET_ITEM0(tmp_args_element_value_9, 1, tmp_list_element_2);
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 150;
        tmp_expression_value_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[33], tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[34]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 150;
        tmp_assign_source_39 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[35]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hist_blocks_shape == NULL);
        var_hist_blocks_shape = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_list_element_3;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[33]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[31]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[6];
        CHECK_OBJECT(var_ndim);
        tmp_mult_expr_left_1 = var_ndim;
        tmp_mult_expr_right_1 = mod_consts[25];
        tmp_args_element_value_12 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[25];
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_mult_expr_left_2;
            PyObject *tmp_mult_expr_right_2;
            PyObject *tmp_args_element_value_16;
            PyList_SET_ITEM(tmp_args_element_value_10, 0, tmp_list_element_3);
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[31]);
            if (tmp_called_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_args_element_value_14 = mod_consts[8];
            CHECK_OBJECT(var_ndim);
            tmp_mult_expr_left_2 = var_ndim;
            tmp_mult_expr_right_2 = mod_consts[25];
            tmp_args_element_value_15 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
            if (tmp_args_element_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);

                exception_lineno = 152;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_args_element_value_16 = mod_consts[25];
            frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 152;
            {
                PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
                tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
            }

            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_10, 1, tmp_list_element_3);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_10);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 151;
        tmp_called_instance_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 151;
        tmp_assign_source_40 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[35]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hist_blocks_axis_order == NULL);
        var_hist_blocks_axis_order = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        // Tried code:
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_iter_arg_8;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_args_element_value_18;
            tmp_called_value_11 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT(par_kernel_size);
            tmp_args_element_value_17 = par_kernel_size;
            CHECK_OBJECT(var_ns_hist);
            tmp_args_element_value_18 = var_ns_hist;
            frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 154;
            {
                PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
                tmp_iter_arg_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
            }

            if (tmp_iter_arg_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            tmp_assign_source_42 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
            Py_DECREF(tmp_iter_arg_8);
            if (tmp_assign_source_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            assert(tmp_listcomp_5__$0 == NULL);
            tmp_listcomp_5__$0 = tmp_assign_source_42;
        }
        {
            PyObject *tmp_assign_source_43;
            tmp_assign_source_43 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_5__contraction == NULL);
            tmp_listcomp_5__contraction = tmp_assign_source_43;
        }
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_44;
            CHECK_OBJECT(tmp_listcomp_5__$0);
            tmp_next_source_5 = tmp_listcomp_5__$0;
            tmp_assign_source_44 = ITERATOR_NEXT(tmp_next_source_5);
            if (tmp_assign_source_44 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_5;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 153;
                    goto try_except_handler_17;
                }
            }

            {
                PyObject *old = tmp_listcomp_5__iter_value_0;
                tmp_listcomp_5__iter_value_0 = tmp_assign_source_44;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_iter_arg_9;
            CHECK_OBJECT(tmp_listcomp_5__iter_value_0);
            tmp_iter_arg_9 = tmp_listcomp_5__iter_value_0;
            tmp_assign_source_45 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
            if (tmp_assign_source_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_4__source_iter;
                tmp_listcomp$tuple_unpack_4__source_iter = tmp_assign_source_45;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
            tmp_unpack_7 = tmp_listcomp$tuple_unpack_4__source_iter;
            tmp_assign_source_46 = UNPACK_NEXT(tstate, tmp_unpack_7, 0, 2);
            if (tmp_assign_source_46 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 153;
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_4__element_1;
                tmp_listcomp$tuple_unpack_4__element_1 = tmp_assign_source_46;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
            tmp_unpack_8 = tmp_listcomp$tuple_unpack_4__source_iter;
            tmp_assign_source_47 = UNPACK_NEXT(tstate, tmp_unpack_8, 1, 2);
            if (tmp_assign_source_47 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 153;
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_4__element_2;
                tmp_listcomp$tuple_unpack_4__element_2 = tmp_assign_source_47;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_4;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
            tmp_iterator_name_4 = tmp_listcomp$tuple_unpack_4__source_iter;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        exception_lineno = 153;
                        goto try_except_handler_19;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[26];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 153;
                goto try_except_handler_19;
            }
        }
        goto try_end_7;
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

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_4__source_iter);
        tmp_listcomp$tuple_unpack_4__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_18;
        // End of try:
        try_end_7:;
        goto try_end_8;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_4__element_1);
        tmp_listcomp$tuple_unpack_4__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_4__element_2);
        tmp_listcomp$tuple_unpack_4__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        try_end_8:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_4__source_iter);
        tmp_listcomp$tuple_unpack_4__source_iter = NULL;
        {
            PyObject *tmp_assign_source_48;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__element_1);
            tmp_assign_source_48 = tmp_listcomp$tuple_unpack_4__element_1;
            {
                PyObject *old = outline_4_var_k;
                outline_4_var_k = tmp_assign_source_48;
                Py_INCREF(outline_4_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_4__element_1);
        tmp_listcomp$tuple_unpack_4__element_1 = NULL;

        {
            PyObject *tmp_assign_source_49;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__element_2);
            tmp_assign_source_49 = tmp_listcomp$tuple_unpack_4__element_2;
            {
                PyObject *old = outline_4_var_n;
                outline_4_var_n = tmp_assign_source_49;
                Py_INCREF(outline_4_var_n);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_4__element_2);
        tmp_listcomp$tuple_unpack_4__element_2 = NULL;

        {
            PyObject *tmp_append_list_5;
            PyObject *tmp_append_value_5;
            PyObject *tmp_start_value_1;
            PyObject *tmp_floordiv_expr_left_3;
            PyObject *tmp_floordiv_expr_right_3;
            PyObject *tmp_stop_value_1;
            PyObject *tmp_add_expr_left_3;
            PyObject *tmp_add_expr_right_3;
            PyObject *tmp_floordiv_expr_left_4;
            PyObject *tmp_floordiv_expr_right_4;
            PyObject *tmp_mult_expr_left_3;
            PyObject *tmp_mult_expr_right_3;
            CHECK_OBJECT(tmp_listcomp_5__contraction);
            tmp_append_list_5 = tmp_listcomp_5__contraction;
            CHECK_OBJECT(outline_4_var_k);
            tmp_floordiv_expr_left_3 = outline_4_var_k;
            tmp_floordiv_expr_right_3 = mod_consts[25];
            tmp_start_value_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_3, tmp_floordiv_expr_right_3);
            if (tmp_start_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            CHECK_OBJECT(outline_4_var_k);
            tmp_floordiv_expr_left_4 = outline_4_var_k;
            tmp_floordiv_expr_right_4 = mod_consts[25];
            tmp_add_expr_left_3 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_4, tmp_floordiv_expr_right_4);
            if (tmp_add_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_start_value_1);

                exception_lineno = 153;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            CHECK_OBJECT(outline_4_var_n);
            tmp_mult_expr_left_3 = outline_4_var_n;
            CHECK_OBJECT(outline_4_var_k);
            tmp_mult_expr_right_3 = outline_4_var_k;
            tmp_add_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
            if (tmp_add_expr_right_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_start_value_1);
                Py_DECREF(tmp_add_expr_left_3);

                exception_lineno = 153;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
            Py_DECREF(tmp_add_expr_left_3);
            Py_DECREF(tmp_add_expr_right_3);
            if (tmp_stop_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_start_value_1);

                exception_lineno = 153;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            tmp_append_value_5 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
            Py_DECREF(tmp_start_value_1);
            Py_DECREF(tmp_stop_value_1);
            assert(!(tmp_append_value_5 == NULL));
            tmp_result = LIST_APPEND1(tmp_append_list_5, tmp_append_value_5);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_17;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        tmp_assign_source_41 = tmp_listcomp_5__contraction;
        Py_INCREF(tmp_assign_source_41);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(tmp_listcomp_5__$0);
        Py_DECREF(tmp_listcomp_5__$0);
        tmp_listcomp_5__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        Py_DECREF(tmp_listcomp_5__contraction);
        tmp_listcomp_5__contraction = NULL;
        Py_XDECREF(tmp_listcomp_5__iter_value_0);
        tmp_listcomp_5__iter_value_0 = NULL;
        goto try_return_handler_16;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_5__$0);
        Py_DECREF(tmp_listcomp_5__$0);
        tmp_listcomp_5__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        Py_DECREF(tmp_listcomp_5__contraction);
        tmp_listcomp_5__contraction = NULL;
        Py_XDECREF(tmp_listcomp_5__iter_value_0);
        tmp_listcomp_5__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_XDECREF(outline_4_var_k);
        outline_4_var_k = NULL;
        Py_XDECREF(outline_4_var_n);
        outline_4_var_n = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_4_var_k);
        outline_4_var_k = NULL;
        Py_XDECREF(outline_4_var_n);
        outline_4_var_n = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 153;
        goto frame_exception_exit_1;
        outline_result_5:;
        assert(var_hist_slices == NULL);
        var_hist_slices = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_args_element_value_19;
        CHECK_OBJECT(par_image);
        tmp_expression_value_14 = par_image;
        CHECK_OBJECT(var_hist_slices);
        tmp_tuple_arg_1 = var_hist_slices;
        tmp_subscript_value_2 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_subscript_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hist_blocks_shape);
        tmp_args_element_value_19 = var_hist_blocks_shape;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 155;
        tmp_assign_source_50 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[36], tmp_args_element_value_19);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hist_blocks == NULL);
        var_hist_blocks = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[37]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hist_blocks);
        tmp_kw_call_arg_value_0_2 = var_hist_blocks;
        CHECK_OBJECT(var_hist_blocks_axis_order);
        tmp_kw_call_dict_value_0_2 = var_hist_blocks_axis_order;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 156;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_12, args, kw_values, mod_consts[38]);
        }

        Py_DECREF(tmp_called_value_12);
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_hist_blocks;
            assert(old != NULL);
            var_hist_blocks = tmp_assign_source_51;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(var_hist_blocks);
        tmp_expression_value_16 = var_hist_blocks;
        tmp_assign_source_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[12]);
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hist_block_assembled_shape == NULL);
        var_hist_block_assembled_shape = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_21;
        CHECK_OBJECT(var_hist_blocks);
        tmp_expression_value_17 = var_hist_blocks;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[36]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ns_hist);
        tmp_args_element_value_21 = var_ns_hist;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 158;
        tmp_tuple_element_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[39], tmp_args_element_value_21);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_element_value_20, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[40];
        PyTuple_SET_ITEM0(tmp_args_element_value_20, 1, tmp_tuple_element_2);
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 158;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_hist_blocks;
            assert(old != NULL);
            var_hist_blocks = tmp_assign_source_53;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_clip_limit);
        tmp_cmp_expr_left_1 = par_clip_limit;
        tmp_cmp_expr_right_1 = mod_consts[41];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_54;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[42]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_clip_limit);
        tmp_mult_expr_left_4 = par_clip_limit;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kernel_size);
        tmp_args_element_value_23 = par_kernel_size;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 162;
        tmp_mult_expr_right_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts[39], tmp_args_element_value_23);
        if (tmp_mult_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_right_4);
        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = mod_consts[8];
        tmp_args_element_value_25 = Py_None;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_int_arg_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_14, call_args);
        }

        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_int_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_54 = PyNumber_Int(tmp_int_arg_3);
        Py_DECREF(tmp_int_arg_3);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_clim == NULL);
        var_clim = tmp_assign_source_54;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_26;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kernel_size);
        tmp_args_element_value_26 = par_kernel_size;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 165;
        tmp_assign_source_55 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[39], tmp_args_element_value_26);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_clim == NULL);
        var_clim = tmp_assign_source_55;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_3;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[43]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[44]);
        if (tmp_kw_call_arg_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_1 = mod_consts[40];
        CHECK_OBJECT(var_hist_blocks);
        tmp_kw_call_arg_value_2_1 = var_hist_blocks;
        CHECK_OBJECT(par_nbins);
        tmp_kw_call_dict_value_0_3 = par_nbins;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 167;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_15, args, kw_values, mod_consts[45]);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hist == NULL);
        var_hist = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_dict_value_0_4;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[43]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_4 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_kw_call_arg_value_0_4 == NULL)) {
            tmp_kw_call_arg_value_0_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_kw_call_arg_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_2 = mod_consts[40];
        CHECK_OBJECT(var_hist);
        tmp_kw_call_arg_value_2_2 = var_hist;
        CHECK_OBJECT(var_clim);
        tmp_kw_call_dict_value_0_4 = var_clim;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 168;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_16, args, kw_values, mod_consts[47]);
        }

        Py_DECREF(tmp_called_value_16);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_hist;
            assert(old != NULL);
            var_hist = tmp_assign_source_57;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_31;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hist);
        tmp_args_element_value_27 = var_hist;
        tmp_args_element_value_28 = mod_consts[6];
        tmp_sub_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_sub_expr_left_3 == NULL)) {
            tmp_sub_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_sub_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_3 = mod_consts[8];
        tmp_args_element_value_29 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_args_element_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kernel_size);
        tmp_args_element_value_31 = par_kernel_size;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 169;
        tmp_args_element_value_30 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts[39], tmp_args_element_value_31);
        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_29);

            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_17, call_args);
        }

        Py_DECREF(tmp_args_element_value_29);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_hist;
            assert(old != NULL);
            var_hist = tmp_assign_source_58;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_stop_value_2;
        CHECK_OBJECT(var_hist);
        tmp_expression_value_22 = var_hist;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[36]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hist_block_assembled_shape);
        tmp_expression_value_23 = var_hist_block_assembled_shape;
        CHECK_OBJECT(var_ndim);
        tmp_stop_value_2 = var_ndim;
        tmp_subscript_value_3 = MAKE_SLICE_OBJECT1(tmp_stop_value_2);
        assert(!(tmp_subscript_value_3 == NULL));
        tmp_add_expr_left_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_4 = mod_consts[49];
        tmp_args_element_value_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        if (tmp_args_element_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 170;
        tmp_assign_source_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_hist;
            assert(old != NULL);
            var_hist = tmp_assign_source_59;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[29]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hist);
        tmp_tuple_element_3 = var_hist;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_add_expr_left_5;
            PyObject *tmp_add_expr_right_5;
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            // Tried code:
            {
                PyObject *tmp_assign_source_61;
                PyObject *tmp_iter_arg_10;
                PyObject *tmp_xrange_low_1;
                CHECK_OBJECT(var_ndim);
                tmp_xrange_low_1 = var_ndim;
                tmp_iter_arg_10 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
                if (tmp_iter_arg_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 174;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_20;
                }
                tmp_assign_source_61 = MAKE_ITERATOR(tstate, tmp_iter_arg_10);
                Py_DECREF(tmp_iter_arg_10);
                if (tmp_assign_source_61 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 174;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_20;
                }
                assert(tmp_listcomp_6__$0 == NULL);
                tmp_listcomp_6__$0 = tmp_assign_source_61;
            }
            {
                PyObject *tmp_assign_source_62;
                tmp_assign_source_62 = MAKE_LIST_EMPTY(0);
                assert(tmp_listcomp_6__contraction == NULL);
                tmp_listcomp_6__contraction = tmp_assign_source_62;
            }
            // Tried code:
            loop_start_6:;
            {
                PyObject *tmp_next_source_6;
                PyObject *tmp_assign_source_63;
                CHECK_OBJECT(tmp_listcomp_6__$0);
                tmp_next_source_6 = tmp_listcomp_6__$0;
                tmp_assign_source_63 = ITERATOR_NEXT(tmp_next_source_6);
                if (tmp_assign_source_63 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                        goto loop_end_6;
                    } else {

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        exception_lineno = 174;
                        goto try_except_handler_21;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_6__iter_value_0;
                    tmp_listcomp_6__iter_value_0 = tmp_assign_source_63;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_64;
                CHECK_OBJECT(tmp_listcomp_6__iter_value_0);
                tmp_assign_source_64 = tmp_listcomp_6__iter_value_0;
                {
                    PyObject *old = outline_5_var__;
                    outline_5_var__ = tmp_assign_source_64;
                    Py_INCREF(outline_5_var__);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_6;
                PyObject *tmp_append_value_6;
                CHECK_OBJECT(tmp_listcomp_6__contraction);
                tmp_append_list_6 = tmp_listcomp_6__contraction;
                tmp_append_value_6 = MAKE_LIST_REPEATED(2, mod_consts[8]);
                tmp_result = LIST_APPEND1(tmp_append_list_6, tmp_append_value_6);
                if (tmp_result == false) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 174;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_21;
                }
            }
            if (CONSIDER_THREADING(tstate) == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_21;
            }
            goto loop_start_6;
            loop_end_6:;
            CHECK_OBJECT(tmp_listcomp_6__contraction);
            tmp_add_expr_left_5 = tmp_listcomp_6__contraction;
            Py_INCREF(tmp_add_expr_left_5);
            goto try_return_handler_21;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_21:;
            CHECK_OBJECT(tmp_listcomp_6__$0);
            Py_DECREF(tmp_listcomp_6__$0);
            tmp_listcomp_6__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp_6__contraction);
            Py_DECREF(tmp_listcomp_6__contraction);
            tmp_listcomp_6__contraction = NULL;
            Py_XDECREF(tmp_listcomp_6__iter_value_0);
            tmp_listcomp_6__iter_value_0 = NULL;
            goto try_return_handler_20;
            // Exception handler code:
            try_except_handler_21:;
            exception_keeper_type_19 = exception_type;
            exception_keeper_value_19 = exception_value;
            exception_keeper_tb_19 = exception_tb;
            exception_keeper_lineno_19 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_listcomp_6__$0);
            Py_DECREF(tmp_listcomp_6__$0);
            tmp_listcomp_6__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp_6__contraction);
            Py_DECREF(tmp_listcomp_6__contraction);
            tmp_listcomp_6__contraction = NULL;
            Py_XDECREF(tmp_listcomp_6__iter_value_0);
            tmp_listcomp_6__iter_value_0 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_19;
            exception_value = exception_keeper_value_19;
            exception_tb = exception_keeper_tb_19;
            exception_lineno = exception_keeper_lineno_19;

            goto try_except_handler_20;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_20:;
            Py_XDECREF(outline_5_var__);
            outline_5_var__ = NULL;
            goto outline_result_6;
            // Exception handler code:
            try_except_handler_20:;
            exception_keeper_type_20 = exception_type;
            exception_keeper_value_20 = exception_value;
            exception_keeper_tb_20 = exception_tb;
            exception_keeper_lineno_20 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(outline_5_var__);
            outline_5_var__ = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_20;
            exception_value = exception_keeper_value_20;
            exception_tb = exception_keeper_tb_20;
            exception_lineno = exception_keeper_lineno_20;

            goto outline_exception_6;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_6:;
            exception_lineno = 174;
            goto tuple_build_exception_2;
            outline_result_6:;
            tmp_add_expr_right_5 = DEEP_COPY_LIST_GUIDED(tstate, mod_consts[50], "l");
            tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LIST(tmp_add_expr_left_5, tmp_add_expr_right_5);
            Py_DECREF(tmp_add_expr_left_5);
            Py_DECREF(tmp_add_expr_right_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_value_2, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[51]);
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 173;
        tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_map_array == NULL);
        var_map_array = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_65;
        // Tried code:
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_iter_arg_11;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_args_element_value_34;
            tmp_called_value_20 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT(par_image);
            tmp_expression_value_25 = par_image;
            tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[12]);
            if (tmp_args_element_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_22;
            }
            CHECK_OBJECT(par_kernel_size);
            tmp_args_element_value_34 = par_kernel_size;
            frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 183;
            {
                PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
                tmp_iter_arg_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
            }

            Py_DECREF(tmp_args_element_value_33);
            if (tmp_iter_arg_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_22;
            }
            tmp_assign_source_66 = MAKE_ITERATOR(tstate, tmp_iter_arg_11);
            Py_DECREF(tmp_iter_arg_11);
            if (tmp_assign_source_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_22;
            }
            assert(tmp_listcomp_7__$0 == NULL);
            tmp_listcomp_7__$0 = tmp_assign_source_66;
        }
        {
            PyObject *tmp_assign_source_67;
            tmp_assign_source_67 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_7__contraction == NULL);
            tmp_listcomp_7__contraction = tmp_assign_source_67;
        }
        // Tried code:
        loop_start_7:;
        {
            PyObject *tmp_next_source_7;
            PyObject *tmp_assign_source_68;
            CHECK_OBJECT(tmp_listcomp_7__$0);
            tmp_next_source_7 = tmp_listcomp_7__$0;
            tmp_assign_source_68 = ITERATOR_NEXT(tmp_next_source_7);
            if (tmp_assign_source_68 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_7;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 183;
                    goto try_except_handler_23;
                }
            }

            {
                PyObject *old = tmp_listcomp_7__iter_value_0;
                tmp_listcomp_7__iter_value_0 = tmp_assign_source_68;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_iter_arg_12;
            CHECK_OBJECT(tmp_listcomp_7__iter_value_0);
            tmp_iter_arg_12 = tmp_listcomp_7__iter_value_0;
            tmp_assign_source_69 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_12);
            if (tmp_assign_source_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_24;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_5__source_iter;
                tmp_listcomp$tuple_unpack_5__source_iter = tmp_assign_source_69;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_5__source_iter);
            tmp_unpack_9 = tmp_listcomp$tuple_unpack_5__source_iter;
            tmp_assign_source_70 = UNPACK_NEXT(tstate, tmp_unpack_9, 0, 2);
            if (tmp_assign_source_70 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 183;
                goto try_except_handler_25;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_5__element_1;
                tmp_listcomp$tuple_unpack_5__element_1 = tmp_assign_source_70;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_71;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_5__source_iter);
            tmp_unpack_10 = tmp_listcomp$tuple_unpack_5__source_iter;
            tmp_assign_source_71 = UNPACK_NEXT(tstate, tmp_unpack_10, 1, 2);
            if (tmp_assign_source_71 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 183;
                goto try_except_handler_25;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_5__element_2;
                tmp_listcomp$tuple_unpack_5__element_2 = tmp_assign_source_71;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_5;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_5__source_iter);
            tmp_iterator_name_5 = tmp_listcomp$tuple_unpack_5__source_iter;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        exception_lineno = 183;
                        goto try_except_handler_25;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[26];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 183;
                goto try_except_handler_25;
            }
        }
        goto try_end_9;
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

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_5__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_5__source_iter);
        tmp_listcomp$tuple_unpack_5__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto try_except_handler_24;
        // End of try:
        try_end_9:;
        goto try_end_10;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_5__element_1);
        tmp_listcomp$tuple_unpack_5__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_5__element_2);
        tmp_listcomp$tuple_unpack_5__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_23;
        // End of try:
        try_end_10:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_5__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_5__source_iter);
        tmp_listcomp$tuple_unpack_5__source_iter = NULL;
        {
            PyObject *tmp_assign_source_72;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_5__element_1);
            tmp_assign_source_72 = tmp_listcomp$tuple_unpack_5__element_1;
            {
                PyObject *old = outline_6_var_s;
                outline_6_var_s = tmp_assign_source_72;
                Py_INCREF(outline_6_var_s);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_5__element_1);
        tmp_listcomp$tuple_unpack_5__element_1 = NULL;

        {
            PyObject *tmp_assign_source_73;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_5__element_2);
            tmp_assign_source_73 = tmp_listcomp$tuple_unpack_5__element_2;
            {
                PyObject *old = outline_6_var_k;
                outline_6_var_k = tmp_assign_source_73;
                Py_INCREF(outline_6_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_5__element_2);
        tmp_listcomp$tuple_unpack_5__element_2 = NULL;

        {
            PyObject *tmp_append_list_7;
            PyObject *tmp_append_value_7;
            PyObject *tmp_int_arg_4;
            PyObject *tmp_truediv_expr_left_3;
            PyObject *tmp_truediv_expr_right_3;
            CHECK_OBJECT(tmp_listcomp_7__contraction);
            tmp_append_list_7 = tmp_listcomp_7__contraction;
            CHECK_OBJECT(outline_6_var_s);
            tmp_truediv_expr_left_3 = outline_6_var_s;
            CHECK_OBJECT(outline_6_var_k);
            tmp_truediv_expr_right_3 = outline_6_var_k;
            tmp_int_arg_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
            if (tmp_int_arg_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }
            tmp_append_value_7 = PyNumber_Int(tmp_int_arg_4);
            Py_DECREF(tmp_int_arg_4);
            if (tmp_append_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_7, tmp_append_value_7);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        goto loop_start_7;
        loop_end_7:;
        CHECK_OBJECT(tmp_listcomp_7__contraction);
        tmp_assign_source_65 = tmp_listcomp_7__contraction;
        Py_INCREF(tmp_assign_source_65);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT(tmp_listcomp_7__$0);
        Py_DECREF(tmp_listcomp_7__$0);
        tmp_listcomp_7__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_7__contraction);
        Py_DECREF(tmp_listcomp_7__contraction);
        tmp_listcomp_7__contraction = NULL;
        Py_XDECREF(tmp_listcomp_7__iter_value_0);
        tmp_listcomp_7__iter_value_0 = NULL;
        goto try_return_handler_22;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_7__$0);
        Py_DECREF(tmp_listcomp_7__$0);
        tmp_listcomp_7__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_7__contraction);
        Py_DECREF(tmp_listcomp_7__contraction);
        tmp_listcomp_7__contraction = NULL;
        Py_XDECREF(tmp_listcomp_7__iter_value_0);
        tmp_listcomp_7__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_XDECREF(outline_6_var_s);
        outline_6_var_s = NULL;
        Py_XDECREF(outline_6_var_k);
        outline_6_var_k = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_6_var_s);
        outline_6_var_s = NULL;
        Py_XDECREF(outline_6_var_k);
        outline_6_var_k = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 183;
        goto frame_exception_exit_1;
        outline_result_7:;
        assert(var_ns_proc == NULL);
        var_ns_proc = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_list_element_4;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ns_proc);
        tmp_list_element_4 = var_ns_proc;
        tmp_args_element_value_35 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_args_element_value_35, 0, tmp_list_element_4);
        CHECK_OBJECT(par_kernel_size);
        tmp_list_element_4 = par_kernel_size;
        PyList_SET_ITEM0(tmp_args_element_value_35, 1, tmp_list_element_4);
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 184;
        tmp_expression_value_26 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts[33], tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[34]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_called_instance_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 184;
        tmp_assign_source_74 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[35]);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blocks_shape == NULL);
        var_blocks_shape = tmp_assign_source_74;
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_list_element_5;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_args_element_value_39;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[33]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[31]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = mod_consts[6];
        CHECK_OBJECT(var_ndim);
        tmp_mult_expr_left_5 = var_ndim;
        tmp_mult_expr_right_5 = mod_consts[25];
        tmp_args_element_value_38 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        if (tmp_args_element_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = mod_consts[25];
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39};
            tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_22, call_args);
        }

        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_list_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_23;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_mult_expr_left_6;
            PyObject *tmp_mult_expr_right_6;
            PyObject *tmp_args_element_value_42;
            PyList_SET_ITEM(tmp_args_element_value_36, 0, tmp_list_element_5);
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto list_build_exception_2;
            }
            tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[31]);
            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto list_build_exception_2;
            }
            tmp_args_element_value_40 = mod_consts[8];
            CHECK_OBJECT(var_ndim);
            tmp_mult_expr_left_6 = var_ndim;
            tmp_mult_expr_right_6 = mod_consts[25];
            tmp_args_element_value_41 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
            if (tmp_args_element_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);

                exception_lineno = 186;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto list_build_exception_2;
            }
            tmp_args_element_value_42 = mod_consts[25];
            frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 186;
            {
                PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42};
                tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_23, call_args);
            }

            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_args_element_value_36, 1, tmp_list_element_5);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_36);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 185;
        tmp_called_instance_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_called_instance_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 185;
        tmp_assign_source_75 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_11, mod_consts[35]);
        Py_DECREF(tmp_called_instance_11);
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blocks_axis_order == NULL);
        var_blocks_axis_order = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_43;
        CHECK_OBJECT(par_image);
        tmp_called_instance_12 = par_image;
        CHECK_OBJECT(var_blocks_shape);
        tmp_args_element_value_43 = var_blocks_shape;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 187;
        tmp_assign_source_76 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_12, mod_consts[36], tmp_args_element_value_43);
        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blocks == NULL);
        var_blocks = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[37]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blocks);
        tmp_kw_call_arg_value_0_5 = var_blocks;
        CHECK_OBJECT(var_blocks_axis_order);
        tmp_kw_call_dict_value_0_5 = var_blocks_axis_order;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 188;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_24, args, kw_values, mod_consts[38]);
        }

        Py_DECREF(tmp_called_value_24);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blocks;
            assert(old != NULL);
            var_blocks = tmp_assign_source_77;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(var_blocks);
        tmp_expression_value_31 = var_blocks;
        tmp_assign_source_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[12]);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blocks_flattened_shape == NULL);
        var_blocks_flattened_shape = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_value_46;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[36]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blocks);
        tmp_args_element_value_44 = var_blocks;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ns_proc);
        tmp_args_element_value_46 = var_ns_proc;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 190;
        tmp_tuple_element_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_13, mod_consts[39], tmp_args_element_value_46);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_45 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_26;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_start_value_2;
            PyObject *tmp_stop_value_3;
            PyTuple_SET_ITEM(tmp_args_element_value_45, 0, tmp_tuple_element_4);
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[39]);
            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            CHECK_OBJECT(var_blocks);
            tmp_expression_value_35 = var_blocks;
            tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[12]);
            if (tmp_expression_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 191;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            CHECK_OBJECT(var_ndim);
            tmp_start_value_2 = var_ndim;
            tmp_stop_value_3 = Py_None;
            tmp_subscript_value_4 = MAKE_SLICE_OBJECT2(tmp_start_value_2, tmp_stop_value_3);
            assert(!(tmp_subscript_value_4 == NULL));
            tmp_args_element_value_47 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_34);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_args_element_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 191;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 191;
            tmp_tuple_element_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_47);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_47);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_45, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_45);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45};
            tmp_assign_source_79 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blocks;
            assert(old != NULL);
            var_blocks = tmp_assign_source_79;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_arg_2;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[52]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_81;
            PyObject *tmp_iter_arg_13;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_5;
            CHECK_OBJECT(par_kernel_size);
            tmp_expression_value_37 = par_kernel_size;
            tmp_subscript_value_5 = mod_consts[53];
            tmp_iter_arg_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_5);
            if (tmp_iter_arg_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_26;
            }
            tmp_assign_source_81 = MAKE_ITERATOR(tstate, tmp_iter_arg_13);
            Py_DECREF(tmp_iter_arg_13);
            if (tmp_assign_source_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_26;
            }
            assert(tmp_listcomp_8__$0 == NULL);
            tmp_listcomp_8__$0 = tmp_assign_source_81;
        }
        {
            PyObject *tmp_assign_source_82;
            tmp_assign_source_82 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_8__contraction == NULL);
            tmp_listcomp_8__contraction = tmp_assign_source_82;
        }
        // Tried code:
        loop_start_8:;
        {
            PyObject *tmp_next_source_8;
            PyObject *tmp_assign_source_83;
            CHECK_OBJECT(tmp_listcomp_8__$0);
            tmp_next_source_8 = tmp_listcomp_8__$0;
            tmp_assign_source_83 = ITERATOR_NEXT(tmp_next_source_8);
            if (tmp_assign_source_83 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_8;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 194;
                    goto try_except_handler_27;
                }
            }

            {
                PyObject *old = tmp_listcomp_8__iter_value_0;
                tmp_listcomp_8__iter_value_0 = tmp_assign_source_83;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_84;
            CHECK_OBJECT(tmp_listcomp_8__iter_value_0);
            tmp_assign_source_84 = tmp_listcomp_8__iter_value_0;
            {
                PyObject *old = outline_7_var_k;
                outline_7_var_k = tmp_assign_source_84;
                Py_INCREF(outline_7_var_k);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_8;
            PyObject *tmp_append_value_8;
            PyObject *tmp_truediv_expr_left_4;
            PyObject *tmp_truediv_expr_right_4;
            PyObject *tmp_called_instance_14;
            PyObject *tmp_args_element_value_48;
            CHECK_OBJECT(tmp_listcomp_8__contraction);
            tmp_append_list_8 = tmp_listcomp_8__contraction;
            tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_instance_14 == NULL)) {
                tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_instance_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_27;
            }
            CHECK_OBJECT(outline_7_var_k);
            tmp_args_element_value_48 = outline_7_var_k;
            frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 194;
            tmp_truediv_expr_left_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_14, mod_consts[31], tmp_args_element_value_48);
            if (tmp_truediv_expr_left_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_27;
            }
            CHECK_OBJECT(outline_7_var_k);
            tmp_truediv_expr_right_4 = outline_7_var_k;
            tmp_append_value_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
            Py_DECREF(tmp_truediv_expr_left_4);
            if (tmp_append_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_27;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_8, tmp_append_value_8);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_27;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        goto loop_start_8;
        loop_end_8:;
        CHECK_OBJECT(tmp_listcomp_8__contraction);
        tmp_tuple_arg_2 = tmp_listcomp_8__contraction;
        Py_INCREF(tmp_tuple_arg_2);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        CHECK_OBJECT(tmp_listcomp_8__$0);
        Py_DECREF(tmp_listcomp_8__$0);
        tmp_listcomp_8__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_8__contraction);
        Py_DECREF(tmp_listcomp_8__contraction);
        tmp_listcomp_8__contraction = NULL;
        Py_XDECREF(tmp_listcomp_8__iter_value_0);
        tmp_listcomp_8__iter_value_0 = NULL;
        goto try_return_handler_26;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_8__$0);
        Py_DECREF(tmp_listcomp_8__$0);
        tmp_listcomp_8__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_8__contraction);
        Py_DECREF(tmp_listcomp_8__contraction);
        tmp_listcomp_8__contraction = NULL;
        Py_XDECREF(tmp_listcomp_8__iter_value_0);
        tmp_listcomp_8__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        Py_XDECREF(outline_7_var_k);
        outline_7_var_k = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_7_var_k);
        outline_7_var_k = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 194;
        goto frame_exception_exit_1;
        outline_result_8:;
        tmp_dircall_arg2_1 = PySequence_Tuple(tmp_tuple_arg_2);
        Py_DECREF(tmp_tuple_arg_2);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg3_1 = DICT_COPY(mod_consts[54]);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_80 = impl___main__$$$function__12_complex_call_helper_keywords_star_list(tstate, dir_call_args);
        }
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_coeffs == NULL);
        var_coeffs = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_85;
        // Tried code:
        {
            PyObject *tmp_assign_source_86;
            PyObject *tmp_iter_arg_14;
            CHECK_OBJECT(var_coeffs);
            tmp_iter_arg_14 = var_coeffs;
            tmp_assign_source_86 = MAKE_ITERATOR(tstate, tmp_iter_arg_14);
            if (tmp_assign_source_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_28;
            }
            assert(tmp_listcomp_9__$0 == NULL);
            tmp_listcomp_9__$0 = tmp_assign_source_86;
        }
        {
            PyObject *tmp_assign_source_87;
            tmp_assign_source_87 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_9__contraction == NULL);
            tmp_listcomp_9__contraction = tmp_assign_source_87;
        }
        // Tried code:
        loop_start_9:;
        {
            PyObject *tmp_next_source_9;
            PyObject *tmp_assign_source_88;
            CHECK_OBJECT(tmp_listcomp_9__$0);
            tmp_next_source_9 = tmp_listcomp_9__$0;
            tmp_assign_source_88 = ITERATOR_NEXT(tmp_next_source_9);
            if (tmp_assign_source_88 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_9;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 196;
                    goto try_except_handler_29;
                }
            }

            {
                PyObject *old = tmp_listcomp_9__iter_value_0;
                tmp_listcomp_9__iter_value_0 = tmp_assign_source_88;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_89;
            CHECK_OBJECT(tmp_listcomp_9__iter_value_0);
            tmp_assign_source_89 = tmp_listcomp_9__iter_value_0;
            {
                PyObject *old = outline_8_var_c;
                outline_8_var_c = tmp_assign_source_89;
                Py_INCREF(outline_8_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_9;
            PyObject *tmp_append_value_9;
            PyObject *tmp_called_instance_15;
            PyObject *tmp_called_instance_16;
            PyObject *tmp_args_element_value_49;
            CHECK_OBJECT(tmp_listcomp_9__contraction);
            tmp_append_list_9 = tmp_listcomp_9__contraction;
            tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_instance_16 == NULL)) {
                tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_called_instance_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_29;
            }
            CHECK_OBJECT(outline_8_var_c);
            tmp_args_element_value_49 = outline_8_var_c;
            frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 196;
            tmp_called_instance_15 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_16, mod_consts[37], tmp_args_element_value_49);
            if (tmp_called_instance_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_29;
            }
            frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 196;
            tmp_append_value_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_15, mod_consts[35]);
            Py_DECREF(tmp_called_instance_15);
            if (tmp_append_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_29;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_9, tmp_append_value_9);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_29;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        goto loop_start_9;
        loop_end_9:;
        CHECK_OBJECT(tmp_listcomp_9__contraction);
        tmp_assign_source_85 = tmp_listcomp_9__contraction;
        Py_INCREF(tmp_assign_source_85);
        goto try_return_handler_29;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        CHECK_OBJECT(tmp_listcomp_9__$0);
        Py_DECREF(tmp_listcomp_9__$0);
        tmp_listcomp_9__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_9__contraction);
        Py_DECREF(tmp_listcomp_9__contraction);
        tmp_listcomp_9__contraction = NULL;
        Py_XDECREF(tmp_listcomp_9__iter_value_0);
        tmp_listcomp_9__iter_value_0 = NULL;
        goto try_return_handler_28;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_9__$0);
        Py_DECREF(tmp_listcomp_9__$0);
        tmp_listcomp_9__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_9__contraction);
        Py_DECREF(tmp_listcomp_9__contraction);
        tmp_listcomp_9__contraction = NULL;
        Py_XDECREF(tmp_listcomp_9__iter_value_0);
        tmp_listcomp_9__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto try_except_handler_28;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        Py_XDECREF(outline_8_var_c);
        outline_8_var_c = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_8_var_c);
        outline_8_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 196;
        goto frame_exception_exit_1;
        outline_result_9:;
        {
            PyObject *old = var_coeffs;
            assert(old != NULL);
            var_coeffs = tmp_assign_source_85;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_90;
        // Tried code:
        {
            PyObject *tmp_assign_source_91;
            PyObject *tmp_iter_arg_15;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_50;
            tmp_called_value_27 = (PyObject *)&PyEnum_Type;
            CHECK_OBJECT(var_coeffs);
            tmp_args_element_value_50 = var_coeffs;
            frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 197;
            tmp_iter_arg_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_50);
            if (tmp_iter_arg_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_30;
            }
            tmp_assign_source_91 = MAKE_ITERATOR(tstate, tmp_iter_arg_15);
            Py_DECREF(tmp_iter_arg_15);
            if (tmp_assign_source_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_30;
            }
            assert(tmp_listcomp_10__$0 == NULL);
            tmp_listcomp_10__$0 = tmp_assign_source_91;
        }
        {
            PyObject *tmp_assign_source_92;
            tmp_assign_source_92 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_10__contraction == NULL);
            tmp_listcomp_10__contraction = tmp_assign_source_92;
        }
        // Tried code:
        loop_start_10:;
        {
            PyObject *tmp_next_source_10;
            PyObject *tmp_assign_source_93;
            CHECK_OBJECT(tmp_listcomp_10__$0);
            tmp_next_source_10 = tmp_listcomp_10__$0;
            tmp_assign_source_93 = ITERATOR_NEXT(tmp_next_source_10);
            if (tmp_assign_source_93 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_10;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 197;
                    goto try_except_handler_31;
                }
            }

            {
                PyObject *old = tmp_listcomp_10__iter_value_0;
                tmp_listcomp_10__iter_value_0 = tmp_assign_source_93;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_94;
            PyObject *tmp_iter_arg_16;
            CHECK_OBJECT(tmp_listcomp_10__iter_value_0);
            tmp_iter_arg_16 = tmp_listcomp_10__iter_value_0;
            tmp_assign_source_94 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_16);
            if (tmp_assign_source_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_32;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_6__source_iter;
                tmp_listcomp$tuple_unpack_6__source_iter = tmp_assign_source_94;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_95;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__source_iter);
            tmp_unpack_11 = tmp_listcomp$tuple_unpack_6__source_iter;
            tmp_assign_source_95 = UNPACK_NEXT(tstate, tmp_unpack_11, 0, 2);
            if (tmp_assign_source_95 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 197;
                goto try_except_handler_33;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_6__element_1;
                tmp_listcomp$tuple_unpack_6__element_1 = tmp_assign_source_95;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_96;
            PyObject *tmp_unpack_12;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__source_iter);
            tmp_unpack_12 = tmp_listcomp$tuple_unpack_6__source_iter;
            tmp_assign_source_96 = UNPACK_NEXT(tstate, tmp_unpack_12, 1, 2);
            if (tmp_assign_source_96 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 197;
                goto try_except_handler_33;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_6__element_2;
                tmp_listcomp$tuple_unpack_6__element_2 = tmp_assign_source_96;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_6;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__source_iter);
            tmp_iterator_name_6 = tmp_listcomp$tuple_unpack_6__source_iter;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        exception_lineno = 197;
                        goto try_except_handler_33;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[26];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 197;
                goto try_except_handler_33;
            }
        }
        goto try_end_11;
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

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_6__source_iter);
        tmp_listcomp$tuple_unpack_6__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto try_except_handler_32;
        // End of try:
        try_end_11:;
        goto try_end_12;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_6__element_1);
        tmp_listcomp$tuple_unpack_6__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_6__element_2);
        tmp_listcomp$tuple_unpack_6__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto try_except_handler_31;
        // End of try:
        try_end_12:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_6__source_iter);
        tmp_listcomp$tuple_unpack_6__source_iter = NULL;
        {
            PyObject *tmp_assign_source_97;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__element_1);
            tmp_assign_source_97 = tmp_listcomp$tuple_unpack_6__element_1;
            {
                PyObject *old = outline_9_var_dim;
                outline_9_var_dim = tmp_assign_source_97;
                Py_INCREF(outline_9_var_dim);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_6__element_1);
        tmp_listcomp$tuple_unpack_6__element_1 = NULL;

        {
            PyObject *tmp_assign_source_98;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__element_2);
            tmp_assign_source_98 = tmp_listcomp$tuple_unpack_6__element_2;
            {
                PyObject *old = outline_9_var_c;
                outline_9_var_c = tmp_assign_source_98;
                Py_INCREF(outline_9_var_c);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_6__element_2);
        tmp_listcomp$tuple_unpack_6__element_2 = NULL;

        {
            PyObject *tmp_append_list_10;
            PyObject *tmp_append_value_10;
            PyObject *tmp_sub_expr_left_4;
            PyObject *tmp_sub_expr_right_4;
            CHECK_OBJECT(tmp_listcomp_10__contraction);
            tmp_append_list_10 = tmp_listcomp_10__contraction;
            tmp_sub_expr_left_4 = mod_consts[8];
            CHECK_OBJECT(outline_9_var_c);
            tmp_sub_expr_right_4 = outline_9_var_c;
            tmp_append_value_10 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
            if (tmp_append_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_31;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_10, tmp_append_value_10);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_31;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        goto loop_start_10;
        loop_end_10:;
        CHECK_OBJECT(tmp_listcomp_10__contraction);
        tmp_assign_source_90 = tmp_listcomp_10__contraction;
        Py_INCREF(tmp_assign_source_90);
        goto try_return_handler_31;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        CHECK_OBJECT(tmp_listcomp_10__$0);
        Py_DECREF(tmp_listcomp_10__$0);
        tmp_listcomp_10__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_10__contraction);
        Py_DECREF(tmp_listcomp_10__contraction);
        tmp_listcomp_10__contraction = NULL;
        Py_XDECREF(tmp_listcomp_10__iter_value_0);
        tmp_listcomp_10__iter_value_0 = NULL;
        goto try_return_handler_30;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_10__$0);
        Py_DECREF(tmp_listcomp_10__$0);
        tmp_listcomp_10__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_10__contraction);
        Py_DECREF(tmp_listcomp_10__contraction);
        tmp_listcomp_10__contraction = NULL;
        Py_XDECREF(tmp_listcomp_10__iter_value_0);
        tmp_listcomp_10__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto try_except_handler_30;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        Py_XDECREF(outline_9_var_dim);
        outline_9_var_dim = NULL;
        Py_XDECREF(outline_9_var_c);
        outline_9_var_c = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_9_var_dim);
        outline_9_var_dim = NULL;
        Py_XDECREF(outline_9_var_c);
        outline_9_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 197;
        goto frame_exception_exit_1;
        outline_result_10:;
        assert(var_inv_coeffs == NULL);
        var_inv_coeffs = tmp_assign_source_90;
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_kw_call_dict_value_0_6;
        PyObject *tmp_expression_value_40;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[55]);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blocks);
        tmp_expression_value_39 = var_blocks;
        tmp_kw_call_arg_value_0_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[12]);
        if (tmp_kw_call_arg_value_0_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_kw_call_arg_value_0_6);

            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[56]);
        if (tmp_kw_call_dict_value_0_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_kw_call_arg_value_0_6);

            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 201;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
            tmp_assign_source_99 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_28, args, kw_values, mod_consts[32]);
        }

        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_kw_call_arg_value_0_6);
        Py_DECREF(tmp_kw_call_dict_value_0_6);
        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_99;
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_iter_arg_17;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        tmp_called_value_29 = (PyObject *)&PyEnum_Type;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[57]);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_7 = MAKE_LIST1(mod_consts[25]);
        CHECK_OBJECT(var_ndim);
        tmp_mult_expr_right_7 = var_ndim;
        tmp_dircall_arg2_2 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        Py_DECREF(tmp_mult_expr_left_7);
        if (tmp_dircall_arg2_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_2);

            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_args_element_value_51 = impl___main__$$$function__6_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_args_element_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 202;
        tmp_iter_arg_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_51);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_iter_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_100 = MAKE_ITERATOR(tstate, tmp_iter_arg_17);
        Py_DECREF(tmp_iter_arg_17);
        if (tmp_assign_source_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_100;
    }
    // Tried code:
    loop_start_11:;
    {
        PyObject *tmp_next_source_11;
        PyObject *tmp_assign_source_101;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_11 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_101 = ITERATOR_NEXT(tmp_next_source_11);
        if (tmp_assign_source_101 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_11;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 202;
                goto try_except_handler_34;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_101;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_iter_arg_18;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_18 = tmp_for_loop_1__iter_value;
        tmp_assign_source_102 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_18);
        if (tmp_assign_source_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_102;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_103 = UNPACK_NEXT(tstate, tmp_unpack_13, 0, 2);
        if (tmp_assign_source_103 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 202;
            goto try_except_handler_36;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_103;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_104 = UNPACK_NEXT(tstate, tmp_unpack_14, 1, 2);
        if (tmp_assign_source_104 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 202;
            goto try_except_handler_36;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_104;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_7 = tmp_tuple_unpack_1__source_iter;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 202;
                    goto try_except_handler_36;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[26];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 202;
            goto try_except_handler_36;
        }
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto try_except_handler_35;
    // End of try:
    try_end_13:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto try_except_handler_34;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_105;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_105 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_iedge;
            var_iedge = tmp_assign_source_105;
            Py_INCREF(var_iedge);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_106;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_106 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_edge;
            var_edge = tmp_assign_source_106;
            Py_INCREF(var_edge);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_tuple_arg_3;
        CHECK_OBJECT(var_map_array);
        tmp_expression_value_42 = var_map_array;
        // Tried code:
        {
            PyObject *tmp_assign_source_108;
            PyObject *tmp_iter_arg_19;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_args_element_value_53;
            tmp_called_value_30 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT(var_edge);
            tmp_args_element_value_52 = var_edge;
            if (var_ns_proc == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[58]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 205;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_37;
            }

            tmp_args_element_value_53 = var_ns_proc;
            frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 205;
            {
                PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53};
                tmp_iter_arg_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_30, call_args);
            }

            if (tmp_iter_arg_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_37;
            }
            tmp_assign_source_108 = MAKE_ITERATOR(tstate, tmp_iter_arg_19);
            Py_DECREF(tmp_iter_arg_19);
            if (tmp_assign_source_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_37;
            }
            {
                PyObject *old = tmp_listcomp_11__$0;
                tmp_listcomp_11__$0 = tmp_assign_source_108;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_109;
            tmp_assign_source_109 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_listcomp_11__contraction;
                tmp_listcomp_11__contraction = tmp_assign_source_109;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_12:;
        {
            PyObject *tmp_next_source_12;
            PyObject *tmp_assign_source_110;
            CHECK_OBJECT(tmp_listcomp_11__$0);
            tmp_next_source_12 = tmp_listcomp_11__$0;
            tmp_assign_source_110 = ITERATOR_NEXT(tmp_next_source_12);
            if (tmp_assign_source_110 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_12;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 204;
                    goto try_except_handler_38;
                }
            }

            {
                PyObject *old = tmp_listcomp_11__iter_value_0;
                tmp_listcomp_11__iter_value_0 = tmp_assign_source_110;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_111;
            PyObject *tmp_iter_arg_20;
            CHECK_OBJECT(tmp_listcomp_11__iter_value_0);
            tmp_iter_arg_20 = tmp_listcomp_11__iter_value_0;
            tmp_assign_source_111 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_20);
            if (tmp_assign_source_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_39;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_7__source_iter;
                tmp_listcomp$tuple_unpack_7__source_iter = tmp_assign_source_111;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_112;
            PyObject *tmp_unpack_15;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__source_iter);
            tmp_unpack_15 = tmp_listcomp$tuple_unpack_7__source_iter;
            tmp_assign_source_112 = UNPACK_NEXT(tstate, tmp_unpack_15, 0, 2);
            if (tmp_assign_source_112 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 204;
                goto try_except_handler_40;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_7__element_1;
                tmp_listcomp$tuple_unpack_7__element_1 = tmp_assign_source_112;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_113;
            PyObject *tmp_unpack_16;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__source_iter);
            tmp_unpack_16 = tmp_listcomp$tuple_unpack_7__source_iter;
            tmp_assign_source_113 = UNPACK_NEXT(tstate, tmp_unpack_16, 1, 2);
            if (tmp_assign_source_113 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 204;
                goto try_except_handler_40;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_7__element_2;
                tmp_listcomp$tuple_unpack_7__element_2 = tmp_assign_source_113;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_8;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__source_iter);
            tmp_iterator_name_8 = tmp_listcomp$tuple_unpack_7__source_iter;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        exception_lineno = 204;
                        goto try_except_handler_40;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[26];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 204;
                goto try_except_handler_40;
            }
        }
        goto try_end_15;
        // Exception handler code:
        try_except_handler_40:;
        exception_keeper_type_35 = exception_type;
        exception_keeper_value_35 = exception_value;
        exception_keeper_tb_35 = exception_tb;
        exception_keeper_lineno_35 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_7__source_iter);
        tmp_listcomp$tuple_unpack_7__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

        goto try_except_handler_39;
        // End of try:
        try_end_15:;
        goto try_end_16;
        // Exception handler code:
        try_except_handler_39:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp$tuple_unpack_7__element_1);
        tmp_listcomp$tuple_unpack_7__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_7__element_2);
        tmp_listcomp$tuple_unpack_7__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto try_except_handler_38;
        // End of try:
        try_end_16:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_7__source_iter);
        tmp_listcomp$tuple_unpack_7__source_iter = NULL;
        {
            PyObject *tmp_assign_source_114;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__element_1);
            tmp_assign_source_114 = tmp_listcomp$tuple_unpack_7__element_1;
            {
                PyObject *old = outline_10_var_e;
                outline_10_var_e = tmp_assign_source_114;
                Py_INCREF(outline_10_var_e);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_7__element_1);
        tmp_listcomp$tuple_unpack_7__element_1 = NULL;

        {
            PyObject *tmp_assign_source_115;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__element_2);
            tmp_assign_source_115 = tmp_listcomp$tuple_unpack_7__element_2;
            {
                PyObject *old = outline_10_var_n;
                outline_10_var_n = tmp_assign_source_115;
                Py_INCREF(outline_10_var_n);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_7__element_2);
        tmp_listcomp$tuple_unpack_7__element_2 = NULL;

        {
            PyObject *tmp_append_list_11;
            PyObject *tmp_append_value_11;
            PyObject *tmp_start_value_3;
            PyObject *tmp_stop_value_4;
            PyObject *tmp_add_expr_left_6;
            PyObject *tmp_add_expr_right_6;
            CHECK_OBJECT(tmp_listcomp_11__contraction);
            tmp_append_list_11 = tmp_listcomp_11__contraction;
            CHECK_OBJECT(outline_10_var_e);
            tmp_start_value_3 = outline_10_var_e;
            CHECK_OBJECT(outline_10_var_e);
            tmp_add_expr_left_6 = outline_10_var_e;
            CHECK_OBJECT(outline_10_var_n);
            tmp_add_expr_right_6 = outline_10_var_n;
            tmp_stop_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
            if (tmp_stop_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_38;
            }
            tmp_append_value_11 = MAKE_SLICE_OBJECT2(tmp_start_value_3, tmp_stop_value_4);
            Py_DECREF(tmp_stop_value_4);
            assert(!(tmp_append_value_11 == NULL));
            tmp_result = LIST_APPEND1(tmp_append_list_11, tmp_append_value_11);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_38;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_38;
        }
        goto loop_start_12;
        loop_end_12:;
        CHECK_OBJECT(tmp_listcomp_11__contraction);
        tmp_tuple_arg_3 = tmp_listcomp_11__contraction;
        Py_INCREF(tmp_tuple_arg_3);
        goto try_return_handler_38;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_38:;
        CHECK_OBJECT(tmp_listcomp_11__$0);
        Py_DECREF(tmp_listcomp_11__$0);
        tmp_listcomp_11__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_11__contraction);
        Py_DECREF(tmp_listcomp_11__contraction);
        tmp_listcomp_11__contraction = NULL;
        Py_XDECREF(tmp_listcomp_11__iter_value_0);
        tmp_listcomp_11__iter_value_0 = NULL;
        goto try_return_handler_37;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_11__$0);
        Py_DECREF(tmp_listcomp_11__$0);
        tmp_listcomp_11__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_11__contraction);
        Py_DECREF(tmp_listcomp_11__contraction);
        tmp_listcomp_11__contraction = NULL;
        Py_XDECREF(tmp_listcomp_11__iter_value_0);
        tmp_listcomp_11__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;
        exception_lineno = exception_keeper_lineno_37;

        goto try_except_handler_37;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        Py_XDECREF(outline_10_var_e);
        outline_10_var_e = NULL;
        Py_XDECREF(outline_10_var_n);
        outline_10_var_n = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_38 = exception_type;
        exception_keeper_value_38 = exception_value;
        exception_keeper_tb_38 = exception_tb;
        exception_keeper_lineno_38 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_10_var_e);
        outline_10_var_e = NULL;
        Py_XDECREF(outline_10_var_n);
        outline_10_var_n = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;
        exception_lineno = exception_keeper_lineno_38;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 204;
        goto try_except_handler_34;
        outline_result_11:;
        tmp_subscript_value_6 = PySequence_Tuple(tmp_tuple_arg_3);
        Py_DECREF(tmp_tuple_arg_3);
        if (tmp_subscript_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        tmp_assign_source_107 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_6);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_assign_source_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        {
            PyObject *old = var_edge_maps;
            var_edge_maps = tmp_assign_source_107;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_element_value_55;
        CHECK_OBJECT(var_edge_maps);
        tmp_expression_value_43 = var_edge_maps;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[36]);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[39]);
        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        if (var_ns_proc == NULL) {
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_32);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }

        tmp_args_element_value_55 = var_ns_proc;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 206;
        tmp_tuple_element_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_55);
        Py_DECREF(tmp_called_value_32);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        tmp_args_element_value_54 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_element_value_54, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = mod_consts[40];
        PyTuple_SET_ITEM0(tmp_args_element_value_54, 1, tmp_tuple_element_5);
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 206;
        tmp_assign_source_116 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_54);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_assign_source_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        {
            PyObject *old = var_edge_maps;
            assert(old != NULL);
            var_edge_maps = tmp_assign_source_116;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[59]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        CHECK_OBJECT(var_edge_maps);
        tmp_tuple_element_6 = var_edge_maps;
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        if (var_blocks == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_4;
        }

        tmp_tuple_element_6 = var_blocks;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_value_3);
        goto try_except_handler_34;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[61]);
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 209;
        tmp_assign_source_117 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assign_source_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        {
            PyObject *old = var_edge_mapped;
            var_edge_mapped = tmp_assign_source_117;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_args_element_value_58;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[39]);
        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_119;
            PyObject *tmp_iter_arg_21;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_57;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_subscript_value_7;
            tmp_called_value_35 = (PyObject *)&PyEnum_Type;
            CHECK_OBJECT(var_edge);
            tmp_expression_value_47 = var_edge;
            tmp_subscript_value_7 = mod_consts[53];
            tmp_args_element_value_57 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_7);
            if (tmp_args_element_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_41;
            }
            frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 213;
            tmp_iter_arg_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_57);
            Py_DECREF(tmp_args_element_value_57);
            if (tmp_iter_arg_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_41;
            }
            tmp_assign_source_119 = MAKE_ITERATOR(tstate, tmp_iter_arg_21);
            Py_DECREF(tmp_iter_arg_21);
            if (tmp_assign_source_119 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_41;
            }
            {
                PyObject *old = tmp_listcomp_12__$0;
                tmp_listcomp_12__$0 = tmp_assign_source_119;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_120;
            tmp_assign_source_120 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_listcomp_12__contraction;
                tmp_listcomp_12__contraction = tmp_assign_source_120;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_13:;
        {
            PyObject *tmp_next_source_13;
            PyObject *tmp_assign_source_121;
            CHECK_OBJECT(tmp_listcomp_12__$0);
            tmp_next_source_13 = tmp_listcomp_12__$0;
            tmp_assign_source_121 = ITERATOR_NEXT(tmp_next_source_13);
            if (tmp_assign_source_121 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_13;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 212;
                    goto try_except_handler_42;
                }
            }

            {
                PyObject *old = tmp_listcomp_12__iter_value_0;
                tmp_listcomp_12__iter_value_0 = tmp_assign_source_121;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_122;
            PyObject *tmp_iter_arg_22;
            CHECK_OBJECT(tmp_listcomp_12__iter_value_0);
            tmp_iter_arg_22 = tmp_listcomp_12__iter_value_0;
            tmp_assign_source_122 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_22);
            if (tmp_assign_source_122 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_43;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_8__source_iter;
                tmp_listcomp$tuple_unpack_8__source_iter = tmp_assign_source_122;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_123;
            PyObject *tmp_unpack_17;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_8__source_iter);
            tmp_unpack_17 = tmp_listcomp$tuple_unpack_8__source_iter;
            tmp_assign_source_123 = UNPACK_NEXT(tstate, tmp_unpack_17, 0, 2);
            if (tmp_assign_source_123 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 212;
                goto try_except_handler_44;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_8__element_1;
                tmp_listcomp$tuple_unpack_8__element_1 = tmp_assign_source_123;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_124;
            PyObject *tmp_unpack_18;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_8__source_iter);
            tmp_unpack_18 = tmp_listcomp$tuple_unpack_8__source_iter;
            tmp_assign_source_124 = UNPACK_NEXT(tstate, tmp_unpack_18, 1, 2);
            if (tmp_assign_source_124 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 212;
                goto try_except_handler_44;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_8__element_2;
                tmp_listcomp$tuple_unpack_8__element_2 = tmp_assign_source_124;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_9;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_8__source_iter);
            tmp_iterator_name_9 = tmp_listcomp$tuple_unpack_8__source_iter;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        exception_lineno = 212;
                        goto try_except_handler_44;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[26];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 212;
                goto try_except_handler_44;
            }
        }
        goto try_end_17;
        // Exception handler code:
        try_except_handler_44:;
        exception_keeper_type_39 = exception_type;
        exception_keeper_value_39 = exception_value;
        exception_keeper_tb_39 = exception_tb;
        exception_keeper_lineno_39 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_8__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_8__source_iter);
        tmp_listcomp$tuple_unpack_8__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;
        exception_lineno = exception_keeper_lineno_39;

        goto try_except_handler_43;
        // End of try:
        try_end_17:;
        goto try_end_18;
        // Exception handler code:
        try_except_handler_43:;
        exception_keeper_type_40 = exception_type;
        exception_keeper_value_40 = exception_value;
        exception_keeper_tb_40 = exception_tb;
        exception_keeper_lineno_40 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp$tuple_unpack_8__element_1);
        tmp_listcomp$tuple_unpack_8__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_8__element_2);
        tmp_listcomp$tuple_unpack_8__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_40;
        exception_value = exception_keeper_value_40;
        exception_tb = exception_keeper_tb_40;
        exception_lineno = exception_keeper_lineno_40;

        goto try_except_handler_42;
        // End of try:
        try_end_18:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_8__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_8__source_iter);
        tmp_listcomp$tuple_unpack_8__source_iter = NULL;
        {
            PyObject *tmp_assign_source_125;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_8__element_1);
            tmp_assign_source_125 = tmp_listcomp$tuple_unpack_8__element_1;
            {
                PyObject *old = outline_11_var_d;
                outline_11_var_d = tmp_assign_source_125;
                Py_INCREF(outline_11_var_d);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_8__element_1);
        tmp_listcomp$tuple_unpack_8__element_1 = NULL;

        {
            PyObject *tmp_assign_source_126;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_8__element_2);
            tmp_assign_source_126 = tmp_listcomp$tuple_unpack_8__element_2;
            {
                PyObject *old = outline_11_var_e;
                outline_11_var_e = tmp_assign_source_126;
                Py_INCREF(outline_11_var_e);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_8__element_2);
        tmp_listcomp$tuple_unpack_8__element_2 = NULL;

        {
            PyObject *tmp_append_list_12;
            PyObject *tmp_append_value_12;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_list_element_6;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_subscript_value_9;
            CHECK_OBJECT(tmp_listcomp_12__contraction);
            tmp_append_list_12 = tmp_listcomp_12__contraction;
            CHECK_OBJECT(var_inv_coeffs);
            tmp_list_element_6 = var_inv_coeffs;
            tmp_expression_value_49 = MAKE_LIST_EMPTY(2);
            PyList_SET_ITEM0(tmp_expression_value_49, 0, tmp_list_element_6);
            CHECK_OBJECT(var_coeffs);
            tmp_list_element_6 = var_coeffs;
            PyList_SET_ITEM0(tmp_expression_value_49, 1, tmp_list_element_6);
            CHECK_OBJECT(outline_11_var_e);
            tmp_subscript_value_8 = outline_11_var_e;
            tmp_expression_value_48 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_49);
            if (tmp_expression_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_42;
            }
            CHECK_OBJECT(outline_11_var_d);
            tmp_subscript_value_9 = outline_11_var_d;
            tmp_append_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_48, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_48);
            if (tmp_append_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_42;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_12, tmp_append_value_12);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_42;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_42;
        }
        goto loop_start_13;
        loop_end_13:;
        CHECK_OBJECT(tmp_listcomp_12__contraction);
        tmp_args_element_value_56 = tmp_listcomp_12__contraction;
        Py_INCREF(tmp_args_element_value_56);
        goto try_return_handler_42;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_42:;
        CHECK_OBJECT(tmp_listcomp_12__$0);
        Py_DECREF(tmp_listcomp_12__$0);
        tmp_listcomp_12__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_12__contraction);
        Py_DECREF(tmp_listcomp_12__contraction);
        tmp_listcomp_12__contraction = NULL;
        Py_XDECREF(tmp_listcomp_12__iter_value_0);
        tmp_listcomp_12__iter_value_0 = NULL;
        goto try_return_handler_41;
        // Exception handler code:
        try_except_handler_42:;
        exception_keeper_type_41 = exception_type;
        exception_keeper_value_41 = exception_value;
        exception_keeper_tb_41 = exception_tb;
        exception_keeper_lineno_41 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_12__$0);
        Py_DECREF(tmp_listcomp_12__$0);
        tmp_listcomp_12__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_12__contraction);
        Py_DECREF(tmp_listcomp_12__contraction);
        tmp_listcomp_12__contraction = NULL;
        Py_XDECREF(tmp_listcomp_12__iter_value_0);
        tmp_listcomp_12__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_41;
        exception_value = exception_keeper_value_41;
        exception_tb = exception_keeper_tb_41;
        exception_lineno = exception_keeper_lineno_41;

        goto try_except_handler_41;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_41:;
        Py_XDECREF(outline_11_var_d);
        outline_11_var_d = NULL;
        Py_XDECREF(outline_11_var_e);
        outline_11_var_e = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_42 = exception_type;
        exception_keeper_value_42 = exception_value;
        exception_keeper_tb_42 = exception_tb;
        exception_keeper_lineno_42 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_11_var_d);
        outline_11_var_d = NULL;
        Py_XDECREF(outline_11_var_e);
        outline_11_var_e = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_42;
        exception_value = exception_keeper_value_42;
        exception_tb = exception_keeper_tb_42;
        exception_lineno = exception_keeper_lineno_42;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 212;
        goto try_except_handler_34;
        outline_result_12:;
        tmp_args_element_value_58 = mod_consts[6];
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = {tmp_args_element_value_56, tmp_args_element_value_58};
            tmp_assign_source_118 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_34, call_args);
        }

        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        {
            PyObject *old = var_edge_coeffs;
            var_edge_coeffs = tmp_assign_source_118;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_expression_value_51;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }

        tmp_iadd_expr_left_1 = var_result;
        CHECK_OBJECT(var_edge_mapped);
        tmp_mult_expr_left_8 = var_edge_mapped;
        CHECK_OBJECT(var_edge_coeffs);
        tmp_mult_expr_right_8 = var_edge_coeffs;
        tmp_expression_value_50 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        if (tmp_expression_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[10]);
        Py_DECREF(tmp_expression_value_50);
        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        if (var_result == NULL) {
            Py_DECREF(tmp_called_value_36);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }

        tmp_expression_value_51 = var_result;
        tmp_args_element_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[1]);
        if (tmp_args_element_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 215;
        tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_59);
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_element_value_59);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        tmp_assign_source_127 = tmp_iadd_expr_left_1;
        var_result = tmp_assign_source_127;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 202;
        type_description_1 = "oooooooooooooooooooooooooooooooooo";
        goto try_except_handler_34;
    }
    goto loop_start_11;
    loop_end_11:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
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
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_args_element_value_60;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_17 = var_result;
        CHECK_OBJECT(var_dtype);
        tmp_args_element_value_60 = var_dtype;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 217;
        tmp_assign_source_128 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_17, mod_consts[10], tmp_args_element_value_60);
        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_result;
            var_result = tmp_assign_source_128;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_args_element_value_61;
        CHECK_OBJECT(var_result);
        tmp_called_instance_18 = var_result;
        CHECK_OBJECT(var_blocks_flattened_shape);
        tmp_args_element_value_61 = var_blocks_flattened_shape;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 220;
        tmp_assign_source_129 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_18, mod_consts[36], tmp_args_element_value_61);
        if (tmp_assign_source_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_result;
            assert(old != NULL);
            var_result = tmp_assign_source_129;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_list_element_7;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_args_element_value_64;
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[33]);
        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_63 = mod_consts[6];
        CHECK_OBJECT(var_ndim);
        tmp_args_element_value_64 = var_ndim;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 222;
        {
            PyObject *call_args[] = {tmp_args_element_value_63, tmp_args_element_value_64};
            tmp_list_element_7 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_20,
                mod_consts[31],
                call_args
            );
        }

        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_62 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_38;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_args_element_value_65;
            PyObject *tmp_args_element_value_66;
            PyObject *tmp_mult_expr_left_9;
            PyObject *tmp_mult_expr_right_9;
            PyList_SET_ITEM(tmp_args_element_value_62, 0, tmp_list_element_7);
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto list_build_exception_3;
            }
            tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[31]);
            if (tmp_called_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto list_build_exception_3;
            }
            CHECK_OBJECT(var_ndim);
            tmp_args_element_value_65 = var_ndim;
            CHECK_OBJECT(var_ndim);
            tmp_mult_expr_left_9 = var_ndim;
            tmp_mult_expr_right_9 = mod_consts[25];
            tmp_args_element_value_66 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
            if (tmp_args_element_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);

                exception_lineno = 223;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto list_build_exception_3;
            }
            frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 223;
            {
                PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66};
                tmp_list_element_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_38, call_args);
            }

            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_66);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_args_element_value_62, 1, tmp_list_element_7);
        }
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_element_value_62);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 222;
        tmp_expression_value_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_62);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_expression_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[34]);
        Py_DECREF(tmp_expression_value_52);
        if (tmp_called_instance_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 222;
        tmp_assign_source_130 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_19, mod_consts[35]);
        Py_DECREF(tmp_called_instance_19);
        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blocks_axis_rebuild_order == NULL);
        var_blocks_axis_rebuild_order = tmp_assign_source_130;
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_kw_call_dict_value_0_7;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[37]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_result);
        tmp_kw_call_arg_value_0_7 = var_result;
        CHECK_OBJECT(var_blocks_axis_rebuild_order);
        tmp_kw_call_dict_value_0_7 = var_blocks_axis_rebuild_order;
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 224;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
            tmp_assign_source_131 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_39, args, kw_values, mod_consts[38]);
        }

        Py_DECREF(tmp_called_value_39);
        if (tmp_assign_source_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_result;
            assert(old != NULL);
            var_result = tmp_assign_source_131;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_expression_value_57;
        CHECK_OBJECT(var_result);
        tmp_expression_value_56 = var_result;
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[36]);
        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_image);
        tmp_expression_value_57 = par_image;
        tmp_args_element_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[12]);
        if (tmp_args_element_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 225;
        tmp_assign_source_132 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_67);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_67);
        if (tmp_assign_source_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_result;
            assert(old != NULL);
            var_result = tmp_assign_source_132;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_tuple_arg_4;
        // Tried code:
        {
            PyObject *tmp_assign_source_134;
            PyObject *tmp_iter_arg_23;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_68;
            PyObject *tmp_args_element_value_69;
            PyObject *tmp_args_element_value_70;
            PyObject *tmp_expression_value_58;
            tmp_called_value_41 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT(var_pad_start_per_dim);
            tmp_args_element_value_68 = var_pad_start_per_dim;
            CHECK_OBJECT(var_pad_end_per_dim);
            tmp_args_element_value_69 = var_pad_end_per_dim;
            CHECK_OBJECT(par_image);
            tmp_expression_value_58 = par_image;
            tmp_args_element_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[12]);
            if (tmp_args_element_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_45;
            }
            frame_256f38e14ee45c48159fd03df70d90f1->m_frame.f_lineno = 229;
            {
                PyObject *call_args[] = {tmp_args_element_value_68, tmp_args_element_value_69, tmp_args_element_value_70};
                tmp_iter_arg_23 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_41, call_args);
            }

            Py_DECREF(tmp_args_element_value_70);
            if (tmp_iter_arg_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_45;
            }
            tmp_assign_source_134 = MAKE_ITERATOR(tstate, tmp_iter_arg_23);
            Py_DECREF(tmp_iter_arg_23);
            if (tmp_assign_source_134 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_45;
            }
            assert(tmp_listcomp_13__$0 == NULL);
            tmp_listcomp_13__$0 = tmp_assign_source_134;
        }
        {
            PyObject *tmp_assign_source_135;
            tmp_assign_source_135 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_13__contraction == NULL);
            tmp_listcomp_13__contraction = tmp_assign_source_135;
        }
        // Tried code:
        loop_start_14:;
        {
            PyObject *tmp_next_source_14;
            PyObject *tmp_assign_source_136;
            CHECK_OBJECT(tmp_listcomp_13__$0);
            tmp_next_source_14 = tmp_listcomp_13__$0;
            tmp_assign_source_136 = ITERATOR_NEXT(tmp_next_source_14);
            if (tmp_assign_source_136 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_14;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 228;
                    goto try_except_handler_46;
                }
            }

            {
                PyObject *old = tmp_listcomp_13__iter_value_0;
                tmp_listcomp_13__iter_value_0 = tmp_assign_source_136;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_137;
            PyObject *tmp_iter_arg_24;
            CHECK_OBJECT(tmp_listcomp_13__iter_value_0);
            tmp_iter_arg_24 = tmp_listcomp_13__iter_value_0;
            tmp_assign_source_137 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_24);
            if (tmp_assign_source_137 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_47;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_9__source_iter;
                tmp_listcomp$tuple_unpack_9__source_iter = tmp_assign_source_137;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_138;
            PyObject *tmp_unpack_19;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_9__source_iter);
            tmp_unpack_19 = tmp_listcomp$tuple_unpack_9__source_iter;
            tmp_assign_source_138 = UNPACK_NEXT(tstate, tmp_unpack_19, 0, 3);
            if (tmp_assign_source_138 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 228;
                goto try_except_handler_48;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_9__element_1;
                tmp_listcomp$tuple_unpack_9__element_1 = tmp_assign_source_138;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_139;
            PyObject *tmp_unpack_20;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_9__source_iter);
            tmp_unpack_20 = tmp_listcomp$tuple_unpack_9__source_iter;
            tmp_assign_source_139 = UNPACK_NEXT(tstate, tmp_unpack_20, 1, 3);
            if (tmp_assign_source_139 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 228;
                goto try_except_handler_48;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_9__element_2;
                tmp_listcomp$tuple_unpack_9__element_2 = tmp_assign_source_139;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_140;
            PyObject *tmp_unpack_21;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_9__source_iter);
            tmp_unpack_21 = tmp_listcomp$tuple_unpack_9__source_iter;
            tmp_assign_source_140 = UNPACK_NEXT(tstate, tmp_unpack_21, 2, 3);
            if (tmp_assign_source_140 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 228;
                goto try_except_handler_48;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_9__element_3;
                tmp_listcomp$tuple_unpack_9__element_3 = tmp_assign_source_140;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_10;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_9__source_iter);
            tmp_iterator_name_10 = tmp_listcomp$tuple_unpack_9__source_iter;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        exception_lineno = 228;
                        goto try_except_handler_48;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[63];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 228;
                goto try_except_handler_48;
            }
        }
        goto try_end_20;
        // Exception handler code:
        try_except_handler_48:;
        exception_keeper_type_44 = exception_type;
        exception_keeper_value_44 = exception_value;
        exception_keeper_tb_44 = exception_tb;
        exception_keeper_lineno_44 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_9__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_9__source_iter);
        tmp_listcomp$tuple_unpack_9__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_44;
        exception_value = exception_keeper_value_44;
        exception_tb = exception_keeper_tb_44;
        exception_lineno = exception_keeper_lineno_44;

        goto try_except_handler_47;
        // End of try:
        try_end_20:;
        goto try_end_21;
        // Exception handler code:
        try_except_handler_47:;
        exception_keeper_type_45 = exception_type;
        exception_keeper_value_45 = exception_value;
        exception_keeper_tb_45 = exception_tb;
        exception_keeper_lineno_45 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp$tuple_unpack_9__element_1);
        tmp_listcomp$tuple_unpack_9__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_9__element_2);
        tmp_listcomp$tuple_unpack_9__element_2 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_9__element_3);
        tmp_listcomp$tuple_unpack_9__element_3 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_45;
        exception_value = exception_keeper_value_45;
        exception_tb = exception_keeper_tb_45;
        exception_lineno = exception_keeper_lineno_45;

        goto try_except_handler_46;
        // End of try:
        try_end_21:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_9__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_9__source_iter);
        tmp_listcomp$tuple_unpack_9__source_iter = NULL;
        {
            PyObject *tmp_assign_source_141;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_9__element_1);
            tmp_assign_source_141 = tmp_listcomp$tuple_unpack_9__element_1;
            {
                PyObject *old = outline_12_var_p_i;
                outline_12_var_p_i = tmp_assign_source_141;
                Py_INCREF(outline_12_var_p_i);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_9__element_1);
        tmp_listcomp$tuple_unpack_9__element_1 = NULL;

        {
            PyObject *tmp_assign_source_142;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_9__element_2);
            tmp_assign_source_142 = tmp_listcomp$tuple_unpack_9__element_2;
            {
                PyObject *old = outline_12_var_p_f;
                outline_12_var_p_f = tmp_assign_source_142;
                Py_INCREF(outline_12_var_p_f);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_9__element_2);
        tmp_listcomp$tuple_unpack_9__element_2 = NULL;

        {
            PyObject *tmp_assign_source_143;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_9__element_3);
            tmp_assign_source_143 = tmp_listcomp$tuple_unpack_9__element_3;
            {
                PyObject *old = outline_12_var_s;
                outline_12_var_s = tmp_assign_source_143;
                Py_INCREF(outline_12_var_s);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_9__element_3);
        tmp_listcomp$tuple_unpack_9__element_3 = NULL;

        {
            PyObject *tmp_append_list_13;
            PyObject *tmp_append_value_13;
            PyObject *tmp_start_value_4;
            PyObject *tmp_stop_value_5;
            PyObject *tmp_sub_expr_left_5;
            PyObject *tmp_sub_expr_right_5;
            CHECK_OBJECT(tmp_listcomp_13__contraction);
            tmp_append_list_13 = tmp_listcomp_13__contraction;
            CHECK_OBJECT(outline_12_var_p_i);
            tmp_start_value_4 = outline_12_var_p_i;
            CHECK_OBJECT(outline_12_var_s);
            tmp_sub_expr_left_5 = outline_12_var_s;
            CHECK_OBJECT(outline_12_var_p_f);
            tmp_sub_expr_right_5 = outline_12_var_p_f;
            tmp_stop_value_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
            if (tmp_stop_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_46;
            }
            tmp_append_value_13 = MAKE_SLICE_OBJECT2(tmp_start_value_4, tmp_stop_value_5);
            Py_DECREF(tmp_stop_value_5);
            assert(!(tmp_append_value_13 == NULL));
            tmp_result = LIST_APPEND1(tmp_append_list_13, tmp_append_value_13);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_46;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        goto loop_start_14;
        loop_end_14:;
        CHECK_OBJECT(tmp_listcomp_13__contraction);
        tmp_tuple_arg_4 = tmp_listcomp_13__contraction;
        Py_INCREF(tmp_tuple_arg_4);
        goto try_return_handler_46;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_46:;
        CHECK_OBJECT(tmp_listcomp_13__$0);
        Py_DECREF(tmp_listcomp_13__$0);
        tmp_listcomp_13__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_13__contraction);
        Py_DECREF(tmp_listcomp_13__contraction);
        tmp_listcomp_13__contraction = NULL;
        Py_XDECREF(tmp_listcomp_13__iter_value_0);
        tmp_listcomp_13__iter_value_0 = NULL;
        goto try_return_handler_45;
        // Exception handler code:
        try_except_handler_46:;
        exception_keeper_type_46 = exception_type;
        exception_keeper_value_46 = exception_value;
        exception_keeper_tb_46 = exception_tb;
        exception_keeper_lineno_46 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_13__$0);
        Py_DECREF(tmp_listcomp_13__$0);
        tmp_listcomp_13__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_13__contraction);
        Py_DECREF(tmp_listcomp_13__contraction);
        tmp_listcomp_13__contraction = NULL;
        Py_XDECREF(tmp_listcomp_13__iter_value_0);
        tmp_listcomp_13__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_46;
        exception_value = exception_keeper_value_46;
        exception_tb = exception_keeper_tb_46;
        exception_lineno = exception_keeper_lineno_46;

        goto try_except_handler_45;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_45:;
        Py_XDECREF(outline_12_var_p_i);
        outline_12_var_p_i = NULL;
        Py_XDECREF(outline_12_var_p_f);
        outline_12_var_p_f = NULL;
        Py_XDECREF(outline_12_var_s);
        outline_12_var_s = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_45:;
        exception_keeper_type_47 = exception_type;
        exception_keeper_value_47 = exception_value;
        exception_keeper_tb_47 = exception_tb;
        exception_keeper_lineno_47 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_12_var_p_i);
        outline_12_var_p_i = NULL;
        Py_XDECREF(outline_12_var_p_f);
        outline_12_var_p_f = NULL;
        Py_XDECREF(outline_12_var_s);
        outline_12_var_s = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_47;
        exception_value = exception_keeper_value_47;
        exception_tb = exception_keeper_tb_47;
        exception_lineno = exception_keeper_lineno_47;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 228;
        goto frame_exception_exit_1;
        outline_result_13:;
        tmp_assign_source_133 = PySequence_Tuple(tmp_tuple_arg_4);
        Py_DECREF(tmp_tuple_arg_4);
        if (tmp_assign_source_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_unpad_slices == NULL);
        var_unpad_slices = tmp_assign_source_133;
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(var_result);
        tmp_expression_value_59 = var_result;
        CHECK_OBJECT(var_unpad_slices);
        tmp_subscript_value_10 = var_unpad_slices;
        tmp_assign_source_144 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_10);
        if (tmp_assign_source_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_result;
            assert(old != NULL);
            var_result = tmp_assign_source_144;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_256f38e14ee45c48159fd03df70d90f1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_256f38e14ee45c48159fd03df70d90f1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_256f38e14ee45c48159fd03df70d90f1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_256f38e14ee45c48159fd03df70d90f1,
        type_description_1,
        par_image,
        par_kernel_size,
        par_clip_limit,
        par_nbins,
        var_ndim,
        var_dtype,
        var_pad_start_per_dim,
        var_pad_end_per_dim,
        var_bin_size,
        var_lut,
        var_ns_hist,
        var_hist_blocks_shape,
        var_hist_blocks_axis_order,
        var_hist_slices,
        var_hist_blocks,
        var_hist_block_assembled_shape,
        var_clim,
        var_hist,
        var_map_array,
        var_ns_proc,
        var_blocks_shape,
        var_blocks_axis_order,
        var_blocks,
        var_blocks_flattened_shape,
        var_coeffs,
        var_inv_coeffs,
        var_result,
        var_iedge,
        var_edge,
        var_edge_maps,
        var_edge_mapped,
        var_edge_coeffs,
        var_blocks_axis_rebuild_order,
        var_unpad_slices
    );


    // Release cached frame if used for exception.
    if (frame_256f38e14ee45c48159fd03df70d90f1 == cache_frame_256f38e14ee45c48159fd03df70d90f1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_256f38e14ee45c48159fd03df70d90f1);
        cache_frame_256f38e14ee45c48159fd03df70d90f1 = NULL;
    }

    assertFrameObject(frame_256f38e14ee45c48159fd03df70d90f1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_image);
    Py_DECREF(par_image);
    par_image = NULL;
    CHECK_OBJECT(var_ndim);
    Py_DECREF(var_ndim);
    var_ndim = NULL;
    CHECK_OBJECT(var_dtype);
    Py_DECREF(var_dtype);
    var_dtype = NULL;
    CHECK_OBJECT(var_pad_start_per_dim);
    Py_DECREF(var_pad_start_per_dim);
    var_pad_start_per_dim = NULL;
    CHECK_OBJECT(var_pad_end_per_dim);
    Py_DECREF(var_pad_end_per_dim);
    var_pad_end_per_dim = NULL;
    CHECK_OBJECT(var_bin_size);
    Py_DECREF(var_bin_size);
    var_bin_size = NULL;
    CHECK_OBJECT(var_lut);
    Py_DECREF(var_lut);
    var_lut = NULL;
    CHECK_OBJECT(var_ns_hist);
    Py_DECREF(var_ns_hist);
    var_ns_hist = NULL;
    CHECK_OBJECT(var_hist_blocks_shape);
    Py_DECREF(var_hist_blocks_shape);
    var_hist_blocks_shape = NULL;
    CHECK_OBJECT(var_hist_blocks_axis_order);
    Py_DECREF(var_hist_blocks_axis_order);
    var_hist_blocks_axis_order = NULL;
    CHECK_OBJECT(var_hist_slices);
    Py_DECREF(var_hist_slices);
    var_hist_slices = NULL;
    CHECK_OBJECT(var_hist_blocks);
    Py_DECREF(var_hist_blocks);
    var_hist_blocks = NULL;
    CHECK_OBJECT(var_hist_block_assembled_shape);
    Py_DECREF(var_hist_block_assembled_shape);
    var_hist_block_assembled_shape = NULL;
    CHECK_OBJECT(var_clim);
    Py_DECREF(var_clim);
    var_clim = NULL;
    CHECK_OBJECT(var_hist);
    Py_DECREF(var_hist);
    var_hist = NULL;
    CHECK_OBJECT(var_map_array);
    Py_DECREF(var_map_array);
    var_map_array = NULL;
    Py_XDECREF(var_ns_proc);
    var_ns_proc = NULL;
    CHECK_OBJECT(var_blocks_shape);
    Py_DECREF(var_blocks_shape);
    var_blocks_shape = NULL;
    CHECK_OBJECT(var_blocks_axis_order);
    Py_DECREF(var_blocks_axis_order);
    var_blocks_axis_order = NULL;
    Py_XDECREF(var_blocks);
    var_blocks = NULL;
    CHECK_OBJECT(var_blocks_flattened_shape);
    Py_DECREF(var_blocks_flattened_shape);
    var_blocks_flattened_shape = NULL;
    CHECK_OBJECT(var_coeffs);
    Py_DECREF(var_coeffs);
    var_coeffs = NULL;
    CHECK_OBJECT(var_inv_coeffs);
    Py_DECREF(var_inv_coeffs);
    var_inv_coeffs = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_iedge);
    var_iedge = NULL;
    Py_XDECREF(var_edge);
    var_edge = NULL;
    Py_XDECREF(var_edge_maps);
    var_edge_maps = NULL;
    Py_XDECREF(var_edge_mapped);
    var_edge_mapped = NULL;
    Py_XDECREF(var_edge_coeffs);
    var_edge_coeffs = NULL;
    CHECK_OBJECT(var_blocks_axis_rebuild_order);
    Py_DECREF(var_blocks_axis_rebuild_order);
    var_blocks_axis_rebuild_order = NULL;
    CHECK_OBJECT(var_unpad_slices);
    Py_DECREF(var_unpad_slices);
    var_unpad_slices = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_image);
    par_image = NULL;
    Py_XDECREF(var_ndim);
    var_ndim = NULL;
    Py_XDECREF(var_dtype);
    var_dtype = NULL;
    Py_XDECREF(var_pad_start_per_dim);
    var_pad_start_per_dim = NULL;
    Py_XDECREF(var_pad_end_per_dim);
    var_pad_end_per_dim = NULL;
    Py_XDECREF(var_bin_size);
    var_bin_size = NULL;
    Py_XDECREF(var_lut);
    var_lut = NULL;
    Py_XDECREF(var_ns_hist);
    var_ns_hist = NULL;
    Py_XDECREF(var_hist_blocks_shape);
    var_hist_blocks_shape = NULL;
    Py_XDECREF(var_hist_blocks_axis_order);
    var_hist_blocks_axis_order = NULL;
    Py_XDECREF(var_hist_slices);
    var_hist_slices = NULL;
    Py_XDECREF(var_hist_blocks);
    var_hist_blocks = NULL;
    Py_XDECREF(var_hist_block_assembled_shape);
    var_hist_block_assembled_shape = NULL;
    Py_XDECREF(var_clim);
    var_clim = NULL;
    Py_XDECREF(var_hist);
    var_hist = NULL;
    Py_XDECREF(var_map_array);
    var_map_array = NULL;
    Py_XDECREF(var_ns_proc);
    var_ns_proc = NULL;
    Py_XDECREF(var_blocks_shape);
    var_blocks_shape = NULL;
    Py_XDECREF(var_blocks_axis_order);
    var_blocks_axis_order = NULL;
    Py_XDECREF(var_blocks);
    var_blocks = NULL;
    Py_XDECREF(var_blocks_flattened_shape);
    var_blocks_flattened_shape = NULL;
    Py_XDECREF(var_coeffs);
    var_coeffs = NULL;
    Py_XDECREF(var_inv_coeffs);
    var_inv_coeffs = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_iedge);
    var_iedge = NULL;
    Py_XDECREF(var_edge);
    var_edge = NULL;
    Py_XDECREF(var_edge_maps);
    var_edge_maps = NULL;
    Py_XDECREF(var_edge_mapped);
    var_edge_mapped = NULL;
    Py_XDECREF(var_edge_coeffs);
    var_edge_coeffs = NULL;
    Py_XDECREF(var_blocks_axis_rebuild_order);
    var_blocks_axis_rebuild_order = NULL;
    Py_XDECREF(var_unpad_slices);
    var_unpad_slices = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_clip_limit);
    Py_DECREF(par_clip_limit);
    CHECK_OBJECT(par_nbins);
    Py_DECREF(par_nbins);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_clip_limit);
    Py_DECREF(par_clip_limit);
    CHECK_OBJECT(par_nbins);
    Py_DECREF(par_nbins);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_skimage$exposure$_adapthist$$$function__3_clip_histogram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_hist = python_pars[0];
    PyObject *par_clip_limit = python_pars[1];
    PyObject *var_excess_mask = NULL;
    PyObject *var_excess = NULL;
    PyObject *var_n_excess = NULL;
    PyObject *var_bin_incr = NULL;
    PyObject *var_upper = NULL;
    PyObject *var_low_mask = NULL;
    PyObject *var_mid_mask = NULL;
    PyObject *var_mid = NULL;
    PyObject *var_prev_n_excess = NULL;
    PyObject *var_index = NULL;
    PyObject *var_under_mask = NULL;
    PyObject *var_step_size = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__value = NULL;
    PyObject *tmp_inplace_assign_subscr_2__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__value = NULL;
    struct Nuitka_FrameObject *frame_d7b4f7d8167870051c9a07781b1aec8b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d7b4f7d8167870051c9a07781b1aec8b = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d7b4f7d8167870051c9a07781b1aec8b)) {
        Py_XDECREF(cache_frame_d7b4f7d8167870051c9a07781b1aec8b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7b4f7d8167870051c9a07781b1aec8b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7b4f7d8167870051c9a07781b1aec8b = MAKE_FUNCTION_FRAME(tstate, codeobj_d7b4f7d8167870051c9a07781b1aec8b, module_skimage$exposure$_adapthist, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d7b4f7d8167870051c9a07781b1aec8b->m_type_description == NULL);
    frame_d7b4f7d8167870051c9a07781b1aec8b = cache_frame_d7b4f7d8167870051c9a07781b1aec8b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d7b4f7d8167870051c9a07781b1aec8b);
    assert(Py_REFCNT(frame_d7b4f7d8167870051c9a07781b1aec8b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_hist);
        tmp_cmp_expr_left_1 = par_hist;
        CHECK_OBJECT(par_clip_limit);
        tmp_cmp_expr_right_1 = par_clip_limit;
        tmp_assign_source_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_excess_mask == NULL);
        var_excess_mask = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_hist);
        tmp_expression_value_1 = par_hist;
        CHECK_OBJECT(var_excess_mask);
        tmp_subscript_value_1 = var_excess_mask;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_excess == NULL);
        var_excess = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_excess);
        tmp_called_instance_1 = var_excess;
        frame_d7b4f7d8167870051c9a07781b1aec8b->m_frame.f_lineno = 258;
        tmp_sub_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[65]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_excess);
        tmp_expression_value_2 = var_excess;
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[66]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_clip_limit);
        tmp_mult_expr_right_1 = par_clip_limit;
        tmp_sub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 258;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n_excess == NULL);
        var_n_excess = tmp_assign_source_3;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_clip_limit);
        tmp_ass_subvalue_1 = par_clip_limit;
        CHECK_OBJECT(par_hist);
        tmp_ass_subscribed_1 = par_hist;
        CHECK_OBJECT(var_excess_mask);
        tmp_ass_subscript_1 = var_excess_mask;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_n_excess);
        tmp_floordiv_expr_left_1 = var_n_excess;
        CHECK_OBJECT(par_hist);
        tmp_expression_value_3 = par_hist;
        tmp_floordiv_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[66]);
        if (tmp_floordiv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_right_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bin_incr == NULL);
        var_bin_incr = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(par_clip_limit);
        tmp_sub_expr_left_2 = par_clip_limit;
        CHECK_OBJECT(var_bin_incr);
        tmp_sub_expr_right_2 = var_bin_incr;
        tmp_assign_source_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_upper == NULL);
        var_upper = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_hist);
        tmp_cmp_expr_left_2 = par_hist;
        CHECK_OBJECT(var_upper);
        tmp_cmp_expr_right_2 = var_upper;
        tmp_assign_source_6 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_low_mask == NULL);
        var_low_mask = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_n_excess);
        tmp_isub_expr_left_1 = var_n_excess;
        CHECK_OBJECT(par_hist);
        tmp_expression_value_5 = par_hist;
        CHECK_OBJECT(var_low_mask);
        tmp_subscript_value_2 = var_low_mask;
        tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[66]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bin_incr);
        tmp_mult_expr_right_2 = var_bin_incr;
        tmp_isub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_isub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        Py_DECREF(tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = tmp_isub_expr_left_1;
        var_n_excess = tmp_assign_source_7;

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(par_hist);
        tmp_assign_source_8 = par_hist;
        assert(tmp_inplace_assign_subscr_1__target == NULL);
        Py_INCREF(tmp_assign_source_8);
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(var_low_mask);
        tmp_assign_source_9 = var_low_mask;
        assert(tmp_inplace_assign_subscr_1__subscript == NULL);
        Py_INCREF(tmp_assign_source_9);
        tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_6 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_subscript_value_3 = tmp_inplace_assign_subscr_1__subscript;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_inplace_assign_subscr_1__value == NULL);
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(var_bin_incr);
        tmp_iadd_expr_right_1 = var_bin_incr;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_11 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_11;

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_2 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_2 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_ass_subscript_2 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
    }
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

    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[67]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hist);
        tmp_cmp_expr_left_3 = par_hist;
        CHECK_OBJECT(var_upper);
        tmp_cmp_expr_right_3 = var_upper;
        tmp_args_element_value_1 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 269;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hist);
        tmp_cmp_expr_left_4 = par_hist;
        CHECK_OBJECT(par_clip_limit);
        tmp_cmp_expr_right_4 = par_clip_limit;
        tmp_args_element_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 269;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d7b4f7d8167870051c9a07781b1aec8b->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mid_mask == NULL);
        var_mid_mask = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_hist);
        tmp_expression_value_8 = par_hist;
        CHECK_OBJECT(var_mid_mask);
        tmp_subscript_value_4 = var_mid_mask;
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_4);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mid == NULL);
        var_mid = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_n_excess);
        tmp_iadd_expr_left_2 = var_n_excess;
        CHECK_OBJECT(var_mid);
        tmp_called_instance_2 = var_mid;
        frame_d7b4f7d8167870051c9a07781b1aec8b->m_frame.f_lineno = 271;
        tmp_sub_expr_left_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[65]);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mid);
        tmp_expression_value_9 = var_mid;
        tmp_mult_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[66]);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_3);

            exception_lineno = 271;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_clip_limit);
        tmp_mult_expr_right_3 = par_clip_limit;
        tmp_sub_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_3);

            exception_lineno = 271;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = tmp_iadd_expr_left_2;
        var_n_excess = tmp_assign_source_14;

    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(par_clip_limit);
        tmp_ass_subvalue_3 = par_clip_limit;
        CHECK_OBJECT(par_hist);
        tmp_ass_subscribed_3 = par_hist;
        CHECK_OBJECT(var_mid_mask);
        tmp_ass_subscript_3 = var_mid_mask;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        if (var_n_excess == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 274;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_5 = var_n_excess;
        tmp_cmp_expr_right_5 = mod_consts[6];
        tmp_operand_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_15;
        if (var_n_excess == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 275;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_15 = var_n_excess;
        {
            PyObject *old = var_prev_n_excess;
            var_prev_n_excess = tmp_assign_source_15;
            Py_INCREF(var_prev_n_excess);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_expression_value_10;
        if (par_hist == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 276;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = par_hist;
        tmp_xrange_low_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[66]);
        if (tmp_xrange_low_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_1__for_iterator;
            tmp_for_loop_1__for_iterator = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_17 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooo";
                exception_lineno = 276;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_18 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_18;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        if (par_hist == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 277;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_left_6 = par_hist;
        CHECK_OBJECT(par_clip_limit);
        tmp_cmp_expr_right_6 = par_clip_limit;
        tmp_assign_source_19 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_under_mask;
            var_under_mask = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_floordiv_expr_left_2;
        PyObject *tmp_floordiv_expr_right_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_2 != NULL);
        tmp_args_element_value_3 = mod_consts[8];
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_under_mask);
        tmp_args_element_value_5 = var_under_mask;
        frame_d7b4f7d8167870051c9a07781b1aec8b->m_frame.f_lineno = 278;
        tmp_floordiv_expr_left_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[70], tmp_args_element_value_5);
        if (tmp_floordiv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_n_excess == NULL) {
            Py_DECREF(tmp_floordiv_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 278;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_floordiv_expr_right_2 = var_n_excess;
        tmp_args_element_value_4 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
        Py_DECREF(tmp_floordiv_expr_left_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        frame_d7b4f7d8167870051c9a07781b1aec8b->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_step_size;
            var_step_size = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_step_value_1;
        CHECK_OBJECT(var_under_mask);
        tmp_expression_value_11 = var_under_mask;
        CHECK_OBJECT(var_index);
        tmp_start_value_1 = var_index;
        tmp_stop_value_1 = Py_None;
        CHECK_OBJECT(var_step_size);
        tmp_step_value_1 = var_step_size;
        tmp_subscript_value_5 = MAKE_SLICE_OBJECT3(tmp_start_value_1, tmp_stop_value_1, tmp_step_value_1);
        assert(!(tmp_subscript_value_5 == NULL));
        tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_under_mask;
            assert(old != NULL);
            var_under_mask = tmp_assign_source_21;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_start_value_2;
        PyObject *tmp_stop_value_2;
        PyObject *tmp_step_value_2;
        if (par_hist == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 280;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_12 = par_hist;
        CHECK_OBJECT(var_index);
        tmp_start_value_2 = var_index;
        tmp_stop_value_2 = Py_None;
        CHECK_OBJECT(var_step_size);
        tmp_step_value_2 = var_step_size;
        tmp_subscript_value_6 = MAKE_SLICE_OBJECT3(tmp_start_value_2, tmp_stop_value_2, tmp_step_value_2);
        assert(!(tmp_subscript_value_6 == NULL));
        tmp_assign_source_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_6);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_inplace_assign_subscr_2__target;
            tmp_inplace_assign_subscr_2__target = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(var_under_mask);
        tmp_assign_source_23 = var_under_mask;
        {
            PyObject *old = tmp_inplace_assign_subscr_2__subscript;
            tmp_inplace_assign_subscr_2__subscript = tmp_assign_source_23;
            Py_INCREF(tmp_inplace_assign_subscr_2__subscript);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
        tmp_expression_value_13 = tmp_inplace_assign_subscr_2__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__subscript);
        tmp_subscript_value_7 = tmp_inplace_assign_subscr_2__subscript;
        tmp_assign_source_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_7);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_inplace_assign_subscr_2__value;
            tmp_inplace_assign_subscr_2__value = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__value);
        tmp_iadd_expr_left_3 = tmp_inplace_assign_subscr_2__value;
        tmp_iadd_expr_right_3 = mod_consts[8];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_25 = tmp_iadd_expr_left_3;
        tmp_inplace_assign_subscr_2__value = tmp_assign_source_25;

    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__value);
        tmp_ass_subvalue_4 = tmp_inplace_assign_subscr_2__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
        tmp_ass_subscribed_4 = tmp_inplace_assign_subscr_2__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__subscript);
        tmp_ass_subscript_4 = tmp_inplace_assign_subscr_2__subscript;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
    Py_DECREF(tmp_inplace_assign_subscr_2__target);
    tmp_inplace_assign_subscr_2__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_2__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_2__subscript);
    tmp_inplace_assign_subscr_2__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_2__value);
    tmp_inplace_assign_subscr_2__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
    Py_DECREF(tmp_inplace_assign_subscr_2__target);
    tmp_inplace_assign_subscr_2__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_2__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_2__subscript);
    tmp_inplace_assign_subscr_2__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_2__value);
    Py_DECREF(tmp_inplace_assign_subscr_2__value);
    tmp_inplace_assign_subscr_2__value = NULL;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_isub_expr_left_2;
        PyObject *tmp_isub_expr_right_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_6;
        if (var_n_excess == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 281;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_isub_expr_left_2 = var_n_excess;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_under_mask);
        tmp_args_element_value_6 = var_under_mask;
        frame_d7b4f7d8167870051c9a07781b1aec8b->m_frame.f_lineno = 281;
        tmp_isub_expr_right_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[70], tmp_args_element_value_6);
        if (tmp_isub_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_2, tmp_isub_expr_right_2);
        Py_DECREF(tmp_isub_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_26 = tmp_isub_expr_left_2;
        var_n_excess = tmp_assign_source_26;

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_n_excess);
        tmp_cmp_expr_left_7 = var_n_excess;
        tmp_cmp_expr_right_7 = mod_consts[6];
        tmp_condition_result_2 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_end_2;
    branch_no_2:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 276;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_prev_n_excess);
        tmp_cmp_expr_left_8 = var_prev_n_excess;
        if (var_n_excess == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 284;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_8 = var_n_excess;
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_end_1;
    branch_no_3:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 274;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    if (par_hist == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 287;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_hist;
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
        exception_tb = MAKE_TRACEBACK(frame_d7b4f7d8167870051c9a07781b1aec8b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7b4f7d8167870051c9a07781b1aec8b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7b4f7d8167870051c9a07781b1aec8b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7b4f7d8167870051c9a07781b1aec8b,
        type_description_1,
        par_hist,
        par_clip_limit,
        var_excess_mask,
        var_excess,
        var_n_excess,
        var_bin_incr,
        var_upper,
        var_low_mask,
        var_mid_mask,
        var_mid,
        var_prev_n_excess,
        var_index,
        var_under_mask,
        var_step_size
    );


    // Release cached frame if used for exception.
    if (frame_d7b4f7d8167870051c9a07781b1aec8b == cache_frame_d7b4f7d8167870051c9a07781b1aec8b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d7b4f7d8167870051c9a07781b1aec8b);
        cache_frame_d7b4f7d8167870051c9a07781b1aec8b = NULL;
    }

    assertFrameObject(frame_d7b4f7d8167870051c9a07781b1aec8b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_excess_mask);
    Py_DECREF(var_excess_mask);
    var_excess_mask = NULL;
    CHECK_OBJECT(var_excess);
    Py_DECREF(var_excess);
    var_excess = NULL;
    Py_XDECREF(var_n_excess);
    var_n_excess = NULL;
    CHECK_OBJECT(var_bin_incr);
    Py_DECREF(var_bin_incr);
    var_bin_incr = NULL;
    CHECK_OBJECT(var_upper);
    Py_DECREF(var_upper);
    var_upper = NULL;
    CHECK_OBJECT(var_low_mask);
    Py_DECREF(var_low_mask);
    var_low_mask = NULL;
    CHECK_OBJECT(var_mid_mask);
    Py_DECREF(var_mid_mask);
    var_mid_mask = NULL;
    CHECK_OBJECT(var_mid);
    Py_DECREF(var_mid);
    var_mid = NULL;
    Py_XDECREF(var_prev_n_excess);
    var_prev_n_excess = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_under_mask);
    var_under_mask = NULL;
    Py_XDECREF(var_step_size);
    var_step_size = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_excess_mask);
    var_excess_mask = NULL;
    Py_XDECREF(var_excess);
    var_excess = NULL;
    Py_XDECREF(var_n_excess);
    var_n_excess = NULL;
    Py_XDECREF(var_bin_incr);
    var_bin_incr = NULL;
    Py_XDECREF(var_upper);
    var_upper = NULL;
    Py_XDECREF(var_low_mask);
    var_low_mask = NULL;
    Py_XDECREF(var_mid_mask);
    var_mid_mask = NULL;
    Py_XDECREF(var_mid);
    var_mid = NULL;
    Py_XDECREF(var_prev_n_excess);
    var_prev_n_excess = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_under_mask);
    var_under_mask = NULL;
    Py_XDECREF(var_step_size);
    var_step_size = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_hist);
    Py_DECREF(par_hist);
    CHECK_OBJECT(par_clip_limit);
    Py_DECREF(par_clip_limit);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hist);
    Py_DECREF(par_hist);
    CHECK_OBJECT(par_clip_limit);
    Py_DECREF(par_clip_limit);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_skimage$exposure$_adapthist$$$function__4_map_histogram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_hist = python_pars[0];
    PyObject *par_min_val = python_pars[1];
    PyObject *par_max_val = python_pars[2];
    PyObject *par_n_pixels = python_pars[3];
    PyObject *var_out = NULL;
    struct Nuitka_FrameObject *frame_27e513fc8a659650d2314b2d93248cd3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_27e513fc8a659650d2314b2d93248cd3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_27e513fc8a659650d2314b2d93248cd3)) {
        Py_XDECREF(cache_frame_27e513fc8a659650d2314b2d93248cd3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_27e513fc8a659650d2314b2d93248cd3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_27e513fc8a659650d2314b2d93248cd3 = MAKE_FUNCTION_FRAME(tstate, codeobj_27e513fc8a659650d2314b2d93248cd3, module_skimage$exposure$_adapthist, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_27e513fc8a659650d2314b2d93248cd3->m_type_description == NULL);
    frame_27e513fc8a659650d2314b2d93248cd3 = cache_frame_27e513fc8a659650d2314b2d93248cd3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_27e513fc8a659650d2314b2d93248cd3);
    assert(Py_REFCNT(frame_27e513fc8a659650d2314b2d93248cd3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[72]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hist);
        tmp_tuple_element_1 = par_hist;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[61]);
        frame_27e513fc8a659650d2314b2d93248cd3->m_frame.f_lineno = 312;
        tmp_called_instance_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_27e513fc8a659650d2314b2d93248cd3->m_frame.f_lineno = 312;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[73], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_imult_expr_left_1;
        PyObject *tmp_imult_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(var_out);
        tmp_imult_expr_left_1 = var_out;
        CHECK_OBJECT(par_max_val);
        tmp_sub_expr_left_1 = par_max_val;
        CHECK_OBJECT(par_min_val);
        tmp_sub_expr_right_1 = par_min_val;
        tmp_truediv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n_pixels);
        tmp_truediv_expr_right_1 = par_n_pixels;
        tmp_imult_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_imult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_MULT_OBJECT_OBJECT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
        Py_DECREF(tmp_imult_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_imult_expr_left_1;
        var_out = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(var_out);
        tmp_iadd_expr_left_1 = var_out;
        CHECK_OBJECT(par_min_val);
        tmp_iadd_expr_right_1 = par_min_val;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_iadd_expr_left_1;
        var_out = tmp_assign_source_3;

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[42]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_out);
        tmp_kw_call_arg_value_0_1 = var_out;
        tmp_kw_call_dict_value_0_1 = Py_None;
        CHECK_OBJECT(par_max_val);
        tmp_kw_call_dict_value_1_1 = par_max_val;
        CHECK_OBJECT(var_out);
        tmp_kw_call_dict_value_2_1 = var_out;
        frame_27e513fc8a659650d2314b2d93248cd3->m_frame.f_lineno = 315;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[74]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_out);
        tmp_called_instance_2 = var_out;
        frame_27e513fc8a659650d2314b2d93248cd3->m_frame.f_lineno = 317;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[75], 0)
        );

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_27e513fc8a659650d2314b2d93248cd3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_27e513fc8a659650d2314b2d93248cd3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_27e513fc8a659650d2314b2d93248cd3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_27e513fc8a659650d2314b2d93248cd3,
        type_description_1,
        par_hist,
        par_min_val,
        par_max_val,
        par_n_pixels,
        var_out
    );


    // Release cached frame if used for exception.
    if (frame_27e513fc8a659650d2314b2d93248cd3 == cache_frame_27e513fc8a659650d2314b2d93248cd3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_27e513fc8a659650d2314b2d93248cd3);
        cache_frame_27e513fc8a659650d2314b2d93248cd3 = NULL;
    }

    assertFrameObject(frame_27e513fc8a659650d2314b2d93248cd3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
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

    Py_XDECREF(var_out);
    var_out = NULL;
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
    CHECK_OBJECT(par_hist);
    Py_DECREF(par_hist);
    CHECK_OBJECT(par_min_val);
    Py_DECREF(par_min_val);
    CHECK_OBJECT(par_max_val);
    Py_DECREF(par_max_val);
    CHECK_OBJECT(par_n_pixels);
    Py_DECREF(par_n_pixels);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hist);
    Py_DECREF(par_hist);
    CHECK_OBJECT(par_min_val);
    Py_DECREF(par_min_val);
    CHECK_OBJECT(par_max_val);
    Py_DECREF(par_max_val);
    CHECK_OBJECT(par_n_pixels);
    Py_DECREF(par_n_pixels);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_skimage$exposure$_adapthist$$$function__1_equalize_adapthist(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_skimage$exposure$_adapthist$$$function__1_equalize_adapthist,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a58a563761033311a0d09406f3f06c0d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_skimage$exposure$_adapthist,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_skimage$exposure$_adapthist$$$function__2__clahe() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_skimage$exposure$_adapthist$$$function__2__clahe,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_256f38e14ee45c48159fd03df70d90f1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_skimage$exposure$_adapthist,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_skimage$exposure$_adapthist$$$function__3_clip_histogram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_skimage$exposure$_adapthist$$$function__3_clip_histogram,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d7b4f7d8167870051c9a07781b1aec8b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_skimage$exposure$_adapthist,
        mod_consts[71],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_skimage$exposure$_adapthist$$$function__4_map_histogram() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_skimage$exposure$_adapthist$$$function__4_map_histogram,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_27e513fc8a659650d2314b2d93248cd3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_skimage$exposure$_adapthist,
        mod_consts[76],
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

function_impl_code functable_skimage$exposure$_adapthist[] = {
    impl_skimage$exposure$_adapthist$$$function__1_equalize_adapthist,
    impl_skimage$exposure$_adapthist$$$function__2__clahe,
    impl_skimage$exposure$_adapthist$$$function__3_clip_histogram,
    impl_skimage$exposure$_adapthist$$$function__4_map_histogram,
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

    function_impl_code *current = functable_skimage$exposure$_adapthist;
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

    if (offset > sizeof(functable_skimage$exposure$_adapthist) || offset < 0) {
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
        functable_skimage$exposure$_adapthist[offset],
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
        module_skimage$exposure$_adapthist,
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
PyObject *modulecode_skimage$exposure$_adapthist(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("skimage.exposure._adapthist");

    // Store the module for future use.
    module_skimage$exposure$_adapthist = module;

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
        PRINT_STRING("skimage.exposure._adapthist: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("skimage.exposure._adapthist: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initskimage$exposure$_adapthist\n");

    moduledict_skimage$exposure$_adapthist = MODULE_DICT(module_skimage$exposure$_adapthist);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_skimage$exposure$_adapthist,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_skimage$exposure$_adapthist,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[19]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_skimage$exposure$_adapthist,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_skimage$exposure$_adapthist,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_skimage$exposure$_adapthist,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_skimage$exposure$_adapthist);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_skimage$exposure$_adapthist);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_20e2f9aa1b2652f5473c061b8c01f291;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_2);
    }
    frame_20e2f9aa1b2652f5473c061b8c01f291 = MAKE_MODULE_FRAME(codeobj_20e2f9aa1b2652f5473c061b8c01f291, module_skimage$exposure$_adapthist);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_20e2f9aa1b2652f5473c061b8c01f291);
    assert(Py_REFCNT(frame_20e2f9aa1b2652f5473c061b8c01f291) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[81], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[82], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[15];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_skimage$exposure$_adapthist;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[6];
        frame_20e2f9aa1b2652f5473c061b8c01f291->m_frame.f_lineno = 16;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[84];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_skimage$exposure$_adapthist;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[6];
        frame_20e2f9aa1b2652f5473c061b8c01f291->m_frame.f_lineno = 18;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[85];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_skimage$exposure$_adapthist;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[86];
        tmp_level_value_3 = mod_consts[25];
        frame_20e2f9aa1b2652f5473c061b8c01f291->m_frame.f_lineno = 20;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_skimage$exposure$_adapthist,
                mod_consts[0],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[87];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_skimage$exposure$_adapthist;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[88];
        tmp_level_value_4 = mod_consts[25];
        frame_20e2f9aa1b2652f5473c061b8c01f291->m_frame.f_lineno = 21;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_skimage$exposure$_adapthist,
                mod_consts[89],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[89]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_skimage$exposure$_adapthist,
                mod_consts[90],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[90]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_9);
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[91];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_skimage$exposure$_adapthist;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[92];
        tmp_level_value_5 = mod_consts[25];
        frame_20e2f9aa1b2652f5473c061b8c01f291->m_frame.f_lineno = 22;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_skimage$exposure$_adapthist,
                mod_consts[5],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[5]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[93];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_skimage$exposure$_adapthist;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[94];
        tmp_level_value_6 = mod_consts[25];
        frame_20e2f9aa1b2652f5473c061b8c01f291->m_frame.f_lineno = 23;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_skimage$exposure$_adapthist,
                mod_consts[2],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_defaults_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        frame_20e2f9aa1b2652f5473c061b8c01f291->m_frame.f_lineno = 28;
        tmp_called_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = mod_consts[96];
        Py_INCREF(tmp_defaults_1);


        tmp_args_element_value_2 = MAKE_FUNCTION_skimage$exposure$_adapthist$$$function__1_equalize_adapthist(tmp_defaults_1);

        frame_20e2f9aa1b2652f5473c061b8c01f291->m_frame.f_lineno = 28;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_13);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_20e2f9aa1b2652f5473c061b8c01f291, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_20e2f9aa1b2652f5473c061b8c01f291->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_20e2f9aa1b2652f5473c061b8c01f291, exception_lineno);
    }



    assertFrameObject(frame_20e2f9aa1b2652f5473c061b8c01f291);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_skimage$exposure$_adapthist$$$function__2__clahe();

        UPDATE_STRING_DICT1(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_skimage$exposure$_adapthist$$$function__3_clip_histogram();

        UPDATE_STRING_DICT1(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_skimage$exposure$_adapthist$$$function__4_map_histogram();

        UPDATE_STRING_DICT1(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_16);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("skimage.exposure._adapthist", false);

    Py_INCREF(module_skimage$exposure$_adapthist);
    return module_skimage$exposure$_adapthist;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_skimage$exposure$_adapthist, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("skimage$exposure$_adapthist", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
