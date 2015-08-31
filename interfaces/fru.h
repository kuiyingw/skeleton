/*
 * Generated by gdbus-codegen 2.40.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __INTERFACES_FRU_H__
#define __INTERFACES_FRU_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.openbmc.Fru */

#define TYPE_FRU (fru_get_type ())
#define FRU(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_FRU, Fru))
#define IS_FRU(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_FRU))
#define FRU_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_FRU, FruIface))

struct _Fru;
typedef struct _Fru Fru;
typedef struct _FruIface FruIface;

struct _FruIface
{
  GTypeInterface parent_iface;


  guint  (*get_date_code) (Fru *object);

  guchar  (*get_instance_num) (Fru *object);

  const gchar * (*get_label) (Fru *object);

  const gchar * (*get_location) (Fru *object);

  const gchar * (*get_manufacturer) (Fru *object);

  const gchar * (*get_part_num) (Fru *object);

  const gchar * (*get_serial_num) (Fru *object);

  guchar  (*get_state) (Fru *object);

  guchar  (*get_subtype) (Fru *object);

  guchar  (*get_type_) (Fru *object);

  const gchar * (*get_version) (Fru *object);

  void (*recoverable_error) (
    Fru *object);

  void (*state_changed) (
    Fru *object);

  void (*unrecoverable_error) (
    Fru *object);

};

GType fru_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *fru_interface_info (void);
guint fru_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus signal emissions functions: */
void fru_emit_state_changed (
    Fru *object);

void fru_emit_unrecoverable_error (
    Fru *object);

void fru_emit_recoverable_error (
    Fru *object);



/* D-Bus property accessors: */
const gchar *fru_get_label (Fru *object);
gchar *fru_dup_label (Fru *object);
void fru_set_label (Fru *object, const gchar *value);

const gchar *fru_get_location (Fru *object);
gchar *fru_dup_location (Fru *object);
void fru_set_location (Fru *object, const gchar *value);

guchar fru_get_state (Fru *object);
void fru_set_state (Fru *object, guchar value);

const gchar *fru_get_manufacturer (Fru *object);
gchar *fru_dup_manufacturer (Fru *object);
void fru_set_manufacturer (Fru *object, const gchar *value);

const gchar *fru_get_part_num (Fru *object);
gchar *fru_dup_part_num (Fru *object);
void fru_set_part_num (Fru *object, const gchar *value);

const gchar *fru_get_serial_num (Fru *object);
gchar *fru_dup_serial_num (Fru *object);
void fru_set_serial_num (Fru *object, const gchar *value);

guint fru_get_date_code (Fru *object);
void fru_set_date_code (Fru *object, guint value);

const gchar *fru_get_version (Fru *object);
gchar *fru_dup_version (Fru *object);
void fru_set_version (Fru *object, const gchar *value);

guchar fru_get_type_ (Fru *object);
void fru_set_type_ (Fru *object, guchar value);

guchar fru_get_subtype (Fru *object);
void fru_set_subtype (Fru *object, guchar value);

guchar fru_get_instance_num (Fru *object);
void fru_set_instance_num (Fru *object, guchar value);


/* ---- */

#define TYPE_FRU_PROXY (fru_proxy_get_type ())
#define FRU_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_FRU_PROXY, FruProxy))
#define FRU_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_FRU_PROXY, FruProxyClass))
#define FRU_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_FRU_PROXY, FruProxyClass))
#define IS_FRU_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_FRU_PROXY))
#define IS_FRU_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_FRU_PROXY))

typedef struct _FruProxy FruProxy;
typedef struct _FruProxyClass FruProxyClass;
typedef struct _FruProxyPrivate FruProxyPrivate;

struct _FruProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  FruProxyPrivate *priv;
};

struct _FruProxyClass
{
  GDBusProxyClass parent_class;
};

GType fru_proxy_get_type (void) G_GNUC_CONST;

void fru_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
Fru *fru_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
Fru *fru_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void fru_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
Fru *fru_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
Fru *fru_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_FRU_SKELETON (fru_skeleton_get_type ())
#define FRU_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_FRU_SKELETON, FruSkeleton))
#define FRU_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_FRU_SKELETON, FruSkeletonClass))
#define FRU_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_FRU_SKELETON, FruSkeletonClass))
#define IS_FRU_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_FRU_SKELETON))
#define IS_FRU_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_FRU_SKELETON))

typedef struct _FruSkeleton FruSkeleton;
typedef struct _FruSkeletonClass FruSkeletonClass;
typedef struct _FruSkeletonPrivate FruSkeletonPrivate;

struct _FruSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  FruSkeletonPrivate *priv;
};

struct _FruSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType fru_skeleton_get_type (void) G_GNUC_CONST;

Fru *fru_skeleton_new (void);


/* ------------------------------------------------------------------------ */
/* Declarations for org.openbmc.Fru.Fan */

#define TYPE_FRU_FAN (fru_fan_get_type ())
#define FRU_FAN(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_FRU_FAN, FruFan))
#define IS_FRU_FAN(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_FRU_FAN))
#define FRU_FAN_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_FRU_FAN, FruFanIface))

struct _FruFan;
typedef struct _FruFan FruFan;
typedef struct _FruFanIface FruFanIface;

struct _FruFanIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_get_speed) (
    FruFan *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_set_config_data) (
    FruFan *object,
    GDBusMethodInvocation *invocation,
    gint arg_pwm_num);

  gboolean (*handle_set_cooling_zone) (
    FruFan *object,
    GDBusMethodInvocation *invocation,
    gint arg_cooling_zone);

  gboolean (*handle_set_speed) (
    FruFan *object,
    GDBusMethodInvocation *invocation,
    gint arg_speed);

  gint  (*get_cooling_zone) (FruFan *object);

  gint  (*get_speed) (FruFan *object);

  void (*speed_changed) (
    FruFan *object,
    gint arg_speed);

  void (*tach_error) (
    FruFan *object);

};

GType fru_fan_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *fru_fan_interface_info (void);
guint fru_fan_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void fru_fan_complete_set_cooling_zone (
    FruFan *object,
    GDBusMethodInvocation *invocation);

void fru_fan_complete_get_speed (
    FruFan *object,
    GDBusMethodInvocation *invocation,
    gint speed);

void fru_fan_complete_set_speed (
    FruFan *object,
    GDBusMethodInvocation *invocation);

void fru_fan_complete_set_config_data (
    FruFan *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void fru_fan_emit_speed_changed (
    FruFan *object,
    gint arg_speed);

void fru_fan_emit_tach_error (
    FruFan *object);



/* D-Bus method calls: */
void fru_fan_call_set_cooling_zone (
    FruFan *proxy,
    gint arg_cooling_zone,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean fru_fan_call_set_cooling_zone_finish (
    FruFan *proxy,
    GAsyncResult *res,
    GError **error);

gboolean fru_fan_call_set_cooling_zone_sync (
    FruFan *proxy,
    gint arg_cooling_zone,
    GCancellable *cancellable,
    GError **error);

void fru_fan_call_get_speed (
    FruFan *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean fru_fan_call_get_speed_finish (
    FruFan *proxy,
    gint *out_speed,
    GAsyncResult *res,
    GError **error);

gboolean fru_fan_call_get_speed_sync (
    FruFan *proxy,
    gint *out_speed,
    GCancellable *cancellable,
    GError **error);

void fru_fan_call_set_speed (
    FruFan *proxy,
    gint arg_speed,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean fru_fan_call_set_speed_finish (
    FruFan *proxy,
    GAsyncResult *res,
    GError **error);

gboolean fru_fan_call_set_speed_sync (
    FruFan *proxy,
    gint arg_speed,
    GCancellable *cancellable,
    GError **error);

void fru_fan_call_set_config_data (
    FruFan *proxy,
    gint arg_pwm_num,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean fru_fan_call_set_config_data_finish (
    FruFan *proxy,
    GAsyncResult *res,
    GError **error);

gboolean fru_fan_call_set_config_data_sync (
    FruFan *proxy,
    gint arg_pwm_num,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
gint fru_fan_get_speed (FruFan *object);
void fru_fan_set_speed (FruFan *object, gint value);

gint fru_fan_get_cooling_zone (FruFan *object);
void fru_fan_set_cooling_zone (FruFan *object, gint value);


/* ---- */

#define TYPE_FRU_FAN_PROXY (fru_fan_proxy_get_type ())
#define FRU_FAN_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_FRU_FAN_PROXY, FruFanProxy))
#define FRU_FAN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_FRU_FAN_PROXY, FruFanProxyClass))
#define FRU_FAN_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_FRU_FAN_PROXY, FruFanProxyClass))
#define IS_FRU_FAN_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_FRU_FAN_PROXY))
#define IS_FRU_FAN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_FRU_FAN_PROXY))

typedef struct _FruFanProxy FruFanProxy;
typedef struct _FruFanProxyClass FruFanProxyClass;
typedef struct _FruFanProxyPrivate FruFanProxyPrivate;

struct _FruFanProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  FruFanProxyPrivate *priv;
};

struct _FruFanProxyClass
{
  GDBusProxyClass parent_class;
};

GType fru_fan_proxy_get_type (void) G_GNUC_CONST;

void fru_fan_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
FruFan *fru_fan_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
FruFan *fru_fan_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void fru_fan_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
FruFan *fru_fan_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
FruFan *fru_fan_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_FRU_FAN_SKELETON (fru_fan_skeleton_get_type ())
#define FRU_FAN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_FRU_FAN_SKELETON, FruFanSkeleton))
#define FRU_FAN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_FRU_FAN_SKELETON, FruFanSkeletonClass))
#define FRU_FAN_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_FRU_FAN_SKELETON, FruFanSkeletonClass))
#define IS_FRU_FAN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_FRU_FAN_SKELETON))
#define IS_FRU_FAN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_FRU_FAN_SKELETON))

typedef struct _FruFanSkeleton FruFanSkeleton;
typedef struct _FruFanSkeletonClass FruFanSkeletonClass;
typedef struct _FruFanSkeletonPrivate FruFanSkeletonPrivate;

struct _FruFanSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  FruFanSkeletonPrivate *priv;
};

struct _FruFanSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType fru_fan_skeleton_get_type (void) G_GNUC_CONST;

FruFan *fru_fan_skeleton_new (void);


/* ---- */

#define TYPE_OBJECT (object_get_type ())
#define OBJECT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_OBJECT, Object))
#define IS_OBJECT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_OBJECT))
#define OBJECT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_OBJECT, Object))

struct _Object;
typedef struct _Object Object;
typedef struct _ObjectIface ObjectIface;

struct _ObjectIface
{
  GTypeInterface parent_iface;
};

GType object_get_type (void) G_GNUC_CONST;

Fru *object_get_fru (Object *object);
FruFan *object_get_fru_fan (Object *object);
Fru *object_peek_fru (Object *object);
FruFan *object_peek_fru_fan (Object *object);

#define TYPE_OBJECT_PROXY (object_proxy_get_type ())
#define OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_OBJECT_PROXY, ObjectProxy))
#define OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_OBJECT_PROXY, ObjectProxyClass))
#define OBJECT_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_OBJECT_PROXY, ObjectProxyClass))
#define IS_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_OBJECT_PROXY))
#define IS_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_OBJECT_PROXY))

typedef struct _ObjectProxy ObjectProxy;
typedef struct _ObjectProxyClass ObjectProxyClass;
typedef struct _ObjectProxyPrivate ObjectProxyPrivate;

struct _ObjectProxy
{
  /*< private >*/
  GDBusObjectProxy parent_instance;
  ObjectProxyPrivate *priv;
};

struct _ObjectProxyClass
{
  GDBusObjectProxyClass parent_class;
};

GType object_proxy_get_type (void) G_GNUC_CONST;
ObjectProxy *object_proxy_new (GDBusConnection *connection, const gchar *object_path);

#define TYPE_OBJECT_SKELETON (object_skeleton_get_type ())
#define OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_OBJECT_SKELETON, ObjectSkeleton))
#define OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_OBJECT_SKELETON, ObjectSkeletonClass))
#define OBJECT_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_OBJECT_SKELETON, ObjectSkeletonClass))
#define IS_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_OBJECT_SKELETON))
#define IS_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_OBJECT_SKELETON))

typedef struct _ObjectSkeleton ObjectSkeleton;
typedef struct _ObjectSkeletonClass ObjectSkeletonClass;
typedef struct _ObjectSkeletonPrivate ObjectSkeletonPrivate;

struct _ObjectSkeleton
{
  /*< private >*/
  GDBusObjectSkeleton parent_instance;
  ObjectSkeletonPrivate *priv;
};

struct _ObjectSkeletonClass
{
  GDBusObjectSkeletonClass parent_class;
};

GType object_skeleton_get_type (void) G_GNUC_CONST;
ObjectSkeleton *object_skeleton_new (const gchar *object_path);
void object_skeleton_set_fru (ObjectSkeleton *object, Fru *interface_);
void object_skeleton_set_fru_fan (ObjectSkeleton *object, FruFan *interface_);

/* ---- */

#define TYPE_OBJECT_MANAGER_CLIENT (object_manager_client_get_type ())
#define OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_OBJECT_MANAGER_CLIENT, ObjectManagerClient))
#define OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_OBJECT_MANAGER_CLIENT, ObjectManagerClientClass))
#define OBJECT_MANAGER_CLIENT_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_OBJECT_MANAGER_CLIENT, ObjectManagerClientClass))
#define IS_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_OBJECT_MANAGER_CLIENT))
#define IS_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_OBJECT_MANAGER_CLIENT))

typedef struct _ObjectManagerClient ObjectManagerClient;
typedef struct _ObjectManagerClientClass ObjectManagerClientClass;
typedef struct _ObjectManagerClientPrivate ObjectManagerClientPrivate;

struct _ObjectManagerClient
{
  /*< private >*/
  GDBusObjectManagerClient parent_instance;
  ObjectManagerClientPrivate *priv;
};

struct _ObjectManagerClientClass
{
  GDBusObjectManagerClientClass parent_class;
};

GType object_manager_client_get_type (void) G_GNUC_CONST;

GType object_manager_client_get_proxy_type (GDBusObjectManagerClient *manager, const gchar *object_path, const gchar *interface_name, gpointer user_data);

void object_manager_client_new (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *object_manager_client_new_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *object_manager_client_new_sync (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);

void object_manager_client_new_for_bus (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *object_manager_client_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *object_manager_client_new_for_bus_sync (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);


G_END_DECLS

#endif /* __INTERFACES_FRU_H__ */
