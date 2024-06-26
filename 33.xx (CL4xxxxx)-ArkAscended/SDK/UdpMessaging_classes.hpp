#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0xB8 - 0x28)
// Class UdpMessaging.UdpMessagingSettings
class UUdpMessagingSettings : public UObject
{
public:
	bool                                         EnabledByDefault;                                  // 0x28(0x1)(ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         EnableTransport;                                   // 0x29(0x1)(Edit, ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	bool                                         bAutoRepair;                                       // 0x2A(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AEB[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxSendRate;                                       // 0x2C(0x4)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint32                                       AutoRepairAttemptLimit;                            // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint16                                       WorkQueueSize;                                     // 0x34(0x2)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bStopServiceWhenAppDeactivates;                    // 0x36(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AF0[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                UnicastEndpoint;                                   // 0x38(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                MulticastEndpoint;                                 // 0x48(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EUdpMessageFormat                 MessageFormat;                                     // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        MulticastTimeToLive;                               // 0x59(0x1)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AF3[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        StaticEndpoints;                                   // 0x60(0x10)(EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FString>                        ExcludedEndpoints;                                 // 0x70(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         EnableTunnel;                                      // 0x80(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AF7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                TunnelUnicastEndpoint;                             // 0x88(0x10)(Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                TunnelMulticastEndpoint;                           // 0x98(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FString>                        RemoteTunnelEndpoints;                             // 0xA8(0x10)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUdpMessagingSettings* GetDefaultObj();

};

}


