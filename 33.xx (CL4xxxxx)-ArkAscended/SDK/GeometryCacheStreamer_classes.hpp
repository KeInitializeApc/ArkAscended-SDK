#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// Class GeometryCacheStreamer.GeometryCacheStreamerSettings
class UGeometryCacheStreamerSettings : public UDeveloperSettings
{
public:
	float                                        LookAheadBuffer;                                   // 0x38(0x4)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxMemoryAllowed;                                  // 0x3C(0x4)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGeometryCacheStreamerSettings* GetDefaultObj();

};

}

