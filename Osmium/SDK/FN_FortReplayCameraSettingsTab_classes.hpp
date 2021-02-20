#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C
// 0x0048 (0x0378 - 0x0330)
class UFortReplayCameraSettingsTab_C : public UFortReplayViewSettingsTabBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class URotatorSelectorReplaySettings_C*            DamageEffects;                                            // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URotatorSelectorReplaySettings_C*            HighQualityFX;                                            // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URotatorSelectorReplaySettings_C*            NamePlates;                                               // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URotatorSelectorReplaySettings_C*            PlayerOutlines;                                           // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URotatorSelectorReplaySettings_C*            RelevancyZone;                                            // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URotatorSelectorReplaySettings_C*            ShareLensSettings;                                        // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URotatorSelectorReplaySettings_C*            TPAutoFollow;                                             // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOptionsMenuSliderReplay_C*                  TPDistanceToSubject;                                      // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C");
		return ptr;
	}


	void RefreshHighQualityFXState(const struct FFortReplayFXState& FX_State);
	void SetTPAutoFollowWidget();
	void SetTPDistanceToSubjectWidget();
	void ResetToDefault();
	void CenterOnTab();
	void OnCameraTypeChanged(class AFortPlayerControllerSpectating** FortPlayerControllerSpectating, ESpectatorCameraType* CameraType);
	void SetWidgetValues();
	void InitializeWidgets();
	void BndEvt__CameraCollision_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature(int Selected_Index);
	void BndEvt__NamePlates_K2Node_ComponentBoundEvent_1_Selection_Changed__DelegateSignature(int Selected_Index);
	void BndEvt__PlayerOutlines_K2Node_ComponentBoundEvent_2_Selection_Changed__DelegateSignature(int Selected_Index);
	void BndEvt__RelevancyZone_K2Node_ComponentBoundEvent_3_Selection_Changed__DelegateSignature(int Selected_Index);
	void BndEvt__TPAutoFollow_K2Node_ComponentBoundEvent_4_Selection_Changed__DelegateSignature(int Selected_Index);
	void BndEvt__TPDistanceToSubject_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value);
	void Destruct();
	void BndEvt__DamageEffects_K2Node_ComponentBoundEvent_29_Selection_Changed__DelegateSignature(int Selected_Index);
	void BndEvt__HighQualityFX_K2Node_ComponentBoundEvent_10_Selection_Changed__DelegateSignature(int Selected_Index);
	void Construct();
	void OnActivated();
	void BndEvt__ShareLensSettings_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature(int Selected_Index);
	void ExecuteUbergraph_FortReplayCameraSettingsTab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
