#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x60 - 0x28)
// Class TcpMessaging.TcpMessagingSettings
class UTcpMessagingSettings : public UObject
{
public:
	bool                                         EnableTransport;                                   // 0x28(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference)
	uint8                                        Pad_D76[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ListenEndpoint;                                    // 0x30(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference)
	TArray<class FString>                        ConnectToEndpoints;                                // 0x40(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference)
	int32                                        ConnectionRetryDelay;                              // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference)
	int32                                        ConnectionRetryPeriod;                             // 0x54(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bStopServiceWhenAppDeactivates;                    // 0x58(0x1)(Edit, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_D77[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTcpMessagingSettings* GetDefaultObj();

};

}


