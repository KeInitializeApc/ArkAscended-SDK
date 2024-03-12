#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass NinjaLiveInterface.NinjaLiveInterface_C
class INinjaLiveInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INinjaLiveInterface_C* GetDefaultObj();

	void LiveFluidParams(double BrushSize);
	double LiveActivation(class FName ParamName);
};

}


