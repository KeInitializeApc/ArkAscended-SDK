#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x78 - 0x28)
// Class AnimationCore.AnimationDataSourceRegistry
class UAnimationDataSourceRegistry : public UObject
{
public:
	TMap<class FName, TWeakObjectPtr<class UObject>> DataSources;                                       // 0x28(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimationDataSourceRegistry* GetDefaultObj();

};

}


