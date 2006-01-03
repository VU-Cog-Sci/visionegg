/* Generated by Pyrex 0.9.3 on Mon Jan  2 16:34:18 2006 */

#include "Python.h"
#include "structmember.h"
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#include "darwinsys_compat.h"
#include "stdlib.h"
#include "errno.h"
#include "sys/sysctl.h"
#include "mach/mach.h"
#include "sched.h"
#include "pthread.h"
#include "sys/resource.h"


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/
static PyObject *__Pyx_UnpackItem(PyObject *, int); /*proto*/
static int __Pyx_EndUnpack(PyObject *, int); /*proto*/
static int __Pyx_PrintItem(PyObject *); /*proto*/
static int __Pyx_PrintNewline(void); /*proto*/
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb); /*proto*/
static void __Pyx_ReRaise(void); /*proto*/
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list); /*proto*/
static PyObject *__Pyx_GetExcValue(void); /*proto*/
static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, int none_allowed, char *name); /*proto*/
static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type); /*proto*/
static int __Pyx_GetStarArgs(PyObject **args, PyObject **kwds, char *kwd_list[], int nargs, PyObject **args2, PyObject **kwds2); /*proto*/
static void __Pyx_WriteUnraisable(char *name); /*proto*/
static void __Pyx_AddTraceback(char *funcname); /*proto*/
static PyTypeObject *__Pyx_ImportType(char *module_name, char *class_name, long size);  /*proto*/
static int __Pyx_SetVtable(PyObject *dict, void *vtable); /*proto*/
static int __Pyx_GetVtable(PyObject *dict, void *vtabptr); /*proto*/
static PyObject *__Pyx_CreateClass(PyObject *bases, PyObject *dict, PyObject *name, char *modname); /*proto*/
static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/
static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
staticforward char **__pyx_f;

/* Declarations from darwinsys */


/* Declarations from darwin_maxpriority */


/* Implementation of darwin_maxpriority */

static PyObject *__pyx_n_darwinsys;
static PyObject *__pyx_n_PRIO_PROCESS;
static PyObject *__pyx_n_SCHED_OTHER;
static PyObject *__pyx_n_SCHED_RR;
static PyObject *__pyx_n_SCHED_FIFO;
static PyObject *__pyx_n_get_bus_speed;
static PyObject *__pyx_n_set_self_thread_time_constraint_policy;
static PyObject *__pyx_n_set_self_pthread_priority;
static PyObject *__pyx_n_getpriority;
static PyObject *__pyx_n_sched_get_priority_max;
static PyObject *__pyx_n_setpriority;

static PyObject *__pyx_f_18darwin_maxpriority_get_bus_speed(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_18darwin_maxpriority_get_bus_speed(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  int __pyx_v_bus_speed;
  int (__pyx_v_mlib[2]);
  size_t __pyx_v_len;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":73 */
  (__pyx_v_mlib[0]) = CTL_HW;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":74 */
  (__pyx_v_mlib[1]) = HW_BUS_FREQ;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":76 */
  __pyx_v_len = (sizeof(__pyx_v_bus_speed));

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":77 */
  sysctl(__pyx_v_mlib,2,(&__pyx_v_bus_speed),(&__pyx_v_len),0,0);

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":79 */
  __pyx_1 = PyInt_FromLong(__pyx_v_bus_speed); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 79; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(__pyx_r);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("darwin_maxpriority.get_bus_speed");
  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static PyObject *__pyx_f_18darwin_maxpriority_set_self_thread_time_constraint_policy(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_18darwin_maxpriority_set_self_thread_time_constraint_policy(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_period = 0;
  PyObject *__pyx_v_computation = 0;
  PyObject *__pyx_v_constraint = 0;
  PyObject *__pyx_v_preemptible = 0;
  thread_time_constraint_policy_data_t __pyx_v_ttcpolicy;
  PyObject *__pyx_r;
  uint32_t __pyx_1;
  boolean_t __pyx_2;
  PyObject *__pyx_3 = 0;
  static char *__pyx_argnames[] = {"period","computation","constraint","preemptible",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OOOO", __pyx_argnames, &__pyx_v_period, &__pyx_v_computation, &__pyx_v_constraint, &__pyx_v_preemptible)) return 0;
  Py_INCREF(__pyx_v_period);
  Py_INCREF(__pyx_v_computation);
  Py_INCREF(__pyx_v_constraint);
  Py_INCREF(__pyx_v_preemptible);

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":88 */
  __pyx_1 = PyInt_AsLong(__pyx_v_period); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 88; goto __pyx_L1;}
  __pyx_v_ttcpolicy.period = __pyx_1;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":89 */
  __pyx_1 = PyInt_AsLong(__pyx_v_computation); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 89; goto __pyx_L1;}
  __pyx_v_ttcpolicy.computation = __pyx_1;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":90 */
  __pyx_1 = PyInt_AsLong(__pyx_v_constraint); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  __pyx_v_ttcpolicy.constraint = __pyx_1;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":91 */
  __pyx_2 = PyInt_AsLong(__pyx_v_preemptible); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 91; goto __pyx_L1;}
  __pyx_v_ttcpolicy.preemptible = __pyx_2;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":93 */
  __pyx_3 = PyInt_FromLong(thread_policy_set(mach_thread_self(),THREAD_TIME_CONSTRAINT_POLICY,((thread_policy_t )(&__pyx_v_ttcpolicy)),THREAD_TIME_CONSTRAINT_POLICY_COUNT)); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 93; goto __pyx_L1;}
  __pyx_r = __pyx_3;
  __pyx_3 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(__pyx_r);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("darwin_maxpriority.set_self_thread_time_constraint_policy");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_period);
  Py_DECREF(__pyx_v_computation);
  Py_DECREF(__pyx_v_constraint);
  Py_DECREF(__pyx_v_preemptible);
  return __pyx_r;
}

static PyObject *__pyx_f_18darwin_maxpriority_set_self_pthread_priority(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_18darwin_maxpriority_set_self_pthread_priority(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_policy = 0;
  PyObject *__pyx_v_priority = 0;
  struct sched_param __pyx_v_sp;
  PyObject *__pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  static char *__pyx_argnames[] = {"policy","priority",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OO", __pyx_argnames, &__pyx_v_policy, &__pyx_v_priority)) return 0;
  Py_INCREF(__pyx_v_policy);
  Py_INCREF(__pyx_v_priority);

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":101 */
  memset((&__pyx_v_sp),0,(sizeof(struct sched_param )));

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":102 */
  __pyx_1 = PyInt_AsLong(__pyx_v_priority); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 102; goto __pyx_L1;}
  __pyx_v_sp.sched_priority = __pyx_1;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":103 */
  __pyx_1 = PyInt_AsLong(__pyx_v_policy); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 103; goto __pyx_L1;}
  __pyx_2 = PyInt_FromLong(pthread_setschedparam(pthread_self(),__pyx_1,(&__pyx_v_sp))); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 103; goto __pyx_L1;}
  __pyx_r = __pyx_2;
  __pyx_2 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(__pyx_r);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("darwin_maxpriority.set_self_pthread_priority");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_policy);
  Py_DECREF(__pyx_v_priority);
  return __pyx_r;
}

static PyObject *__pyx_n_OSError;

static PyObject *__pyx_f_18darwin_maxpriority_getpriority(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_18darwin_maxpriority_getpriority(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_arg0 = 0;
  PyObject *__pyx_v_arg1 = 0;
  int __pyx_v_result;
  PyObject *__pyx_v_errno;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  int __pyx_2;
  PyObject *__pyx_3 = 0;
  static char *__pyx_argnames[] = {"arg0","arg1",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OO", __pyx_argnames, &__pyx_v_arg0, &__pyx_v_arg1)) return 0;
  Py_INCREF(__pyx_v_arg0);
  Py_INCREF(__pyx_v_arg1);
  __pyx_v_errno = Py_None; Py_INCREF(__pyx_v_errno);

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":107 */
  __pyx_1 = PyInt_FromLong(0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 107; goto __pyx_L1;}
  Py_DECREF(__pyx_v_errno);
  __pyx_v_errno = __pyx_1;
  __pyx_1 = 0;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":108 */
  __pyx_2 = PyInt_AsLong(__pyx_v_arg0); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 108; goto __pyx_L1;}
  __pyx_v_result = getpriority(__pyx_2,__pyx_v_arg1);

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":109 */
  __pyx_2 = PyObject_IsTrue(__pyx_v_errno); if (__pyx_2 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 109; goto __pyx_L1;}
  if (__pyx_2) {

    /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":110 */
    __pyx_1 = __Pyx_GetName(__pyx_b, __pyx_n_OSError); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 110; goto __pyx_L1;}
    __pyx_3 = PyErr_SetFromErrno(__pyx_1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 110; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":111 */
  __pyx_1 = PyInt_FromLong(__pyx_v_result); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 111; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(__pyx_r);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("darwin_maxpriority.getpriority");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_errno);
  Py_DECREF(__pyx_v_arg0);
  Py_DECREF(__pyx_v_arg1);
  return __pyx_r;
}

static PyObject *__pyx_f_18darwin_maxpriority_sched_get_priority_max(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_18darwin_maxpriority_sched_get_priority_max(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_arg0 = 0;
  int __pyx_v_result;
  PyObject *__pyx_v_errno;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  int __pyx_2;
  PyObject *__pyx_3 = 0;
  static char *__pyx_argnames[] = {"arg0",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_arg0)) return 0;
  Py_INCREF(__pyx_v_arg0);
  __pyx_v_errno = Py_None; Py_INCREF(__pyx_v_errno);

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":115 */
  __pyx_1 = PyInt_FromLong(0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 115; goto __pyx_L1;}
  Py_DECREF(__pyx_v_errno);
  __pyx_v_errno = __pyx_1;
  __pyx_1 = 0;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":116 */
  __pyx_2 = PyInt_AsLong(__pyx_v_arg0); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 116; goto __pyx_L1;}
  __pyx_v_result = sched_get_priority_max(__pyx_2);

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":117 */
  __pyx_2 = PyObject_IsTrue(__pyx_v_errno); if (__pyx_2 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 117; goto __pyx_L1;}
  if (__pyx_2) {

    /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":118 */
    __pyx_1 = __Pyx_GetName(__pyx_b, __pyx_n_OSError); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 118; goto __pyx_L1;}
    __pyx_3 = PyErr_SetFromErrno(__pyx_1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 118; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":119 */
  __pyx_1 = PyInt_FromLong(__pyx_v_result); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 119; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(__pyx_r);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("darwin_maxpriority.sched_get_priority_max");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_errno);
  Py_DECREF(__pyx_v_arg0);
  return __pyx_r;
}

static PyObject *__pyx_f_18darwin_maxpriority_setpriority(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_18darwin_maxpriority_setpriority(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_arg0 = 0;
  PyObject *__pyx_v_arg1 = 0;
  PyObject *__pyx_v_arg2 = 0;
  int __pyx_v_result;
  PyObject *__pyx_v_errno;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  int __pyx_2;
  int __pyx_3;
  PyObject *__pyx_4 = 0;
  static char *__pyx_argnames[] = {"arg0","arg1","arg2",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OOO", __pyx_argnames, &__pyx_v_arg0, &__pyx_v_arg1, &__pyx_v_arg2)) return 0;
  Py_INCREF(__pyx_v_arg0);
  Py_INCREF(__pyx_v_arg1);
  Py_INCREF(__pyx_v_arg2);
  __pyx_v_errno = Py_None; Py_INCREF(__pyx_v_errno);

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":123 */
  __pyx_1 = PyInt_FromLong(0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 123; goto __pyx_L1;}
  Py_DECREF(__pyx_v_errno);
  __pyx_v_errno = __pyx_1;
  __pyx_1 = 0;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":124 */
  __pyx_2 = PyInt_AsLong(__pyx_v_arg0); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 124; goto __pyx_L1;}
  __pyx_3 = PyInt_AsLong(__pyx_v_arg2); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 124; goto __pyx_L1;}
  __pyx_v_result = setpriority(__pyx_2,__pyx_v_arg1,__pyx_3);

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":125 */
  __pyx_2 = PyObject_IsTrue(__pyx_v_errno); if (__pyx_2 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 125; goto __pyx_L1;}
  if (__pyx_2) {

    /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":126 */
    __pyx_1 = __Pyx_GetName(__pyx_b, __pyx_n_OSError); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 126; goto __pyx_L1;}
    __pyx_4 = PyErr_SetFromErrno(__pyx_1); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 126; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":127 */
  __pyx_1 = PyInt_FromLong(__pyx_v_result); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 127; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(__pyx_r);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("darwin_maxpriority.setpriority");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_errno);
  Py_DECREF(__pyx_v_arg0);
  Py_DECREF(__pyx_v_arg1);
  Py_DECREF(__pyx_v_arg2);
  return __pyx_r;
}

static __Pyx_InternTabEntry __pyx_intern_tab[] = {
  {&__pyx_n_OSError, "OSError"},
  {&__pyx_n_PRIO_PROCESS, "PRIO_PROCESS"},
  {&__pyx_n_SCHED_FIFO, "SCHED_FIFO"},
  {&__pyx_n_SCHED_OTHER, "SCHED_OTHER"},
  {&__pyx_n_SCHED_RR, "SCHED_RR"},
  {&__pyx_n_darwinsys, "darwinsys"},
  {&__pyx_n_get_bus_speed, "get_bus_speed"},
  {&__pyx_n_getpriority, "getpriority"},
  {&__pyx_n_sched_get_priority_max, "sched_get_priority_max"},
  {&__pyx_n_set_self_pthread_priority, "set_self_pthread_priority"},
  {&__pyx_n_set_self_thread_time_constraint_policy, "set_self_thread_time_constraint_policy"},
  {&__pyx_n_setpriority, "setpriority"},
  {0, 0}
};

static struct PyMethodDef __pyx_methods[] = {
  {"get_bus_speed", (PyCFunction)__pyx_f_18darwin_maxpriority_get_bus_speed, METH_VARARGS|METH_KEYWORDS, 0},
  {"set_self_thread_time_constraint_policy", (PyCFunction)__pyx_f_18darwin_maxpriority_set_self_thread_time_constraint_policy, METH_VARARGS|METH_KEYWORDS, 0},
  {"set_self_pthread_priority", (PyCFunction)__pyx_f_18darwin_maxpriority_set_self_pthread_priority, METH_VARARGS|METH_KEYWORDS, 0},
  {"getpriority", (PyCFunction)__pyx_f_18darwin_maxpriority_getpriority, METH_VARARGS|METH_KEYWORDS, 0},
  {"sched_get_priority_max", (PyCFunction)__pyx_f_18darwin_maxpriority_sched_get_priority_max, METH_VARARGS|METH_KEYWORDS, 0},
  {"setpriority", (PyCFunction)__pyx_f_18darwin_maxpriority_setpriority, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

DL_EXPORT(void) initdarwin_maxpriority(void); /*proto*/
DL_EXPORT(void) initdarwin_maxpriority(void) {
  PyObject *__pyx_1 = 0;
  __pyx_m = Py_InitModule4("darwin_maxpriority", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;};
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;};
  if (__Pyx_InternStrings(__pyx_intern_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;};

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":62 */
  __pyx_1 = PyInt_FromLong(PRIO_PROCESS); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 62; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_PRIO_PROCESS, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 62; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":64 */
  __pyx_1 = PyInt_FromLong(SCHED_OTHER); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_SCHED_OTHER, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":65 */
  __pyx_1 = PyInt_FromLong(SCHED_RR); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 65; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_SCHED_RR, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 65; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":66 */
  __pyx_1 = PyInt_FromLong(SCHED_FIFO); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 66; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_SCHED_FIFO, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 66; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/Volumes/astraw/src/ve/visionegg-devel.clean/src/darwin_maxpriority.pyx":121 */
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("darwin_maxpriority");
}

static char *__pyx_filenames[] = {
  "darwin_maxpriority.pyx",
};
statichere char **__pyx_f = __pyx_filenames;

/* Runtime support code */

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name) {
    PyObject *result;
    result = PyObject_GetAttr(dict, name);
    if (!result)
        PyErr_SetObject(PyExc_NameError, name);
    return result;
}

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t) {
    while (t->p) {
        *t->p = PyString_InternFromString(t->s);
        if (!*t->p)
            return -1;
        ++t;
    }
    return 0;
}

#include "compile.h"
#include "frameobject.h"
#include "traceback.h"

static void __Pyx_AddTraceback(char *funcname) {
    PyObject *py_srcfile = 0;
    PyObject *py_funcname = 0;
    PyObject *py_globals = 0;
    PyObject *empty_tuple = 0;
    PyObject *empty_string = 0;
    PyCodeObject *py_code = 0;
    PyFrameObject *py_frame = 0;
    
    py_srcfile = PyString_FromString(__pyx_filename);
    if (!py_srcfile) goto bad;
    py_funcname = PyString_FromString(funcname);
    if (!py_funcname) goto bad;
    py_globals = PyModule_GetDict(__pyx_m);
    if (!py_globals) goto bad;
    empty_tuple = PyTuple_New(0);
    if (!empty_tuple) goto bad;
    empty_string = PyString_FromString("");
    if (!empty_string) goto bad;
    py_code = PyCode_New(
        0,            /*int argcount,*/
        0,            /*int nlocals,*/
        0,            /*int stacksize,*/
        0,            /*int flags,*/
        empty_string, /*PyObject *code,*/
        empty_tuple,  /*PyObject *consts,*/
        empty_tuple,  /*PyObject *names,*/
        empty_tuple,  /*PyObject *varnames,*/
        empty_tuple,  /*PyObject *freevars,*/
        empty_tuple,  /*PyObject *cellvars,*/
        py_srcfile,   /*PyObject *filename,*/
        py_funcname,  /*PyObject *name,*/
        __pyx_lineno,   /*int firstlineno,*/
        empty_string  /*PyObject *lnotab*/
    );
    if (!py_code) goto bad;
    py_frame = PyFrame_New(
        PyThreadState_Get(), /*PyThreadState *tstate,*/
        py_code,             /*PyCodeObject *code,*/
        py_globals,          /*PyObject *globals,*/
        0                    /*PyObject *locals*/
    );
    if (!py_frame) goto bad;
    py_frame->f_lineno = __pyx_lineno;
    PyTraceBack_Here(py_frame);
bad:
    Py_XDECREF(py_srcfile);
    Py_XDECREF(py_funcname);
    Py_XDECREF(empty_tuple);
    Py_XDECREF(empty_string);
    Py_XDECREF(py_code);
    Py_XDECREF(py_frame);
}
