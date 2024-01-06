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
	bool                                         EnableTransport;                                   // 0x28(0x1)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, Config, EditConst, InstancedReference)
	uint8                                        Pad_9C0[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ListenEndpoint;                                    // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, InstancedReference)
	TArray<class FString>                        ConnectToEndpoints;                                // 0x40(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, InstancedReference)
	int32                                        ConnectionRetryDelay;                              // 0x50(0x4)(ConstParm, BlueprintVisible, Net, ZeroConstructor, Transient, Config, EditConst, InstancedReference)
	int32                                        ConnectionRetryPeriod;                             // 0x54(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bStopServiceWhenAppDeactivates;                    // 0x58(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_9C4[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTcpMessagingSettings* GetDefaultObj();

};

}


