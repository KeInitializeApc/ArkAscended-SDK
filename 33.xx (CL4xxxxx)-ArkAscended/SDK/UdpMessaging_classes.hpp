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
	bool                                         EnabledByDefault;                                  // 0x28(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         EnableTransport;                                   // 0x29(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         bAutoRepair;                                       // 0x2A(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_B68[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MaxSendRate;                                       // 0x2C(0x4)(Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint32                                       AutoRepairAttemptLimit;                            // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint16                                       WorkQueueSize;                                     // 0x34(0x2)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bStopServiceWhenAppDeactivates;                    // 0x36(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B6F[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                UnicastEndpoint;                                   // 0x38(0x10)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                MulticastEndpoint;                                 // 0x48(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EUdpMessageFormat                 MessageFormat;                                     // 0x58(0x1)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        MulticastTimeToLive;                               // 0x59(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B72[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        StaticEndpoints;                                   // 0x60(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        ExcludedEndpoints;                                 // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         EnableTunnel;                                      // 0x80(0x1)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B88[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                TunnelUnicastEndpoint;                             // 0x88(0x10)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                TunnelMulticastEndpoint;                           // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        RemoteTunnelEndpoints;                             // 0xA8(0x10)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUdpMessagingSettings* GetDefaultObj();

};

}


