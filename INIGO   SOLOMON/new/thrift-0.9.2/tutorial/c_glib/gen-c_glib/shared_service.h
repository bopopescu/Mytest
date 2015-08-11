/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef SHARED_SERVICE_H
#define SHARED_SERVICE_H

#include <thrift/c_glib/processor/thrift_dispatch_processor.h>

#include "shared_types.h"

/* SharedService service interface */
typedef struct _SharedServiceIf SharedServiceIf;  /* dummy object */

struct _SharedServiceIfInterface
{
  GTypeInterface parent;

  gboolean (*get_struct) (SharedServiceIf *iface, SharedStruct ** _return, const gint32 key, GError **error);
};
typedef struct _SharedServiceIfInterface SharedServiceIfInterface;

GType shared_service_if_get_type (void);
#define TYPE_SHARED_SERVICE_IF (shared_service_if_get_type())
#define SHARED_SERVICE_IF(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SHARED_SERVICE_IF, SharedServiceIf))
#define IS_SHARED_SERVICE_IF(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SHARED_SERVICE_IF))
#define SHARED_SERVICE_IF_GET_INTERFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), TYPE_SHARED_SERVICE_IF, SharedServiceIfInterface))

gboolean shared_service_if_get_struct (SharedServiceIf *iface, SharedStruct ** _return, const gint32 key, GError **error);

/* SharedService service client */
struct _SharedServiceClient
{
  GObject parent;

  ThriftProtocol *input_protocol;
  ThriftProtocol *output_protocol;
};
typedef struct _SharedServiceClient SharedServiceClient;

struct _SharedServiceClientClass
{
  GObjectClass parent;
};
typedef struct _SharedServiceClientClass SharedServiceClientClass;

GType shared_service_client_get_type (void);
#define TYPE_SHARED_SERVICE_CLIENT (shared_service_client_get_type())
#define SHARED_SERVICE_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SHARED_SERVICE_CLIENT, SharedServiceClient))
#define SHARED_SERVICE_CLIENT_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), TYPE_SHARED_SERVICE_CLIENT, SharedServiceClientClass))
#define SHARED_SERVICE_IS_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SHARED_SERVICE_CLIENT))
#define SHARED_SERVICE_IS_CLIENT_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), TYPE_SHARED_SERVICE_CLIENT))
#define SHARED_SERVICE_CLIENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SHARED_SERVICE_CLIENT, SharedServiceClientClass))

gboolean shared_service_client_get_struct (SharedServiceIf * iface, SharedStruct ** _return, const gint32 key, GError ** error);
gboolean shared_service_client_send_get_struct (SharedServiceIf * iface, const gint32 key, GError ** error);
gboolean shared_service_client_recv_get_struct (SharedServiceIf * iface, SharedStruct ** _return, GError ** error);
void shared_service_client_set_property (GObject *object, guint property_id, const GValue *value, GParamSpec *pspec);
void shared_service_client_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);

/* SharedService handler (abstract base class) */
struct _SharedServiceHandler
{
  GObject parent;
};
typedef struct _SharedServiceHandler SharedServiceHandler;

struct _SharedServiceHandlerClass
{
  GObjectClass parent;

  gboolean (*get_struct) (SharedServiceIf *iface, SharedStruct ** _return, const gint32 key, GError **error);
};
typedef struct _SharedServiceHandlerClass SharedServiceHandlerClass;

GType shared_service_handler_get_type (void);
#define TYPE_SHARED_SERVICE_HANDLER (shared_service_handler_get_type())
#define SHARED_SERVICE_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SHARED_SERVICE_HANDLER, SharedServiceHandler))
#define IS_SHARED_SERVICE_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SHARED_SERVICE_HANDLER))
#define SHARED_SERVICE_HANDLER_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), TYPE_SHARED_SERVICE_HANDLER, SharedServiceHandlerClass))
#define IS_SHARED_SERVICE_HANDLER_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), TYPE_SHARED_SERVICE_HANDLER))
#define SHARED_SERVICE_HANDLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SHARED_SERVICE_HANDLER, SharedServiceHandlerClass))

gboolean shared_service_handler_get_struct (SharedServiceIf *iface, SharedStruct ** _return, const gint32 key, GError **error);

/* SharedService processor */
struct _SharedServiceProcessor
{
  ThriftDispatchProcessor parent;

  /* protected */
  SharedServiceHandler *handler;
  GHashTable *process_map;
};
typedef struct _SharedServiceProcessor SharedServiceProcessor;

struct _SharedServiceProcessorClass
{
  ThriftDispatchProcessorClass parent;

  /* protected */
  gboolean (*dispatch_call) (ThriftDispatchProcessor *processor,
                             ThriftProtocol *in,
                             ThriftProtocol *out,
                             gchar *fname,
                             gint32 seqid,
                             GError **error);
};
typedef struct _SharedServiceProcessorClass SharedServiceProcessorClass;

GType shared_service_processor_get_type (void);
#define TYPE_SHARED_SERVICE_PROCESSOR (shared_service_processor_get_type())
#define SHARED_SERVICE_PROCESSOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SHARED_SERVICE_PROCESSOR, SharedServiceProcessor))
#define IS_SHARED_SERVICE_PROCESSOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SHARED_SERVICE_PROCESSOR))
#define SHARED_SERVICE_PROCESSOR_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), TYPE_SHARED_SERVICE_PROCESSOR, SharedServiceProcessorClass))
#define IS_SHARED_SERVICE_PROCESSOR_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), TYPE_SHARED_SERVICE_PROCESSOR))
#define SHARED_SERVICE_PROCESSOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SHARED_SERVICE_PROCESSOR, SharedServiceProcessorClass))

#endif /* SHARED_SERVICE_H */
