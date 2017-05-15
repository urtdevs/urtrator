// +build !minimal

#pragma once

#ifndef GO_QTSERIALBUS_H
#define GO_QTSERIALBUS_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

struct QtSerialBus_PackedString { char* data; long long len; };
struct QtSerialBus_PackedList { void* data; long long len; };
void* QCanBus_QCanBus_Instance();
void* QCanBus_CreateDevice(void* ptr, char* plugin, char* interfaceName, char* errorMessage);
struct QtSerialBus_PackedString QCanBus_Plugins(void* ptr);
void* QCanBus___dynamicPropertyNames_atList(void* ptr, int i);
void QCanBus___dynamicPropertyNames_setList(void* ptr, void* i);
void* QCanBus___dynamicPropertyNames_newList(void* ptr);
void* QCanBus___findChildren_atList2(void* ptr, int i);
void QCanBus___findChildren_setList2(void* ptr, void* i);
void* QCanBus___findChildren_newList2(void* ptr);
void* QCanBus___findChildren_atList3(void* ptr, int i);
void QCanBus___findChildren_setList3(void* ptr, void* i);
void* QCanBus___findChildren_newList3(void* ptr);
void* QCanBus___findChildren_atList(void* ptr, int i);
void QCanBus___findChildren_setList(void* ptr, void* i);
void* QCanBus___findChildren_newList(void* ptr);
void* QCanBus___children_atList(void* ptr, int i);
void QCanBus___children_setList(void* ptr, void* i);
void* QCanBus___children_newList(void* ptr);
char QCanBus_EventDefault(void* ptr, void* e);
char QCanBus_EventFilterDefault(void* ptr, void* watched, void* event);
void QCanBus_ChildEventDefault(void* ptr, void* event);
void QCanBus_ConnectNotifyDefault(void* ptr, void* sign);
void QCanBus_CustomEventDefault(void* ptr, void* event);
void QCanBus_DeleteLaterDefault(void* ptr);
void QCanBus_DisconnectNotifyDefault(void* ptr, void* sign);
void QCanBus_TimerEventDefault(void* ptr, void* event);
void* QCanBus_MetaObjectDefault(void* ptr);
void* QCanBusDevice_NewQCanBusDevice(void* parent);
struct QtSerialBus_PackedString QCanBusDevice_InterpretErrorFrame(void* ptr, void* frame);
char QCanBusDevice_ConnectDevice(void* ptr);
char QCanBusDevice_Open(void* ptr);
char QCanBusDevice_WaitForFramesReceived(void* ptr, int msecs);
char QCanBusDevice_WaitForFramesReceivedDefault(void* ptr, int msecs);
char QCanBusDevice_WaitForFramesWritten(void* ptr, int msecs);
char QCanBusDevice_WaitForFramesWrittenDefault(void* ptr, int msecs);
char QCanBusDevice_WriteFrame(void* ptr, void* frame);
void QCanBusDevice_Close(void* ptr);
void QCanBusDevice_DisconnectDevice(void* ptr);
void QCanBusDevice_EnqueueOutgoingFrame(void* ptr, void* newFrame);
void QCanBusDevice_EnqueueReceivedFrames(void* ptr, void* newFrames);
void QCanBusDevice_ConnectErrorOccurred(void* ptr);
void QCanBusDevice_DisconnectErrorOccurred(void* ptr);
void QCanBusDevice_ErrorOccurred(void* ptr, long long error);
void QCanBusDevice_ConnectFramesReceived(void* ptr);
void QCanBusDevice_DisconnectFramesReceived(void* ptr);
void QCanBusDevice_FramesReceived(void* ptr);
void QCanBusDevice_ConnectFramesWritten(void* ptr);
void QCanBusDevice_DisconnectFramesWritten(void* ptr);
void QCanBusDevice_FramesWritten(void* ptr, long long framesCount);
void QCanBusDevice_SetConfigurationParameter(void* ptr, int key, void* value);
void QCanBusDevice_SetConfigurationParameterDefault(void* ptr, int key, void* value);
void QCanBusDevice_SetError(void* ptr, char* errorText, long long errorId);
void QCanBusDevice_SetState(void* ptr, long long newState);
void QCanBusDevice_ConnectStateChanged(void* ptr);
void QCanBusDevice_DisconnectStateChanged(void* ptr);
void QCanBusDevice_StateChanged(void* ptr, long long state);
long long QCanBusDevice_State(void* ptr);
long long QCanBusDevice_Error(void* ptr);
struct QtSerialBus_PackedString QCanBusDevice_ErrorString(void* ptr);
void* QCanBusDevice_ConfigurationParameter(void* ptr, int key);
struct QtSerialBus_PackedList QCanBusDevice_ConfigurationKeys(void* ptr);
char QCanBusDevice_HasOutgoingFrames(void* ptr);
long long QCanBusDevice_FramesAvailable(void* ptr);
long long QCanBusDevice_FramesToWrite(void* ptr);
void QCanBusDevice___enqueueReceivedFrames_newFrames_setList(void* ptr, void* i);
void* QCanBusDevice___enqueueReceivedFrames_newFrames_newList(void* ptr);
int QCanBusDevice___configurationKeys_atList(void* ptr, int i);
void QCanBusDevice___configurationKeys_setList(void* ptr, int i);
void* QCanBusDevice___configurationKeys_newList(void* ptr);
void* QCanBusDevice___dynamicPropertyNames_atList(void* ptr, int i);
void QCanBusDevice___dynamicPropertyNames_setList(void* ptr, void* i);
void* QCanBusDevice___dynamicPropertyNames_newList(void* ptr);
void* QCanBusDevice___findChildren_atList2(void* ptr, int i);
void QCanBusDevice___findChildren_setList2(void* ptr, void* i);
void* QCanBusDevice___findChildren_newList2(void* ptr);
void* QCanBusDevice___findChildren_atList3(void* ptr, int i);
void QCanBusDevice___findChildren_setList3(void* ptr, void* i);
void* QCanBusDevice___findChildren_newList3(void* ptr);
void* QCanBusDevice___findChildren_atList(void* ptr, int i);
void QCanBusDevice___findChildren_setList(void* ptr, void* i);
void* QCanBusDevice___findChildren_newList(void* ptr);
void* QCanBusDevice___children_atList(void* ptr, int i);
void QCanBusDevice___children_setList(void* ptr, void* i);
void* QCanBusDevice___children_newList(void* ptr);
char QCanBusDevice_EventDefault(void* ptr, void* e);
char QCanBusDevice_EventFilterDefault(void* ptr, void* watched, void* event);
void QCanBusDevice_ChildEventDefault(void* ptr, void* event);
void QCanBusDevice_ConnectNotifyDefault(void* ptr, void* sign);
void QCanBusDevice_CustomEventDefault(void* ptr, void* event);
void QCanBusDevice_DeleteLaterDefault(void* ptr);
void QCanBusDevice_DisconnectNotifyDefault(void* ptr, void* sign);
void QCanBusDevice_TimerEventDefault(void* ptr, void* event);
void* QCanBusDevice_MetaObjectDefault(void* ptr);
void* QCanBusFactory_CreateDevice(void* ptr, char* interfaceName, char* errorMessage);
int QCanBusFrame_TransmissionTimeoutError_Type();
int QCanBusFrame_LostArbitrationError_Type();
int QCanBusFrame_ControllerError_Type();
int QCanBusFrame_ProtocolViolationError_Type();
int QCanBusFrame_TransceiverError_Type();
int QCanBusFrame_MissingAcknowledgmentError_Type();
int QCanBusFrame_BusOffError_Type();
int QCanBusFrame_BusError_Type();
int QCanBusFrame_ControllerRestartError_Type();
int QCanBusFrame_UnknownError_Type();
int QCanBusFrame_AnyError_Type();
void* QCanBusFrame_NewQCanBusFrame(long long ty);
void* QCanBusFrame_NewQCanBusFrame2(unsigned int identifier, void* data);
void QCanBusFrame_SetError(void* ptr, long long error);
void QCanBusFrame_SetExtendedFrameFormat(void* ptr, char isExtended);
void QCanBusFrame_SetFlexibleDataRateFormat(void* ptr, char isFlexibleData);
void QCanBusFrame_SetFrameId(void* ptr, unsigned int newFrameId);
void QCanBusFrame_SetFrameType(void* ptr, long long newType);
void QCanBusFrame_SetPayload(void* ptr, void* data);
long long QCanBusFrame_Error(void* ptr);
long long QCanBusFrame_FrameType(void* ptr);
void* QCanBusFrame_Payload(void* ptr);
struct QtSerialBus_PackedString QCanBusFrame_ToString(void* ptr);
char QCanBusFrame_HasExtendedFrameFormat(void* ptr);
char QCanBusFrame_HasFlexibleDataRateFormat(void* ptr);
char QCanBusFrame_IsValid(void* ptr);
unsigned int QCanBusFrame_FrameId(void* ptr);
void* QModbusClient_NewQModbusClient(void* parent);
void* QModbusClient_SendRawRequest(void* ptr, void* request, int serverAddress);
void* QModbusClient_SendReadRequest(void* ptr, void* read, int serverAddress);
void* QModbusClient_SendReadWriteRequest(void* ptr, void* read, void* write, int serverAddress);
void* QModbusClient_SendWriteRequest(void* ptr, void* write, int serverAddress);
char QModbusClient_ProcessPrivateResponse(void* ptr, void* response, void* data);
char QModbusClient_ProcessPrivateResponseDefault(void* ptr, void* response, void* data);
char QModbusClient_ProcessResponse(void* ptr, void* response, void* data);
char QModbusClient_ProcessResponseDefault(void* ptr, void* response, void* data);
void QModbusClient_SetNumberOfRetries(void* ptr, int number);
void QModbusClient_SetTimeout(void* ptr, int newTimeout);
void QModbusClient_ConnectTimeoutChanged(void* ptr);
void QModbusClient_DisconnectTimeoutChanged(void* ptr);
void QModbusClient_TimeoutChanged(void* ptr, int newTimeout);
int QModbusClient_NumberOfRetries(void* ptr);
int QModbusClient_Timeout(void* ptr);
char QModbusClient_Open(void* ptr);
char QModbusClient_OpenDefault(void* ptr);
void QModbusClient_Close(void* ptr);
void QModbusClient_CloseDefault(void* ptr);
void* QModbusDataUnit_NewQModbusDataUnit();
void* QModbusDataUnit_NewQModbusDataUnit2(long long ty);
void* QModbusDataUnit_NewQModbusDataUnit4(long long ty, int address, void* data);
void* QModbusDataUnit_NewQModbusDataUnit3(long long ty, int address, unsigned short size);
void QModbusDataUnit_SetRegisterType(void* ptr, long long ty);
void QModbusDataUnit_SetStartAddress(void* ptr, int address);
void QModbusDataUnit_SetValue(void* ptr, int index, unsigned short value);
void QModbusDataUnit_SetValueCount(void* ptr, unsigned int newCount);
void QModbusDataUnit_SetValues(void* ptr, void* values);
struct QtSerialBus_PackedList QModbusDataUnit_Values(void* ptr);
long long QModbusDataUnit_RegisterType(void* ptr);
char QModbusDataUnit_IsValid(void* ptr);
int QModbusDataUnit_StartAddress(void* ptr);
unsigned short QModbusDataUnit_Value(void* ptr, int index);
unsigned int QModbusDataUnit_ValueCount(void* ptr);
unsigned short QModbusDataUnit___QModbusDataUnit_data_atList4(void* ptr, int i);
void QModbusDataUnit___QModbusDataUnit_data_setList4(void* ptr, unsigned short i);
void* QModbusDataUnit___QModbusDataUnit_data_newList4(void* ptr);
unsigned short QModbusDataUnit___setValues_values_atList(void* ptr, int i);
void QModbusDataUnit___setValues_values_setList(void* ptr, unsigned short i);
void* QModbusDataUnit___setValues_values_newList(void* ptr);
unsigned short QModbusDataUnit___values_atList(void* ptr, int i);
void QModbusDataUnit___values_setList(void* ptr, unsigned short i);
void* QModbusDataUnit___values_newList(void* ptr);
void* QModbusDevice_NewQModbusDevice(void* parent);
char QModbusDevice_ConnectDevice(void* ptr);
char QModbusDevice_Open(void* ptr);
void QModbusDevice_Close(void* ptr);
void QModbusDevice_DisconnectDevice(void* ptr);
void QModbusDevice_ConnectErrorOccurred(void* ptr);
void QModbusDevice_DisconnectErrorOccurred(void* ptr);
void QModbusDevice_ErrorOccurred(void* ptr, long long error);
void QModbusDevice_SetConnectionParameter(void* ptr, int parameter, void* value);
void QModbusDevice_SetError(void* ptr, char* errorText, long long error);
void QModbusDevice_SetState(void* ptr, long long newState);
void QModbusDevice_ConnectStateChanged(void* ptr);
void QModbusDevice_DisconnectStateChanged(void* ptr);
void QModbusDevice_StateChanged(void* ptr, long long state);
void QModbusDevice_DestroyQModbusDevice(void* ptr);
long long QModbusDevice_Error(void* ptr);
struct QtSerialBus_PackedString QModbusDevice_ErrorString(void* ptr);
void* QModbusDevice_ConnectionParameter(void* ptr, int parameter);
long long QModbusDevice_State(void* ptr);
void* QModbusDevice___dynamicPropertyNames_atList(void* ptr, int i);
void QModbusDevice___dynamicPropertyNames_setList(void* ptr, void* i);
void* QModbusDevice___dynamicPropertyNames_newList(void* ptr);
void* QModbusDevice___findChildren_atList2(void* ptr, int i);
void QModbusDevice___findChildren_setList2(void* ptr, void* i);
void* QModbusDevice___findChildren_newList2(void* ptr);
void* QModbusDevice___findChildren_atList3(void* ptr, int i);
void QModbusDevice___findChildren_setList3(void* ptr, void* i);
void* QModbusDevice___findChildren_newList3(void* ptr);
void* QModbusDevice___findChildren_atList(void* ptr, int i);
void QModbusDevice___findChildren_setList(void* ptr, void* i);
void* QModbusDevice___findChildren_newList(void* ptr);
void* QModbusDevice___children_atList(void* ptr, int i);
void QModbusDevice___children_setList(void* ptr, void* i);
void* QModbusDevice___children_newList(void* ptr);
char QModbusDevice_EventDefault(void* ptr, void* e);
char QModbusDevice_EventFilterDefault(void* ptr, void* watched, void* event);
void QModbusDevice_ChildEventDefault(void* ptr, void* event);
void QModbusDevice_ConnectNotifyDefault(void* ptr, void* sign);
void QModbusDevice_CustomEventDefault(void* ptr, void* event);
void QModbusDevice_DeleteLaterDefault(void* ptr);
void QModbusDevice_DisconnectNotifyDefault(void* ptr, void* sign);
void QModbusDevice_TimerEventDefault(void* ptr, void* event);
void* QModbusDevice_MetaObjectDefault(void* ptr);
void* QModbusDeviceIdentification_QModbusDeviceIdentification_FromByteArray(void* ba);
void* QModbusDeviceIdentification_NewQModbusDeviceIdentification();
char QModbusDeviceIdentification_Insert(void* ptr, unsigned int objectId, void* value);
void QModbusDeviceIdentification_Remove(void* ptr, unsigned int objectId);
void QModbusDeviceIdentification_SetConformityLevel(void* ptr, long long level);
long long QModbusDeviceIdentification_ConformityLevel(void* ptr);
void* QModbusDeviceIdentification_Value(void* ptr, unsigned int objectId);
struct QtSerialBus_PackedList QModbusDeviceIdentification_ObjectIds(void* ptr);
char QModbusDeviceIdentification_Contains(void* ptr, unsigned int objectId);
char QModbusDeviceIdentification_IsValid(void* ptr);
int QModbusDeviceIdentification___objectIds_atList(void* ptr, int i);
void QModbusDeviceIdentification___objectIds_setList(void* ptr, int i);
void* QModbusDeviceIdentification___objectIds_newList(void* ptr);
void* QModbusExceptionResponse_NewQModbusExceptionResponse();
void* QModbusExceptionResponse_NewQModbusExceptionResponse3(long long code, long long ec);
void* QModbusExceptionResponse_NewQModbusExceptionResponse2(void* pdu);
void QModbusExceptionResponse_SetExceptionCode(void* ptr, long long ec);
void* QModbusPdu_NewQModbusPdu();
void* QModbusPdu_NewQModbusPdu2(long long code, void* data);
void* QModbusPdu_NewQModbusPdu3(void* other);
void QModbusPdu_SetData(void* ptr, void* data);
void QModbusPdu_SetFunctionCode(void* ptr, long long code);
void QModbusPdu_SetFunctionCodeDefault(void* ptr, long long code);
void QModbusPdu_DestroyQModbusPdu(void* ptr);
void QModbusPdu_DestroyQModbusPduDefault(void* ptr);
long long QModbusPdu_ExceptionCode(void* ptr);
long long QModbusPdu_FunctionCode(void* ptr);
void* QModbusPdu_Data(void* ptr);
char QModbusPdu_IsException(void* ptr);
char QModbusPdu_IsValid(void* ptr);
short QModbusPdu_DataSize(void* ptr);
short QModbusPdu_Size(void* ptr);
void* QModbusPdu___encode_vector_atList2(void* ptr, int i);
void QModbusPdu___encode_vector_setList2(void* ptr, void* i);
void* QModbusPdu___encode_vector_newList2(void* ptr);
void* QModbusReply_NewQModbusReply(long long ty, int serverAddress, void* parent);
void QModbusReply_ConnectErrorOccurred(void* ptr);
void QModbusReply_DisconnectErrorOccurred(void* ptr);
void QModbusReply_ErrorOccurred(void* ptr, long long error);
void QModbusReply_ConnectFinished(void* ptr);
void QModbusReply_DisconnectFinished(void* ptr);
void QModbusReply_Finished(void* ptr);
void* QModbusReply_Result(void* ptr);
long long QModbusReply_Error(void* ptr);
void* QModbusReply_RawResult(void* ptr);
struct QtSerialBus_PackedString QModbusReply_ErrorString(void* ptr);
long long QModbusReply_Type(void* ptr);
char QModbusReply_IsFinished(void* ptr);
int QModbusReply_ServerAddress(void* ptr);
void* QModbusReply___dynamicPropertyNames_atList(void* ptr, int i);
void QModbusReply___dynamicPropertyNames_setList(void* ptr, void* i);
void* QModbusReply___dynamicPropertyNames_newList(void* ptr);
void* QModbusReply___findChildren_atList2(void* ptr, int i);
void QModbusReply___findChildren_setList2(void* ptr, void* i);
void* QModbusReply___findChildren_newList2(void* ptr);
void* QModbusReply___findChildren_atList3(void* ptr, int i);
void QModbusReply___findChildren_setList3(void* ptr, void* i);
void* QModbusReply___findChildren_newList3(void* ptr);
void* QModbusReply___findChildren_atList(void* ptr, int i);
void QModbusReply___findChildren_setList(void* ptr, void* i);
void* QModbusReply___findChildren_newList(void* ptr);
void* QModbusReply___children_atList(void* ptr, int i);
void QModbusReply___children_setList(void* ptr, void* i);
void* QModbusReply___children_newList(void* ptr);
char QModbusReply_EventDefault(void* ptr, void* e);
char QModbusReply_EventFilterDefault(void* ptr, void* watched, void* event);
void QModbusReply_ChildEventDefault(void* ptr, void* event);
void QModbusReply_ConnectNotifyDefault(void* ptr, void* sign);
void QModbusReply_CustomEventDefault(void* ptr, void* event);
void QModbusReply_DeleteLaterDefault(void* ptr);
void QModbusReply_DisconnectNotifyDefault(void* ptr, void* sign);
void QModbusReply_TimerEventDefault(void* ptr, void* event);
void* QModbusReply_MetaObjectDefault(void* ptr);
void* QModbusRequest_NewQModbusRequest();
void* QModbusRequest_NewQModbusRequest3(long long code, void* data);
void* QModbusRequest_NewQModbusRequest2(void* pdu);
int QModbusRequest_QModbusRequest_CalculateDataSize(void* request);
int QModbusRequest_QModbusRequest_MinimumDataSize(void* request);
void* QModbusResponse_NewQModbusResponse();
void* QModbusResponse_NewQModbusResponse3(long long code, void* data);
void* QModbusResponse_NewQModbusResponse2(void* pdu);
int QModbusResponse_QModbusResponse_CalculateDataSize(void* response);
int QModbusResponse_QModbusResponse_MinimumDataSize(void* response);
void* QModbusRtuSerialMaster_NewQModbusRtuSerialMaster(void* parent);
void QModbusRtuSerialMaster_SetInterFrameDelay(void* ptr, int microseconds);
int QModbusRtuSerialMaster_InterFrameDelay(void* ptr);
void* QModbusRtuSerialSlave_NewQModbusRtuSerialSlave(void* parent);
void QModbusRtuSerialSlave_DestroyQModbusRtuSerialSlave(void* ptr);
void* QModbusServer_ProcessPrivateRequest(void* ptr, void* request);
void* QModbusServer_ProcessPrivateRequestDefault(void* ptr, void* request);
void* QModbusServer_ProcessRequest(void* ptr, void* request);
void* QModbusServer_ProcessRequestDefault(void* ptr, void* request);
void* QModbusServer_NewQModbusServer(void* parent);
char QModbusServer_SetData2(void* ptr, long long table, unsigned short address, unsigned short data);
char QModbusServer_SetData(void* ptr, void* newData);
char QModbusServer_SetValue(void* ptr, int option, void* newValue);
char QModbusServer_SetValueDefault(void* ptr, int option, void* newValue);
char QModbusServer_WriteData(void* ptr, void* newData);
char QModbusServer_WriteDataDefault(void* ptr, void* newData);
void QModbusServer_ConnectDataWritten(void* ptr);
void QModbusServer_DisconnectDataWritten(void* ptr);
void QModbusServer_DataWritten(void* ptr, long long regist, int address, int size);
void QModbusServer_SetServerAddress(void* ptr, int serverAddress);
void* QModbusServer_Value(void* ptr, int option);
void* QModbusServer_ValueDefault(void* ptr, int option);
char QModbusServer_Data(void* ptr, void* newData);
char QModbusServer_Data2(void* ptr, long long table, unsigned short address, unsigned short data);
char QModbusServer_ProcessesBroadcast(void* ptr);
char QModbusServer_ProcessesBroadcastDefault(void* ptr);
char QModbusServer_ReadData(void* ptr, void* newData);
char QModbusServer_ReadDataDefault(void* ptr, void* newData);
int QModbusServer_ServerAddress(void* ptr);
char QModbusServer_Open(void* ptr);
char QModbusServer_OpenDefault(void* ptr);
void QModbusServer_Close(void* ptr);
void QModbusServer_CloseDefault(void* ptr);
void* QModbusTcpClient_NewQModbusTcpClient(void* parent);
void QModbusTcpClient_DestroyQModbusTcpClient(void* ptr);
void* QModbusTcpServer_NewQModbusTcpServer(void* parent);
void QModbusTcpServer_DestroyQModbusTcpServer(void* ptr);

#ifdef __cplusplus
}
#endif

#endif